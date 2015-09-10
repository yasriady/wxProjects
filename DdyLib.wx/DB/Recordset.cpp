/*
 * Recordset.cpp
 *
 *  Created on: Jan 12, 2015
 *      Author: dedy
 */

#include "Recordset.h"

Recordset::Recordset(wxArrayString arr_columns, wxArrayString arr_values) {
	m_columns = arr_columns;
	m_values = arr_values;
}

Recordset::~Recordset() {
	// TODO Auto-generated destructor stub
}

wxString Recordset::GetString(wxString col_name) {
	size_t idx = getColIdx(col_name);
	wxString strval = (idx < 999) ? this->GetString(idx) : "";
	strval = strval.Trim();
	return strval;
}

wxString Recordset::GetString(size_t col_index) {
	return m_values.Item(col_index);
}

wxString Recordset::GetColumnName(size_t col_index) {
	return m_columns.Item(col_index);
}

size_t Recordset::getColIdx(wxString col_name) {
	size_t idx = 999;
	for (size_t i = 0; i < m_columns.GetCount(); i++)
	{
		if (m_columns.Item(i) == col_name)
			idx = i;
	}
	return idx;
}
