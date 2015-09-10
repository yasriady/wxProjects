/*
 * DataViewVirtualListModel.cpp
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#include "DataViewVirtualListModel.h"

DataViewVirtualListModel::DataViewVirtualListModel()
{
	m_column_cnt = 0;
	m_row_cnt = 0;
}

DataViewVirtualListModel::~DataViewVirtualListModel()
{
}

void DataViewVirtualListModel::InitCtrl( AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset)
{
	InitQueryData(db, table, columns, where, orderby, limit, offset);

}

void DataViewVirtualListModel::GetValueByRow( wxVariant& variant, unsigned row, unsigned col ) const
{
	static MyJSONValue jval;
	if (col == 0)
	{
		jval = m_db->GetRecordByIdx(m_table, m_columns, m_where, m_orderby, 1, row);
	}
	wxString str2 = jval["ROW0"][col].AsString();
	variant = str2;
}

unsigned int DataViewVirtualListModel::GetColumnCount() const
{
	return m_column_cnt;
}

bool DataViewVirtualListModel::SetValueByRow( const wxVariant& variant, unsigned row, unsigned col )
{
	return true; // TEMP
}

wxString DataViewVirtualListModel::GetColumnType( unsigned int col ) const
{
	return "string";
}

void DataViewVirtualListModel::Reset2()
{
	m_row_cnt = m_db->GetRecordCount(m_table, m_where);
	//wxLogTrace( wxTraceMask(), m_table );
	//wxLogTrace( wxTraceMask(), m_where );
	wxDataViewVirtualListModelB::Reset( m_row_cnt );
}
