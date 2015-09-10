#include "CtrlLog.h"

CtrlLog::CtrlLog( wxWindow* parent )
:
Log( parent )
{
}

void CtrlLog::m_toolClearOnToolClicked( wxCommandEvent& event )
{
	m_textLog->Clear();
}

void CtrlLog::m_toolHideOnToolClicked( wxCommandEvent& event )
{
	Show(false);
	//GetParent()->SetSize( GetParent()->GetSize().GetWidth()+1, GetParent()->GetSize().GetHeight()+1 );
	//GetParent()->Refresh();
	GetParent()->Layout();
}

void CtrlLog::m_toolAboutOnToolClicked( wxCommandEvent& event )
{
	wxMessageBox("About", "About");
}


CtrlLog::CtrlLog(wxWindow* parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name) :
		Log(parent, winid, pos, size, style, name) 
{
	// Ddy: this logger should be initiated on constructor
	wxLogTextCtrl *m_pLog = new wxLogTextCtrl(m_textLog);
	delete wxLog::SetActiveTarget(m_pLog);

	m_isShown = m_config->GetBool("Logger", "Show", true);	// Ddy: can be save into config file
	Show(m_isShown);

	//loadLayout(this);
}

void CtrlLog::SetVisible() 
{
	Show( !m_isShown );
	GetParent()->Layout();
	GetParent()->Refresh();
}

CtrlLog::~CtrlLog() 
{
	//saveLayout(this);
}

