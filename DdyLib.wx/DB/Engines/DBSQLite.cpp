/*
 * DBSQLite.cpp
 *
 *  Created on: Dec 19, 2014
 *      Author: dedy
 */

#include "DBSQLite.h"

DBSQLite::DBSQLite(wxString host, wxString port, wxString dbname, wxString username, wxString password) :
		DBBase(host, port, dbname, username, password) {
	// init
	m_dbtype = DBTYPE;
	m_db = NULL;
}

DBSQLite::~DBSQLite() {
	// TODO Auto-generated destructor stub
}

bool DBSQLite::connect() {
	m_db = new wxSQLite3Database();
	m_db->Open(m_dbname);
	return m_db->IsOpen();
}

// Ddy: get single value based on key
wxString DBSQLite::GetSingleValue(wxString table, wxString column, wxString criteria) {
	wxString result = "";
	wxString sql = " SELECT " + column + " FROM " + table + " WHERE " + criteria + " LIMIT 1; ";
	try
	{
		wxSQLite3Statement st = m_db->PrepareStatement(sql);
		wxSQLite3ResultSet rs = st.ExecuteQuery();
		result = rs.GetAsString(column);
	} catch (wxSQLite3Exception &e)
	{
		result = "";
		LOGERR(e.GetMessage(), sql);
	}
	return result;
}

// get var (1 column), many rows
wxArrayString DBSQLite::GetColumnValues(wxString table, wxString column, wxString where, wxString orderby, wxString custom_sql) {

	wxSQLite3ResultSet rs = this->getRS(column, table, where, orderby);
	wxArrayString array;

	if (!rs.IsOk())
		return array;

	while (rs.NextRow())
	{
		array.Add(rs.GetAsString(0));
	}
	return array;

}

wxString DBSQLite::GetTablenameBy(wxString column) {
	wxString criteria = " type='table' AND sql like('%username%') AND sql like('%" + column + "%') ";
	wxString tablename = GetSingleValue("sqlite_master", "tbl_name", criteria);
	return tablename;
}

wxString DBSQLite::Test() {
	return __PRETTY_FUNCTION__;
}

int DBSQLite::ExecScalar(const wxString& sql) {
	int result = 0;
	try
	{
		result = m_db->ExecuteScalar(sql);
	} catch (wxSQLite3Exception &e)
	{
		result = 0;
		LOGERR(e.GetMessage(), sql);
	}
	return result;
}

void DBSQLite::SaveToTable(wxString table, wxString columns, wxString values) {
	wxString sql = " INSERT INTO " + table + "( " + columns + " ) VALUES( " + values + " ); ";
	try
	{
		m_db->ExecuteUpdate(sql);
	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), sql);
	}
}

int DBSQLite::ExecUpdate(const wxString& sql) {
	int ret;
	try
	{
		ret = m_db->ExecuteUpdate(sql);
	} catch (wxSQLite3Exception &e)
	{
		ret = 0;
		LOGERR(e.GetMessage(), sql);
	}
	//LOGMSG(sql);
	return ret;
}

wxString DBSQLite::getConfig(wxString section, wxString key) {
	wxString criteria; // = " section='"+section+"' AND key='"+key+"' ";
	criteria = FORMAT(" section='%s' AND key='%s' ", section, key);
	wxString value = GetSingleValue("app_config", "value", criteria);
	return value;
}

void DBSQLite::setConfig(wxString section, wxString key, wxString value) {
	wxString columns = " section, key, value ";
	wxString values = FORMAT(" '%s','%s','%s' ", section, key, value);
	this->SaveToTable("app_config", columns, values);
}

wxArrayString DBSQLite::MakeColumns(const wxString& sql) {
	wxArrayString result;
	try
	{
		wxSQLite3ResultSet rs = m_db->ExecuteQuery(sql);
		int col_cnt = rs.GetColumnCount();
		for (int i = 0; i < col_cnt; i++)
		{
			result.Add(rs.GetColumnName(i));
		}
	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), sql);
	}

	return result;
}

wxString DBSQLite::xx_getValueByRow(unsigned row, unsigned col, const wxString& table, const wxString& columns_str, const wxString &where, const wxString &orderby) {
	wxString sql, value;
	sql = wxString::Format(" SELECT %s FROM %s %s %s LIMIT 1 OFFSET %d ", columns_str, table, where, orderby, row);
	try
	{
		wxSQLite3ResultSet rs = m_db->ExecuteQuery(sql);
		value = rs.GetAsString(col);
	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), sql);
	}

	return value;
}

