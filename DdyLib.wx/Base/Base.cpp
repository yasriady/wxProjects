/*
 * Base.cpp
 *
 *  Created on: Jan 28, 2015
 *      Author: dedy
 */

#include "Base.h"

Base::Base()
{
	//m_config = gCONF;
	//m_config = new MyConfig("AppName", "VendorName", "MYFLE.INI");

	//m_db = NULL; //gDB;
	//m_table   = wxEmptyString;
	//m_columns = wxEmptyString;
	//m_where   = "1";
	//m_orderby = wxEmptyString;
	//m_limit   = -1;
	//m_offset  = -1;

}

Base::~Base() {
	//wxDELETE(m_config);
}

bool Base::reArrangeSizerItem(wxWindow *win, wxWindow* panelHeader,
		wxWindow* panelFooter)
{
	// hide all buttons
	HIDEBTN(wxID_OK);
	HIDEBTN(wxID_YES);
	HIDEBTN(wxID_SAVE);
	HIDEBTN(wxID_APPLY);
	HIDEBTN(wxID_NO);
	HIDEBTN(wxID_CANCEL);
	HIDEBTN(wxID_RESET);
	HIDEBTN(wxID_CLOSE);
	HIDEBTN(wxID_DEFAULT);

	// relayout
	wxSizer *sizer = win->GetSizer();
	sizer->Insert(0, panelHeader, 0, wxEXPAND | wxALL, 5, NULL);
	sizer->Add(0, 0, 1, wxEXPAND | wxALL, 5);
	sizer->Add(panelFooter, 0, wxEXPAND | wxALL, 0, NULL);
	sizer->Remove(2);
	sizer->Layout();
	return win->Layout();
}

void Base::saveLayout(wxWindow* win)
{
	int w, h, x, y;
	win->GetSize(&w, &h);
	win->GetPosition(&x, &y);
	wxString section = win->GetName();
	m_config->SetInt(section, "w", w);
	m_config->SetInt(section, "h", h);
	m_config->SetInt(section, "x", x);
	m_config->SetInt(section, "y", y);

}

void Base::loadLayout(wxWindow* win)
{
	int w, h, x, y;
	win->GetSize(&w, &h);		// Get initial size (for def_val
	win->GetPosition(&x, &y);	// Get initial pos (for def_val

	//wxLogMessage("w: %d, h: %d, x: %d, y: %d", w, h, x, y); // Ok

	wxString section = win->GetName();
	w = m_config->GetInt(section, "w", w);
	h = m_config->GetInt(section, "h", h);
	x = m_config->GetInt(section, "x", x);
	y = m_config->GetInt(section, "y", y);
	win->SetSize(w, h);
	win->SetPosition(wxPoint(x, y));
}
