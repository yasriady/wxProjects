///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "uiLogger.h"

///////////////////////////////////////////////////////////////////////////

LoggerA::LoggerA( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanelB( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Application Log") ), wxVERTICAL );
	
	m_textLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_PROCESS_ENTER|wxTE_PROCESS_TAB );
	m_textLog->SetFont( wxFont( 9, 76, 90, 90, false, wxT("Courier New") ) );
	
	sbSizer1->Add( m_textLog, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	tb = new wxToolBar( this, IDTB_LOG, wxDefaultPosition, wxSize( -1,24 ), wxTB_FLAT|wxTB_HORIZONTAL|wxTB_HORZ_TEXT|wxTB_NOICONS ); 
	m_toolClear = tb->AddTool( IDTB_CLEAR, wxT("clear"), wxArtProvider::GetBitmap( "clear_log", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolHide = tb->AddTool( wxID_ANY, wxT("Hide"), wxArtProvider::GetBitmap( wxART_TIP, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	tb->AddSeparator(); 
	
	m_toolAbout = tb->AddTool( IDTB_ABOUT, wxT("about"), wxArtProvider::GetBitmap( "about_log", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	tb->Realize(); 
	
	sbSizer1->Add( tb, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer->Add( sbSizer1, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer );
	this->Layout();
	
	// Connect Events
	this->Connect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolClearOnToolClicked ) );
	this->Connect( m_toolHide->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolHideOnToolClicked ) );
	this->Connect( m_toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolAboutOnToolClicked ) );
}

LoggerA::~LoggerA()
{
	// Disconnect Events
	this->Disconnect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolClearOnToolClicked ) );
	this->Disconnect( m_toolHide->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolHideOnToolClicked ) );
	this->Disconnect( m_toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( LoggerA::m_toolAboutOnToolClicked ) );
	
}
