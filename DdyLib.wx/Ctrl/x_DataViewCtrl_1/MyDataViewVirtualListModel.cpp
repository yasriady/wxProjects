#include "MyDataViewVirtualListModel.h"

/*
 * MyDataViewVirtualListModel.cpp
 *
 *  Created on: Dec 30, 2014
 *      Author: dedy
 */

MyDataViewVirtualListModel::MyDataViewVirtualListModel(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby) {
	m_db = db;
	m_table = table;
	m_columns = columns;
	m_where = where;
	m_orderby = orderby;

	m_row_cnt = 0;
	m_column_cnt = 0;
}

MyDataViewVirtualListModel::~MyDataViewVirtualListModel() {
	// TODO Auto-generated destructor stub
}

// ---------------------------------------------------------------------------

void MyDataViewVirtualListModel::GetValueByRow(wxVariant& variant, unsigned row, unsigned col) const {
	//variant = wxString::Format( "Row %d Col %d", row, col );

	static wxArrayString array;

	if (col == 0)
	{
		//array = m_db->getValueByRow2(row, m_table, m_columns, m_where, m_orderby);
		//const wxArrayString &arr2 = *m_db->getValueByRow3(row, m_table, m_columns, m_where, m_orderby);
		//array = arr2;
		//array = *m_db->getValueByRow3(row, m_table, m_columns, m_where, m_orderby);
		array = m_db->GetRecord(m_columns, m_table, m_where, m_orderby, 1, row);
	}

	wxString s;
	//s = m_db->getValueByRow(row, col, m_table, m_columns, m_where, m_orderby);
	//variant = s;

	s = array.Item(col);
	variant = s;

}

bool MyDataViewVirtualListModel::SetValueByRow(const wxVariant& variant, unsigned row, unsigned col) {
	return true;
}

unsigned int MyDataViewVirtualListModel::GetColumnCount() const {
	return m_column_cnt;
}

wxString MyDataViewVirtualListModel::GetColumnType(unsigned int col) const {
	return "string";
}

// ---------------------------------------------------------------------------

void MyDataViewVirtualListModel::GetData() {
	m_columns_arr = m_db->makeColumns(m_table, m_columns);
	m_row_cnt = m_db->GetRecordCount(m_table, m_where);
}

void MyDataViewVirtualListModel::x_UpdateData() {
	m_row_cnt = m_db->GetRecordCount(m_table, m_where);
	wxDataViewVirtualListModel::Reset(m_row_cnt);
}

// Refresh/reset datamodel
void MyDataViewVirtualListModel::Reset() {
	m_row_cnt = m_db->GetRecordCount(m_table, m_where);
	wxDataViewVirtualListModel::Reset(m_row_cnt);
}

void MyDataViewVirtualListModel::Resort(wxString col_title) {
	m_orderby = col_title;
	m_db->CreateIndex(m_table, col_title);
	wxDataViewVirtualListModel::Resort();
}
