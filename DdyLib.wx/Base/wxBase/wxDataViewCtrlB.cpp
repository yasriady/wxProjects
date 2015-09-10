/*
 * wxDataViewCtrlB.cpp
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#include "wxDataViewCtrlB.h"

wxBEGIN_EVENT_TABLE( wxDataViewCtrlB, wxDataViewCtrl )
	EVT_DATAVIEW_COLUMN_HEADER_CLICK( wxID_ANY, wxDataViewCtrlB::onHeaderClick )
	EVT_KILL_FOCUS( wxDataViewCtrlB::onKillFocus )
wxEND_EVENT_TABLE()

void wxDataViewCtrlB::onKillFocus( wxFocusEvent& event )
{
	saveColumnLayout();
	event.Skip();
}

// Native ctor
wxDataViewCtrlB::wxDataViewCtrlB()
: wxDataViewCtrl()
{
}

wxDataViewCtrlB::~wxDataViewCtrlB()
{
	// this d'tor is now working, why???
}

// Native ctor
wxDataViewCtrlB::wxDataViewCtrlB( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name )
		: wxDataViewCtrl(parent, id, pos, size, style, validator, name)
{
	//wxLogMessage(__FUNCTION__);
}

void wxDataViewCtrlB::onHeaderClick( wxDataViewEvent& event )
{
	//wxLogMessage(__FUNCTION__);
	event.Skip();
}

void wxDataViewCtrlB::saveColumnLayout()
{
	for (int i = 0; i < GetColumnCount(); i++)
	{
		int width = GetColumn(i)->GetWidth();

		wxString section = GetName();
		wxString key = wxString::Format("wcol_%02d", i);
		m_config->SetInt(section, key, width);
		//m_config->SetInt(DVCOL_SECTION, DVCOL_KEY(i), width);
	}

}
















