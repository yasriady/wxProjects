///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "uiImagePicker.h"

///////////////////////////////////////////////////////////////////////////

ImagePickerA::ImagePickerA( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanelB( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );
	
	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	m_panel2->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	
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
	
	bSizer37->Add( m_toolBar2, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonBrowse = new wxButton( this, wxID_ANY, wxT("Browse"), wxDefaultPosition, wxSize( 60,24 ), 0 );
	m_buttonBrowse->Hide();
	
	bSizer3->Add( m_buttonBrowse, 0, wxRIGHT|wxLEFT, 5 );
	
	m_buttonClear = new wxButton( this, wxID_ANY, wxT("Clear"), wxDefaultPosition, wxSize( 60,24 ), 0 );
	m_buttonClear->Hide();
	
	bSizer3->Add( m_buttonClear, 0, wxRIGHT|wxLEFT, 5 );
	
	
	bSizer37->Add( bSizer3, 0, wxALIGN_RIGHT|wxBOTTOM, 5 );
	
	
	this->SetSizer( bSizer37 );
	this->Layout();
	
	// Connect Events
	m_textLabel->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ImagePickerA::m_textLabelOnText ), NULL, this );
	this->Connect( m_toolBrowse->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( ImagePickerA::onBrowse ) );
	this->Connect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( ImagePickerA::onClear ) );
	m_buttonBrowse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ImagePickerA::onBrowse ), NULL, this );
	m_buttonClear->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ImagePickerA::onClear ), NULL, this );
}

ImagePickerA::~ImagePickerA()
{
	// Disconnect Events
	m_textLabel->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ImagePickerA::m_textLabelOnText ), NULL, this );
	this->Disconnect( m_toolBrowse->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( ImagePickerA::onBrowse ) );
	this->Disconnect( m_toolClear->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( ImagePickerA::onClear ) );
	m_buttonBrowse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ImagePickerA::onBrowse ), NULL, this );
	m_buttonClear->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ImagePickerA::onClear ), NULL, this );
	
}
