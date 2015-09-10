///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

//x_#include "MyLibrary/Ctrl/ComboVListBox/ComboVListBox.h"
#include "../../../Ctrl/ComboVListBox/ComboVListBox.h"

#include "uiComboPanel.h"

///////////////////////////////////////////////////////////////////////////

ComboPanelA::ComboPanelA( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_combo = new ComboVListBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, 0 ); 
	bSizer6->Add( m_combo, 1, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_buttonAdd = new wxButton( this, wxID_ANY, wxT("+"), wxDefaultPosition, wxSize( 25,25 ), 0 );
	bSizer6->Add( m_buttonAdd, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	// Connect Events
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ComboPanelA::onAdd ), NULL, this );
}

ComboPanelA::~ComboPanelA()
{
	// Disconnect Events
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ComboPanelA::onAdd ), NULL, this );
	
}
