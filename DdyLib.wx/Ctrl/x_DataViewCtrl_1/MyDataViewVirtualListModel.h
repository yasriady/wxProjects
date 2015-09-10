/*
 * MyDataViewVirtualListModel.h
 *
 *  Created on: Dec 30, 2014
 *      Author: dedy
 */

#ifndef CTRL_MYDATAVIEWVIRTUALLISTMODEL_H_
#define CTRL_MYDATAVIEWVIRTUALLISTMODEL_H_

#include <wx/dataview.h>
//x_#include "MyLibrary/Base/Base.h"
#include "../../Base/Base.h"

class MyDataViewVirtualListModel: public wxDataViewVirtualListModel, public Base {

public:
	MyDataViewVirtualListModel(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby);
	virtual ~MyDataViewVirtualListModel();

	// must override pure virtual function of the parent
	virtual void GetValueByRow(wxVariant &variant, unsigned row, unsigned col) const;
	virtual bool SetValueByRow(const wxVariant &variant, unsigned row, unsigned col);
	virtual unsigned int GetColumnCount() const;
	virtual wxString GetColumnType(unsigned int col) const;
	//----------------------------------------------------

public:

	void GetData();
	wxArrayString GetColumns() {
		return m_columns_arr;
	}
	void x_UpdateData();
	virtual void Reset();		// Menggantikan void UpdateData()
	virtual void Resort(wxString colname);

private:
	AppDB* m_db;
	wxString m_table, m_columns, m_where, m_orderby;
	wxArrayString m_columns_arr;
	unsigned int m_column_cnt, m_row_cnt;
	wxArrayString *m_arr;

};

#endif /* CTRL_MYDATAVIEWCTRL_MYDATAVIEWVIRTUALLISTMODEL_H_ */
