/*
 * Base.h
 *
 *  Created on: Jan 28, 2015
 *      Author: dedy
 */

#ifndef _BASEMYBASE_H_
#define _BASEMYBASE_H_

#include "../DB/AppDB.h"
//#include "Global_Var.h"
#include "MYDEFINE.h"
#include "MyConfig.h"

#define HIDEBTN(id)				win->FindWindowById(id, win)->Show(false)

class Base {

public:
	Base();
	virtual ~Base();

protected:
	MyConfig *m_config;

	//AppDB *m_db;
	//wxString m_table;
	//wxString m_columns;
	//wxString m_where;
	//wxString m_orderby;
	//int		 m_limit;
	//int		 m_offset;

	bool reArrangeSizerItem(wxWindow *win, wxWindow *panelHeader, wxWindow *panelFooter);
	void saveLayout(wxWindow *win);
	void loadLayout(wxWindow *win);



};

#endif /* _BASEMYBASE_H_ */
