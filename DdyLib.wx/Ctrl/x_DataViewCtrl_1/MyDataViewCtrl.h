/*
 * MyDataViewCtrl.h
 *
 *  Created on: Dec 30, 2014
 *      Author: dedy
 */

#ifndef DCTRL_MYDATAVIEWCTRL_MYDATAVIEWCTRL_H_
#define DCTRL_MYDATAVIEWCTRL_MYDATAVIEWCTRL_H_

#include <wx/dataview.h>
#include "MyDataViewVirtualListModel.h"
//#include "../DB/AppDB.h"
//#include "../Common/Global_Var.h"
#include "MyLibrary/Base/Base.h"

#define csection(win)		wxString::Format( "%s_%d", win->GetName(), win->GetId() )

class MyDataViewCtrl: public wxDataViewCtrl, public Base {
public:

	MyDataViewCtrl(wxWindow *parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxDataViewCtrlNameStr);
	virtual ~MyDataViewCtrl();

private:
	wxString GetString(unsigned int col);	// get string of selected row by column

public:
	void InitData(AppDB* db, wxString table, wxString columns, wxString where = "1", wxString orderby = "");
	wxString GetSelectedRowId();			// rowid is most at right columns
	void Reset();
	wxString GetTable() {
		return m_table;
	}
	void DeleteRecord(wxString rowid);
	void DeleteRecord();

private:
	wxObjectDataPtr<MyDataViewVirtualListModel> m_data;
	AppDB* m_db;
	wxString m_table, m_columns, m_where, m_orderby;

	void createColumnHeader();
public:
	void saveLayout();
private:
	void loadLayout();
	void makeTable();

protected:
	virtual void OnColumnHeaderClick(wxDataViewEvent& event);

public:
	void GetData(wxString table, wxString columns);

};

#endif /* DCTRL_MYDATAVIEWCTRL_MYDATAVIEWCTRL_H_ */
