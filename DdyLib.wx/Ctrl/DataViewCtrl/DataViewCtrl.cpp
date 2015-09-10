/*
 * DataViewCtrl.cpp
 *
 *  Created on: Feb 3, 2015
 *      Author: dedy
 */

#include "DataViewCtrl.h"

wxBEGIN_EVENT_TABLE( DataViewCtrl, wxDataViewCtrlB )
	EVT_DATAVIEW_COLUMN_HEADER_CLICK( wxID_ANY, DataViewCtrl::onColumnHeaderClicked )
wxEND_EVENT_TABLE()

void DataViewCtrl::Reset()
{
	wxDataViewItem itm;
	if(  GetSelectedItemsCount() > 0 )
	{
		itm = GetCurrentItem();
	}
	m_data->Reset2();
	SetCurrentItem(itm);

}

DataViewCtrl::DataViewCtrl()
		: wxDataViewCtrlB()
{ }

// Native ctor
DataViewCtrl::DataViewCtrl( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name )
		: wxDataViewCtrlB(parent, id, pos, size, style, validator, name)
{
	ClientData *clientData = (ClientData*) parent->GetParent()->GetClientData();
	m_config = clientData->m_config;

	// Ddy: REMOVE THIS
	wxString str = clientData->m_TestString;

}

DataViewCtrl::~DataViewCtrl()
{ }

void DataViewCtrl::RowAppended()
{
	m_data->RowAppended();
}

// Ddy: selected row changed
void DataViewCtrl::RowChanged()
{
	const wxDataViewItem& item = GetSelection();// GetCurrentItem();
	unsigned int row = m_data->GetRow(item);

	wxLogMessage(__PRETTY_FUNCTION__);
	wxLogMessage("row: %d", row);


	m_data->RowChanged(row);
}

void DataViewCtrl::InitCtrl(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset)
{
	InitQueryData( db, table, columns, where, orderby, limit, offset );

	if( m_db == NULL ) {
		wxMessageBox( "No DB", __PRETTY_FUNCTION__ );
		return;
	}

	m_data = new DataViewVirtualListModel();
	m_data->InitCtrl( m_db, m_table, m_columns, m_where, m_orderby, m_limit, m_offset );

	// reminder to SetName(), the purpose is to set as SECTION to save header colum layout
	if( GetName() == "wxDataViewCtrl" ) {
		wxMessageBox("Please SetName()", __PRETTY_FUNCTION__);
	}

	// create column
	MyJSONValue col_list = m_db->GetColumnListByIdx( m_table, m_columns );

	for( int i = 0; i < col_list[ALIAS].Size(); i++ )
	{
		wxDataViewTextRenderer *renderer = new wxDataViewTextRenderer("string", wxDATAVIEW_CELL_INERT, wxDVR_DEFAULT_ALIGNMENT);

		wxString section = GetName();
		wxString key = wxString::Format("wcol_%02d", i);
		int col_width = m_config->GetInt(section, key, wxDVC_DEFAULT_WIDTH);
		//int col_width = m_config->GetInt(DVCOL_SECTION, DVCOL_KEY(i), 120);
		int flag = wxCOL_RESIZABLE;
//		if (i == 0)
//		{
//			col_width = 0;
//			flag = 0;
//		}
		wxString title_alias  = col_list[ALIAS][i].AsString() ;// Title alias
		wxString title_orig = col_list[ORIG][i].AsString() ;// Title original

		//wxLogTrace( wxTraceMask(), str3 );

		DataViewColumn* dv_col = new DataViewColumn(wxEmptyString, renderer, i, col_width, wxALIGN_NOT, flag);
		dv_col->SetTitleAlias(title_alias);
		dv_col->SetTitleOrig(title_orig);
		//InsertColumn(i, dv_col);
		AppendColumn(dv_col);

	}

	AssociateModel(m_data.get());
	m_data->Reset2();
}

void DataViewCtrl::Test()
{
	unsigned int dtCnt = m_data->GetCount();
	unsigned int curRow = m_data->GetRow( GetCurrentItem() );

	wxLogMessage("dtCnt: %d", dtCnt);
	wxLogMessage("curRow: %d", curRow);
}

void DataViewCtrl::onColumnHeaderClicked( wxDataViewEvent& event )
{
	//wxLogMessage(__FUNCTION__);
	DataViewColumn* col = (DataViewColumn*)event.GetDataViewColumn();
	wxString s = col->GetTitleOrig();
	//wxLogMessage(s);
}

// Ddy: delete selected/current row
int DataViewCtrl::DeleteRow()
{
	int result = 0;

	int answer = wxMessageBox( _("Delete?"), _("Delete?"), wxYES_NO );
	if( answer==wxNO ) {
		return result;
	}

	wxDataViewItem item = GetCurrentItem();
	unsigned int row = m_data->GetRow(item);
	wxString where = MakeWhereFromSelected();
	int deleted = m_db->DeleteRecord(m_table, where);
	if( deleted>0 )
	{
		if( row==(m_data->GetCount()-1) )
			item = m_data->GetItem(row-1);
		m_data->RowDeleted(row);
		SetCurrentItem(item); //Select(item);
	}
	result = deleted;
	return result; //wxMessageBox( __PRETTY_FUNCTION__ );
}

wxString DataViewCtrl::MakeWhereFromSelected()
{
	wxString result = __PRETTY_FUNCTION__;
	wxString where="";
	const wxDataViewItem& itm = GetCurrentItem(); //GetSelection();
	wxVariant variant = "";

	for( size_t i=0; i<GetColumnCount(); i++ )
	{
		GetModel()->GetValue(variant, itm, i);
		DataViewColumn* dvcol = (DataViewColumn*) GetColumn(i);

		wxString col = dvcol->GetTitleOrig();
		wxString val = variant;
		wxString AND = ( where=="" ) ? "" : "AND";

		if( val.Len()>0 )
			where = wxString::Format( "%s %s %s='%s' ", where, AND, col, val);

	}
	result = where;
	return result;
}








