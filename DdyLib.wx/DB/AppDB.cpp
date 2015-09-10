#include <wx-3.0/wx/gtk/textctrl.h>
#include <wx-3.0/wx/window.h>
#include <wx-3.0/wx/gtk/combobox.h>
#include <wx-3.0/wx/datectrl.h>

#include "AppDB.h"

/*
 * AppDB.cpp
 *
 *  Created on: Dec 22, 2014
 *      Author: dedy
 */

AppDB::AppDB(wxString host, wxString port, wxString dbname, wxString username, wxString password) {

	// Choose database backend:
	m_db = new DBSQLite(host, port, dbname, username, password);
	//m_db = new DBMySQl(host, port, dbname, username, password);
	//m_db = new DBPostgresql(host, port, dbname, username, password);

	m_connect = m_db->connect();

}

AppDB::~AppDB() {
	// TODO Auto-generated destructor stub
}

int AppDB::x_DelRecord(const wxString& table, const wxString& rowid) {
	wxString where = wxString::Format(" WHERE rowid='%s' ", rowid);
	const wxString& sql = wxString::Format(" DELETE FROM %s %s; ", table, where);
	int del_cnt = m_db->ExecUpdate(sql);
	return del_cnt;
}

int AppDB::UpdateRecord(const wxString& table, const wxArrayString& columns, const wxArrayString& values, const wxString& where) {
	wxString whr = where;
	whr = whr.Trim(true);
	whr = (whr == "") ? "" : whr = " WHERE " + whr;
	wxString colval;
	size_t i;
	for (i = 0; i < columns.GetCount() - 1; i++)
		colval = wxString::Format(" %s %s='%s', ", colval, columns[i], values[i]);
	colval = wxString::Format(" %s %s='%s'", colval, columns[i], values[i]);
	wxString sql = wxString::Format(" UPDATE %s SET %s %s ", table, colval, whr);
	return m_db->ExecUpdate(sql);
}

void AppDB::CreateIndex(const wxString& table, const wxString& column) {
	wxString sql = wxString::Format(" CREATE INDEX IF NOT EXISTS idx_%s_%s ON %s (%s); ", table, column, table, column);
	m_db->ExecUpdate(sql);
}

wxString AppDB::GetConfig(wxString key, wxString table) {
	wxString column = "value";
	wxString where = wxString::Format(" key='%s' ", key);
	wxString value = m_db->GetSingleValue(table, column, where);
	return value;
}

void AppDB::SetConfig(wxString key, wxString value, wxString table) {
	wxString sql = wxString::Format(" SELECT COUNT(*) FROM %s WHERE key='%s'; ", table, key);
	int i = m_db->ExecScalar(sql);
	if (i == 0)
	{
		sql = wxString::Format(" INSERT INTO %s(key, value) VALUES('%s', '%s'); ", table, key, value);
	} else
	{
		sql = wxString::Format(" UPDATE %s SET value='%s' WHERE key='%s'; ", table, value, key);
	}
	i = m_db->ExecUpdate(sql);
	return; //i
}

void AppDB::InsertOrUpdate(const wxString& table, const wxArrayString& columns, const wxArrayString& values, const wxString& where) {

	if( IsRcdExist(table, where) )
		UpdateRecord( table, columns, values, where );
	else
		SaveRecord( table, columns, values );
}

bool AppDB::IsRcdExist(wxString table, wxString where) {
	int i = m_db->GetRecordCount(table, where);
	bool bval = ( i>0 ) ? true : false;
	return bval;
}

MyJSONValue AppDB::GetColumnListByIdx( wxString table, wxString columns )
{
	MyJSONValue val = m_db->GetColumnList(table, columns, DBBase::BYINDEX);	// ini column alias

	wxString str = columns;
	wxArrayString arrstr = StringToArray( str, "," );
	for( size_t i = 0; i<arrstr.GetCount(); i++ )
	{
		wxString colname = arrstr[i];
		wxString colname2;

		int as_pos = colname.Find(" as ");
		if( as_pos > 0 )
		{
			colname2 = colname.Left(as_pos).Trim(true).Trim(false);

		} else {
			colname2 = colname.Trim(true).Trim(false);
		}

		val[ORIG][i] = colname2;

	}

	//wxLogTrace( wxTraceMask(), s );

	return val;
}

