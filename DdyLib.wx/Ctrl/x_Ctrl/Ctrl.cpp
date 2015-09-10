///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

//x_#include "MyLibrary/Ctrl/ComboVListBox/ComboVListBox.h"
#include "../../Ctrl/ComboVListBox/ComboVListBox.h"

#include "Ctrl.h"

///////////////////////////////////////////////////////////////////////////

Combo::Combo( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : LPanel( parent, id, pos, size, style, name )
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
	m_buttonAdd->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Combo::onAdd ), NULL, this );
}

Combo::~Combo()
{
	// Disconnect Events
	m_buttonAdd->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Combo::onAdd ), NULL, this );
	
}

Log::Log( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : LPanel( parent, id, pos, size, style, name )
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
	this->Connect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolClearOnToolClicked ) );
	this->Connect( m_toolHide->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolHideOnToolClicked ) );
	this->Connect( m_toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolAboutOnToolClicked ) );
}

Log::~Log()
{
	// Disconnect Events
	this->Disconnect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolClearOnToolClicked ) );
	this->Disconnect( m_toolHide->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolHideOnToolClicked ) );
	this->Disconnect( m_toolAbout->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Log::m_toolAboutOnToolClicked ) );
	
}

Image::Image( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : LPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );
	
	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap = new wxStaticBitmap( m_panel2, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer5->Add( m_bitmap, 1, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	m_staticLabel = new wxStaticText( m_panel2, wxID_ANY, wxT("NOIMAGE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticLabel->Wrap( -1 );
	m_staticLabel->Hide();
	
	bSizer5->Add( m_staticLabel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_panel2->SetSizer( bSizer5 );
	m_panel2->Layout();
	bSizer5->Fit( m_panel2 );
	bSizer37->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->Hide();
	
	bSizer37->Add( m_staticText1, 0, wxEXPAND|wxALL, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->Hide();
	
	bSizer37->Add( m_staticText2, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->Hide();
	
	bSizer37->Add( m_staticText3, 0, wxALL|wxEXPAND, 5 );
	
	m_textLabel = new wxTextCtrl( this, wxID_ANY, wxT("NOIMAGE"), wxDefaultPosition, wxDefaultSize, 0|wxTRANSPARENT_WINDOW );
	m_textLabel->Hide();
	
	bSizer37->Add( m_textLabel, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_NOICONS ); 
	
	m_toolBrowse = m_toolBar2->AddTool( wxID_ANY, wxT("Browse"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolClear = m_toolBar2->AddTool( wxID_ANY, wxT("Clear"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar2->Realize(); 
	
	bSizer37->Add( m_toolBar2, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	this->SetSizer( bSizer37 );
	this->Layout();
	
	// Connect Events
	m_textLabel->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Image::m_textLabelOnText ), NULL, this );
	this->Connect( m_toolBrowse->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Image::m_toolBrowseOnToolClicked ) );
	this->Connect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Image::m_toolClearOnToolClicked ) );
}

Image::~Image()
{
	// Disconnect Events
	m_textLabel->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( Image::m_textLabelOnText ), NULL, this );
	this->Disconnect( m_toolBrowse->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Image::m_toolBrowseOnToolClicked ) );
	this->Disconnect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Image::m_toolClearOnToolClicked ) );
	
}