unsigned int DBSQLite::GetRecordCount(const wxString& table, const wxString& where) {
	wxString whr = where;
	whr = whr.Trim(true);
	whr = (whr == "") ? "" : whr = " WHERE " + whr;
	wxString sql = FORMAT( " SELECT COUNT(*) FROM %s %s; ", table, whr);
	unsigned int rcd_cnt = (unsigned int) this->ExecScalar(sql);
        //TRACE(sql);
	return rcd_cnt;
}

wxArrayString* DBSQLite::xx_GetValueByRow3(unsigned row, const wxString& table, const wxString& columns_str, const wxString& where, const wxString& orderby) {
	wxArrayString *array = new wxArrayString();
	wxString sql;
	sql = wxString::Format(" SELECT %s FROM %s %s %s LIMIT 1 OFFSET %d; ", columns_str, table, where, orderby, row);
	wxSQLite3ResultSet rs = getRS(sql);
	for (int i = 0; i < rs.GetColumnCount(); i++)
	{
		array->Add(rs.GetAsString(i));
	}
	return array;
}

//wxArrayString DBSQLite::GetRecord(const wxString& columns, const wxString& table, const wxString& where, const wxString& orderby, const int limit, const int offset) {
//
//	wxString cols = columns;
//	wxString tbl = table;
//	wxString whr = where; whr = whr.Trim(true); whr = ( whr=="" ) ? "" : whr = " WHERE " + whr;
//	wxString ordby = orderby; ordby = ordby.Trim(true); ordby = ( ordby=="" ) ? "" : ordby = wxString::Format( " ORDER BY %s ASC ", ordby );
//	wxString lim = ( limit==-1 ) ? "" : wxString::Format( "LIMIT %d", limit);
//	wxString off = ( offset==-1 ) ? "" : wxString::Format( "OFFSET %d", offset);
//	wxString sql = wxString::Format( " SELECT %s FROM %s %s %s %s %s; ", cols, tbl, whr, ordby, lim, off );
//
//	wxArrayString result;
//	wxSQLite3ResultSet rs = GETRS(sql);
//
//	for(int i=0; i < rs.GetColumnCount(); i++) {
//		wxString s = rs.GetAsString(i);
//		result.Add(s);
//	}
//	return result;
//}

wxSQLite3ResultSet DBSQLite::getRS(const wxString& sql)
{
	wxSQLite3ResultSet rs;
	m_db->Begin();
	try
	{
		rs = m_db->ExecuteQuery(sql);
		m_db->Commit();
	} catch (wxSQLite3Exception &e)
	{
		m_db->Rollback();
		LOGERR(e.GetMessage(), sql);
	}
	return rs;
}

MyJSONValue DBSQLite::GetRecord( const JSONTYPE byWhat, const wxString& table, const wxString& columns, const wxString& where, const wxString& orderby, const int limit, const int offset )
{
	MyJSONValue rcd;

	try
	{
		wxSQLite3ResultSet rs = getRS(columns, table, where, orderby, limit, offset);

		int row=0;
		while( rs.NextRow() )
		{
			wxString strRow = wxString::Format("ROW%d",row);
			rcd[strRow] = row;
			for( int i=0; i<rs.GetColumnCount(); i++  )
			{
				wxString col_name = rs.GetColumnName(i);
				wxString col_value = rs.GetAsString(i);
				if( byWhat == BYNAME )  rcd[strRow] [col_name] = col_value;			// field by name
				if( byWhat == BYINDEX ) rcd[strRow] [i]        = col_value;			// field by idx
			}
			row++;
		}
	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), "");
	}

	return rcd;
}

wxString DBSQLite::GetSingleValue3(wxString table, wxString column, wxString criteria)
{
	wxString result = "";


	return result;
}

