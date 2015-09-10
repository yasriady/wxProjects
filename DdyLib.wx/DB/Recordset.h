/*
 * Recordset.h
 *
 *  Created on: Jan 12, 2015
 *      Author: dedy
 */

#ifndef RECORDSET_H_
#define RECORDSET_H_

// Ddy: This class should be named as Fieldset

//#include <wx/wx.h>

class Recordset {
public:
	Recordset(wxArrayString arr_columns, wxArrayString arr_values);
	virtual ~Recordset();

	wxString GetString(wxString col_name);
	wxString GetString(size_t col_index);
	wxString GetColumnName(size_t col_index);
	size_t GetCount() { return m_columns.GetCount(); }

private:
	wxArrayString m_values;
	wxArrayString m_columns;
	size_t getColIdx(wxString col_name);

};

#endif /* RECORDSET_H_ */