void AppDB::UpdateTable( const wxString& table, MyJSONValue& rcd, const wxString& where )
{
	bool isExist = IsRcdExist(table, where);
	const wxJSONInternalMap *map = rcd.AsMap();
	wxASSERT(map);
	wxJSONInternalMap::const_iterator iter;
	wxString sql, columns, values, comma;
	for( iter = map->begin(); iter != map->end(); iter++ )
	{
		const wxJSONInternalMap::value_type& v = *iter;
		wxString key = v.first;
		wxString val = v.second.AsString();

		if( !isExist ) {
			//insert
			comma   = ( values=="" ) ? "" : ", ";
			columns = columns + comma +       key      ;
			values  = values  + comma + "'" + val + "'";

		} else {
			//update
			comma   = ( values=="" ) ? "" : ", ";
			values = wxString::Format( "%s%s %s='%s'", values, comma, key, val );
		}
	}

	if( !isExist ) {
		//insert
		sql = wxString::Format( "INSERT INTO %s(%s) VALUES(%s);", table, columns, values);
	} else {
		//update
		sql = wxString::Format( " UPDATE %s SET %s WHERE %s; ", table, values, where);
	}

	m_db->ExecUpdate(sql);

	//const wxJSONInternalMap *map = rcd.AsMap();
	//wxASSERT(map);
	//wxJSONInternalMap::const_iterator iter;
	//wxString sql, columns, values, comma;
	//for( iter = map->begin(); iter != map->end(); iter++ )
	//{
	//	const wxJSONInternalMap::value_type& v = *iter;
	//	wxString key = v.first;
	//	wxString val = v.second.AsString();
	//
	//	if( where == "0" ) {
	//		//insert
	//		comma   = ( values=="" ) ? "" : ", ";
	//		columns = columns + comma +       key      ;
	//		values  = values  + comma + "'" + val + "'";
	//
	//	} else {
	//		//update
	//		comma   = ( values=="" ) ? "" : ", ";
	//		values = wxString::Format( "%s%s %s='%s'", values, comma, key, val );
	//	}
	//}
	//
	//if( where == "0" ) {
	//	//insert
	//	sql = wxString::Format( "INSERT INTO %s(%s) VALUES(%s);", table, columns, values);
	//} else {
	//	//update
	//	sql = wxString::Format( " UPDATE %s SET %s WHERE %s; ", table, values, where);
	//}
	//
	//m_db->ExecUpdate(sql);

}

int AppDB::DeleteRecord( const wxString& table, const wxString& where )
{
	const wxString& sql = wxString::Format(" DELETE FROM %s WHERE %s; ", table, where);
	int del_cnt = m_db->ExecUpdate(sql);
	return del_cnt;
}

void AppDB::ResetColumn()
{
    columns.Clear();
    values.Clear();
}

void AppDB::AddInput(wxControl* control)
{
    wxString col, val;
    
    if ( control->IsKindOf( wxCLASSINFO( wxTextCtrl ) ) ) {
        wxTextCtrl* ctrl = (wxTextCtrl*) control;
        col = ctrl->GetName();
        val = ctrl->GetValue();
    }

    if ( control->IsKindOf( wxCLASSINFO( wxComboBox ) ) ) {
        wxComboBox* ctrl = (wxComboBox*) control;
        col = ctrl->GetName();
        val = ctrl->GetValue();
    }

    if ( control->IsKindOf( wxCLASSINFO( wxDatePickerCtrl ) ) ) {
        wxDatePickerCtrl* ctrl = (wxDatePickerCtrl*) control;
        col = ctrl->GetName();
        val = ( ctrl->GetValue() ) . FormatISODate();
    }
    
    if ( control->IsKindOf( wxCLASSINFO( wxRadioBox ) ) ) {
        wxRadioBox* ctrl = (wxRadioBox*) control;
        col = ctrl->GetName();
        val = ctrl->GetStringSelection();
    }
    
    col.Replace("fld_", "");    // trim fld_

    columns.Add( col );
    values.Add( val );
    
}

void AppDB::InsertOrUpdate2(const wxString& table, const int rcd_id)
{
    switch( rcd_id ) 
    {
        case 0:     // Insert
            SaveRecord( table, columns, values );
            break;
        default:    // Update
            wxString where = wxString::Format( " id=%d ", rcd_id );
            UpdateRecord( table, columns, values, where );
            break;
    }
}