wxSQLite3ResultSet DBSQLite::getRS(const wxString& columns, const wxString& table, const wxString& where, const wxString& orderby, const int limit, const int offset) {

	wxString cols = columns;
	wxString tbl = table;
	wxString whr = where;
	whr = whr.Trim(true);
	whr = (whr == "") ? "" : whr = " WHERE " + whr;
	wxString ordby = orderby;
	ordby = ordby.Trim(true);
	//ordby = (ordby == "") ? "" : ordby = wxString::Format(" ORDER BY %s ASC ", ordby);
	ordby = (ordby == "") ? "" : ordby = wxString::Format(" ORDER BY LOWER(%s) ASC ", ordby);

	wxString lim = (limit == -1) ? "" : wxString::Format("LIMIT %d", limit);
	wxString off = (offset == -1) ? "" : wxString::Format("OFFSET %d", offset);
	wxString sql = wxString::Format(" SELECT %s FROM %s %s %s %s %s; ", cols, tbl, whr, ordby, lim, off);

	//wxArrayString result;
	wxSQLite3ResultSet rs = getRS(sql);
	return rs;

}

wxArrayString DBSQLite::xx_getValueByRow2(unsigned row, const wxString& table, const wxString& columns_str, const wxString& where, const wxString& orderby) {
	wxArrayString array;
	wxString sql;
	sql = wxString::Format(" SELECT %s FROM %s %s %s LIMIT 1 OFFSET %d ", columns_str, table, where, orderby, row);
	wxSQLite3ResultSet rs = getRS(sql);

	for (int i = 0; i < rs.GetColumnCount(); i++)
	{
		array.Add(rs.GetAsString(i));
	}
	return array;
}

bool DBSQLite::SaveRecord(const wxString& table, const wxArrayString& columns, const wxArrayString& values) {

	bool retval;
	wxString cols, vals, col, val;
	size_t i;

	for (i = 0; i < columns.GetCount() - 1; i++)
	{

		col = columns.Item(i);
		val = values.Item(i);
		val = val.Trim();
		val = (val == "") ? "NULL" : "'" + val + "'";

		cols = cols + col + ", ";
		vals = vals + val + ",";

		//cols = cols + " " + columns.Item(i) + ", ";
		//vals = vals + "'" +  values.Item(i) + "',";
	}
	col = columns.Item(i);
	val = values.Item(i);
	val = val.Trim();
	val = (val == "") ? "NULL" : "'" + val + "'";

	cols = cols + col;
	vals = vals + val;
	//cols = cols + " " + columns.Item(i) + " ";
	//vals = vals + "'" +  values.Item(i) + "'";

	wxString sql = wxString::Format(" INSERT INTO %s (%s) VALUES(%s); ", table, cols, vals);
	//LOGMSG(sql);
	int result = ExecUpdate(sql);
	retval = (result > 0) ? true : false;
	return retval;
}

wxArrayString DBSQLite::GetColumnName(const wxString& table, const wxString& columns) {
	/*
	 wxArrayString arr_columns;
	 wxString sql = FORMAT(" SELECT %s FROM %s LIMIT 1; ", columns, table);
	 wxSQLite3ResultSet rs = this->getRS(sql);

	 if( !rs.IsOk() ) return arr_columns;

	 int col_cnt = rs.GetColumnCount();
	 for (int i = 0; i < col_cnt; i++)
	 {
	 arr_columns.Add(rs.GetColumnName(i));
	 }
	 return arr_columns;
	 */

	wxArrayString arr_columnname;
	wxString sql = FORMAT(" SELECT %s FROM %s LIMIT 1; ", columns, table);

	try
	{
		wxSQLite3ResultSet rs = this->getRS(sql);
		int col_cnt = rs.GetColumnCount();

		for (int i = 0; i < col_cnt; i++)
		{
			arr_columnname.Add(rs.GetColumnName(i));
		}

	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), sql);
	}

	return arr_columnname;

}

// Ddy: return single record in format wxArrayString
wxArrayString DBSQLite::GetRecord(const wxString& columns, const wxString& table, const wxString& where, const wxString& orderby, const int limit, const int offset) {

	wxArrayString arr_fieldvalue;

	try
	{
		wxSQLite3ResultSet rs = getRS(columns, table, where, orderby, limit, offset);

		for (int i = 0; i < rs.GetColumnCount(); i++)
		{
			wxString s = rs.GetAsString(i);
			arr_fieldvalue.Add(s);
		}

	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), "");
	}

	return arr_fieldvalue;

}

