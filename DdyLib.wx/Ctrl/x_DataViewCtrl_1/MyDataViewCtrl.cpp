/*
 * MyDataViewCtrl.cpp
 *
 *  Created on: Dec 30, 2014
 *      Author: dedy
 */

#include "MyDataViewCtrl.h"

MyDataViewCtrl::MyDataViewCtrl(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name) :
		wxDataViewCtrl(parent, id, pos, size, style, validator, name)
{
	Connect(GetId(), wxEVT_DATAVIEW_COLUMN_HEADER_CLICK, wxDataViewEventHandler(MyDataViewCtrl::OnColumnHeaderClick));

}

MyDataViewCtrl::~MyDataViewCtrl()
{
	// Virtual ctor TAKJALAN???
	Disconnect(GetId(), wxEVT_DATAVIEW_COLUMN_HEADER_CLICK, wxDataViewEventHandler(MyDataViewCtrl::OnColumnHeaderClick));
	saveLayout();

}

void MyDataViewCtrl::InitData(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby) {

	m_db = db;
	m_table = table;
	m_columns = columns;
	m_where = where;
	m_orderby = orderby;

	m_data = new MyDataViewVirtualListModel(m_db, m_table, m_columns, m_where, m_orderby);
	m_data->GetData();
	this->createColumnHeader();
	m_data->Reset();
}

void MyDataViewCtrl::createColumnHeader() {
	//wxString section = GetName() + wxString::Format("%d", GetId());
	wxString section = csection(this);
	wxLogMessage( section );
	wxArrayString cols = m_data->GetColumns();
	ClearColumns();
	int col_cnt = cols.GetCount();
	for (int i = 0; i < col_cnt; i++)
	{
		wxString col_title = cols[i];
		wxString key = wxString::Format("colWidth_%d", i);
		//AppendTextColumn(col_name, i, wxDATAVIEW_CELL_INERT, col_width, wxALIGN_NOT, wxDATAVIEW_COL_RESIZABLE);
		wxDataViewTextRenderer *renderer = new wxDataViewTextRenderer("string", wxDATAVIEW_CELL_INERT, wxDVR_DEFAULT_ALIGNMENT);

		int col_width = m_config->GetInt(section, key, wxCOL_WIDTH_DEFAULT);
		int flag = wxCOL_RESIZABLE;
		if (i == 0)
		{
			col_width = 0;
			flag = 0;
		}

		wxDataViewColumn* dv_col = new wxDataViewColumn(col_title, renderer, i, col_width, wxALIGN_NOT, flag);
		AppendColumn(dv_col);
	}
	AssociateModel(m_data.get());
}

void MyDataViewCtrl::loadLayout() {
}

void MyDataViewCtrl::saveLayout() {
	//wxString section = GetName() + wxString::Format("%d", GetId());
	wxString section = csection(this);
	// save column width
	for (size_t i = 0; i < GetColumnCount(); i++)
	{
		wxString key = wxString::Format("colWidth_%d", i);
		int width = GetColumn(i)->GetWidth();
		m_config->SetInt(section, key, width);
	}
}


// Get current selected item rowid
wxString MyDataViewCtrl::GetSelectedRowId() {

	wxString rowid;

	if( GetSelectedItemsCount() != 1 ) {
		wxMessageBox(ASK_SELECT, CAP_SELECT);
		rowid = "";
	} else {
		rowid = GetString(0);
	}

	return rowid;

}

// Ddy: Refresh datamodel after database manipulation (insert, update, delete) done
void MyDataViewCtrl::Reset() {
	m_data->Reset();
}

void MyDataViewCtrl::makeTable() {
}

wxString MyDataViewCtrl::GetString(unsigned int col) {	// get string of selected row@column
	// Ddy: BELUM OK, hasil tidak sesuai dengan column yang diinginkan. Hanya bisa untuk mengambil nilai pada col=0
	SetFocus();
	wxVariant variant;
	wxDataViewItem selected;
	selected = GetSelection();
	if (!selected.IsOk())
		return wxEmptyString;
	m_data->GetValue(variant, selected, col);
	wxString result = variant.GetString();
	result = result.Trim();
	return result;

	//wxASSERT( sel_count>0 && "NO SELECTION !" );	// Ddy: BELUM JALAN
	/*
	 wxDataViewItemArray items;
	 int len = GetSelections( items );

	 for( int i=0; i<len; i++ )
	 if( items[i].IsOk() ) {
	 m_data->GetValue(variant, items[i], col );
	 }
	 */
}

// Ddy: Delete selected record (1 record only) // NOT USED YET!
void MyDataViewCtrl::DeleteRecord(wxString rowid) {
	if (rowid != "")
	{
		//m_db->DelRecord(m_table, rowid);
	}
	Reset();
}

void MyDataViewCtrl::OnColumnHeaderClick(wxDataViewEvent& event) {
	wxString col_title = event.GetDataViewColumn()->GetTitle();
	m_data->Resort(col_title);
	event.Skip();
}

// Ddy: delete selected rowid (single row only)
void MyDataViewCtrl::DeleteRecord() {

	wxString rowid = GetSelectedRowId();
	if( rowid == "" ) return;
	if( wxMessageBox(ASK_DELETE, CAP_DELETE, wxYES_NO) == wxYES )
		//m_db->DelRecord(m_table, rowid);
	Reset();

}

void MyDataViewCtrl::GetData(wxString table, wxString columns) {

}