// Ddy: return single record in format Recordset
Recordset DBSQLite::GetRecord2(const wxString& columns, const wxString& table, const wxString& where, const wxString& orderby, const int limit, const int offset) {

	wxArrayString arr_columns = this->GetColumnName(table, columns);
	wxArrayString arr_values = this->GetRecord(columns, table, where, orderby, limit, offset);
	Recordset rs(arr_columns, arr_values);
	return rs;

}

MyJSONValue DBSQLite::GetColumnList( wxString table, wxString columns, JSONTYPE byWhat )
{
	MyJSONValue col_list;
	try
	{
		wxSQLite3ResultSet rs = getRS(columns, table, "1", "", 1, 0);
		//col_list[ALIAS] = _T("alias column name");
		//col_list[ORIGI] = _T("orgin column name");
		for( int i = 0; i < rs.GetColumnCount(); i++ )
		{
			wxString col_name = rs.GetColumnName(i);
			switch (byWhat) {
				case BYNAME	:
					col_list[ALIAS][col_name] = col_name;
					//col_list[ORIGI][col_name] = col_name;
					break;
				case BYINDEX:
					col_list[ALIAS][i] = col_name;
					//col_list[ORIGI][i] = col_name;
					break;
			}
		}
	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), "");
	}

	return col_list;
}

MyJSONValue DBSQLite::x_GetRecordByIdx( const wxString& table, const wxString& columns, const wxString& where, const wxString& orderby, const int limit, const int offset )
{
	MyJSONValue tbl;// = valForInitOnly;

	try
	{
		wxSQLite3ResultSet rs = getRS(columns, table, where, orderby, limit, offset);

		int cnt=0;
		while( rs.NextRow() ) {

			wxString row_name = wxString::Format("row_%d", cnt); //rs.GetAsString(0);
			tbl[row_name] = row_name;
			cnt++;
			for( int i=0; i<rs.GetColumnCount(); i++  )
			{
				//wxString col_name = rs.GetColumnName(i);
				wxString col_val  = rs.GetAsString(i);
				tbl[row_name][i] = col_val;
			}
		}

	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), "");
	}

	return tbl;
}

// Ddy: return record in form of JSON value (multiple rows)
MyJSONValue DBSQLite::x_GetRecordByName( const wxString& table, const wxString& columns, const wxString& where, const wxString& orderby, const int limit, const int offset )
{
	MyJSONValue rcd;

	try
	{
		wxSQLite3ResultSet rs = getRS(columns, table, where, orderby, limit, offset);

		int rowidx=0;
		while( rs.NextRow() )
		{
			rcd[rowidx] = rowidx;
			rowidx++;
			for( int i=0; i<rs.GetColumnCount(); i++  )
			{
				wxString col_name = rs.GetColumnName(i);
				wxString col_value = rs.GetAsString(i);
				rcd[rowidx][col_name] = col_value;			// field by name
				//tbl[row_name][i] = col_val;				// field by idx
			}
		}

	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), "");
	}

	return rcd;
}

// return val["column_name"]; // diubah menjadi val[0]
MyJSONValue DBSQLite::GetSingleValue2( wxString table, wxString column, wxString criteria )
{
	MyJSONValue val;
	wxJSONValue val2;
	wxString sql = " SELECT " + column + " FROM " + table + " WHERE " + criteria + " LIMIT 1; ";

	try
	{
		wxSQLite3Statement st = m_db->PrepareStatement(sql);
		wxSQLite3ResultSet rs = st.ExecuteQuery();
		wxString result = rs.GetAsString(column);
		result = result.Trim(true).Trim(false);
		val[column] = result;
		//val[0] = result;

	} catch (wxSQLite3Exception &e)
	{
		LOGERR(e.GetMessage(), sql);
	}
	return val;
}




//
//wxArrayString DBSQLite::GetRecord(const wxString& columns, const wxString& table, const wxString& where, const wxString& orderby, const int limit, const int offset) {
//
//	wxArrayString arr_fieldvalue;
//	wxSQLite3ResultSet rs = getRS(columns, table, where, orderby, limit, offset);
//
//	for (int i = 0; i < rs.GetColumnCount(); i++)
//	{
//		wxString s = rs.GetAsString(i);
//		arr_fieldvalue.Add(s);
//	}
//	return arr_fieldvalue;
//
//}

