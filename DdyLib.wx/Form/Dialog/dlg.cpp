///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 12 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

//x_#include "MyLibrary/Ctrl/DataViewCtrl/DataViewCtrl.h"
#include "../../Ctrl/DataViewCtrl/DataViewCtrl.h"
//x_#include "MyLibrary/Ctrl/StatusBar/StatusBar.h"
#include "../../Ctrl/StatusBar/StatusBar.h"


#include "dlg.h"

///////////////////////////////////////////////////////////////////////////

Header::Header( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialogB( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerA;
	bSizerA = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerB;
	bSizerB = new wxBoxSizer( wxVERTICAL );
	
	m_panelHeader = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,55 ), wxTAB_TRAVERSAL );
	m_panelHeader->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_panelHeader->SetMinSize( wxSize( -1,55 ) );
	m_panelHeader->SetMaxSize( wxSize( -1,55 ) );
	
	wxBoxSizer* bSizerHeader;
	bSizerHeader = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap = new wxStaticBitmap( m_panelHeader, wxID_ANY, wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_TOOLBAR ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerHeader->Add( m_bitmap, 0, wxALL|wxEXPAND, 5 );
	
	m_staticTitle = new wxStaticText( m_panelHeader, wxID_ANY, wxT("TITLE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTitle->Wrap( -1 );
	bSizerHeader->Add( m_staticTitle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	m_panelHeader->SetSizer( bSizerHeader );
	m_panelHeader->Layout();
	bSizerB->Add( m_panelHeader, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizerB->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_panelButton = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerButton = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerButton->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_buttonSave = new wxButton( m_panelButton, wxID_SAVE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonSave, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonReset = new wxButton( m_panelButton, wxID_RESET, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonReset, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonClose = new wxButton( m_panelButton, wxID_CLOSE, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonClose, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panelButton->SetSizer( bSizerButton );
	m_panelButton->Layout();
	bSizerButton->Fit( m_panelButton );
	bSizerB->Add( m_panelButton, 0, wxALL|wxEXPAND, 5 );
	
	m_panelFooter = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_sb = new StatusBar( m_panelFooter, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxNO_BORDER );
	bSizer8->Add( m_sb, 0, wxEXPAND, 5 );
	
	
	m_panelFooter->SetSizer( bSizer8 );
	m_panelFooter->Layout();
	bSizer8->Fit( m_panelFooter );
	bSizerB->Add( m_panelFooter, 0, wxEXPAND, 5 );
	
	
	bSizerA->Add( bSizerB, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerA );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onSave ), NULL, this );
	m_buttonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onReset ), NULL, this );
	m_buttonClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onClose ), NULL, this );
}

Header::~Header()
{
	// Disconnect Events
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onSave ), NULL, this );
	m_buttonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onReset ), NULL, this );
	m_buttonClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Header::onClose ), NULL, this );
	
}

FieldEditor::FieldEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialogB( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerA;
	bSizerA = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerB;
	bSizerB = new wxBoxSizer( wxVERTICAL );
	
	m_panelHeader = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,55 ), wxTAB_TRAVERSAL );
	m_panelHeader->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_panelHeader->SetMinSize( wxSize( -1,55 ) );
	m_panelHeader->SetMaxSize( wxSize( -1,55 ) );
	
	wxBoxSizer* bSizerHeader;
	bSizerHeader = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap = new wxStaticBitmap( m_panelHeader, wxID_ANY, wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_TOOLBAR ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerHeader->Add( m_bitmap, 0, wxALL|wxEXPAND, 5 );
	
	m_staticTitle = new wxStaticText( m_panelHeader, wxID_ANY, wxT("TITLE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTitle->Wrap( -1 );
	bSizerHeader->Add( m_staticTitle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	m_panelHeader->SetSizer( bSizerHeader );
	m_panelHeader->Layout();
	bSizerB->Add( m_panelHeader, 1, wxEXPAND | wxALL, 5 );
	
	
	bSizerB->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_panelButton = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerButton = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerButton->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_buttonSave = new wxButton( m_panelButton, wxID_SAVE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonSave, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonReset = new wxButton( m_panelButton, wxID_RESET, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonReset, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonClose = new wxButton( m_panelButton, wxID_CLOSE, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonClose, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panelButton->SetSizer( bSizerButton );
	m_panelButton->Layout();
	bSizerButton->Fit( m_panelButton );
	bSizerB->Add( m_panelButton, 0, wxALL|wxEXPAND, 5 );
	
	m_panelFooter = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_sb = new StatusBar( m_panelFooter, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxNO_BORDER );
	bSizer8->Add( m_sb, 0, wxEXPAND, 5 );
	
	
	m_panelFooter->SetSizer( bSizer8 );
	m_panelFooter->Layout();
	bSizer8->Fit( m_panelFooter );
	bSizerB->Add( m_panelFooter, 0, wxEXPAND, 5 );
	
	
	bSizerA->Add( bSizerB, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerA );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FieldEditor::xClose ) );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onSave ), NULL, this );
	m_buttonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onReset ), NULL, this );
	m_buttonClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onClose ), NULL, this );
}

FieldEditor::~FieldEditor()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( FieldEditor::xClose ) );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onSave ), NULL, this );
	m_buttonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onReset ), NULL, this );
	m_buttonClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FieldEditor::onClose ), NULL, this );
	
}

RecordEditor::RecordEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialogB( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerA;
	bSizerA = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerB;
	bSizerB = new wxBoxSizer( wxVERTICAL );
	
	m_panelHeader = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,55 ), wxTAB_TRAVERSAL );
	m_panelHeader->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_panelHeader->SetMinSize( wxSize( -1,55 ) );
	m_panelHeader->SetMaxSize( wxSize( -1,55 ) );
	
	wxBoxSizer* bSizerHeader;
	bSizerHeader = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap = new wxStaticBitmap( m_panelHeader, wxID_ANY, wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_TOOLBAR ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerHeader->Add( m_bitmap, 0, wxALL|wxEXPAND, 5 );
	
	m_staticTitle = new wxStaticText( m_panelHeader, wxID_ANY, wxT("TITLE"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTitle->Wrap( -1 );
	m_staticTitle->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Sans") ) );
	
	bSizerHeader->Add( m_staticTitle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	m_panelHeader->SetSizer( bSizerHeader );
	m_panelHeader->Layout();
	bSizerB->Add( m_panelHeader, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer17->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	bSizerB->Add( bSizer17, 1, wxEXPAND, 5 );
	
	m_panelButton = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerButton = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerButton->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_buttonSave = new wxButton( m_panelButton, wxID_SAVE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonSave, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonReset = new wxButton( m_panelButton, wxID_RESET, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonReset, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonClose = new wxButton( m_panelButton, wxID_CLOSE, wxT("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButton->Add( m_buttonClose, 0, wxALL|wxEXPAND, 5 );
	
	
	m_panelButton->SetSizer( bSizerButton );
	m_panelButton->Layout();
	bSizerButton->Fit( m_panelButton );
	bSizerB->Add( m_panelButton, 0, wxALL|wxEXPAND, 5 );
	
	m_panelFooter = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_sb = new StatusBar( m_panelFooter, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxNO_BORDER );
	bSizer8->Add( m_sb, 0, wxEXPAND, 5 );
	
	
	m_panelFooter->SetSizer( bSizer8 );
	m_panelFooter->Layout();
	bSizer8->Fit( m_panelFooter );
	bSizerB->Add( m_panelFooter, 0, wxEXPAND, 5 );
	
	
	bSizerA->Add( bSizerB, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerA );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RecordEditor::xClose ) );
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( RecordEditor::onInitDialog ) );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onSave ), NULL, this );
	m_buttonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onReset ), NULL, this );
	m_buttonClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onClose ), NULL, this );
}

RecordEditor::~RecordEditor()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RecordEditor::xClose ) );
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( RecordEditor::onInitDialog ) );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onSave ), NULL, this );
	m_buttonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onReset ), NULL, this );
	m_buttonClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RecordEditor::onClose ), NULL, this );
	
}

RecordManager::RecordManager( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialogB( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar1 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_TEXT ); 
	m_toolAdd = m_toolBar1->AddTool( wxID_ADD, wxT("Add"), wxArtProvider::GetBitmap( "close", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxT("Add"), wxT("Create new one ..."), NULL ); 
	
	m_toolEdit = m_toolBar1->AddTool( wxID_EDIT, wxT("Edit"), wxArtProvider::GetBitmap( "edit", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxT("Edit"), wxT("Edit..."), NULL ); 
	
	m_toolDelete = m_toolBar1->AddTool( wxID_DELETE, wxT("Delete"), wxArtProvider::GetBitmap( "delete", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxT("Delete"), wxT("Delete..."), NULL ); 
	
	m_toolRefresh = m_toolBar1->AddTool( wxID_REFRESH, wxT("Refresh"), wxArtProvider::GetBitmap( "refresh", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxT("Refresh"), wxT("Refresh..."), NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolClose = m_toolBar1->AddTool( wxID_CLOSE, wxT("Close"), wxArtProvider::GetBitmap( "close", wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxT("Close"), wxT("Close this window ..."), NULL ); 
	
	m_toolBar1->Realize(); 
	
	bSizer5->Add( m_toolBar1, 0, wxEXPAND, 5 );
	
	m_dvCtrl = new DataViewCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_HORIZ_RULES|wxDV_ROW_LINES|wxDV_VERT_RULES );
	bSizer5->Add( m_dvCtrl, 1, wxALL|wxEXPAND, 5 );
	
	m_sb = new StatusBar( this, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxNO_BORDER );
	bSizer5->Add( m_sb, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer5 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RecordManager::xClose ) );
	this->Connect( m_toolAdd->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onAdd ) );
	this->Connect( m_toolEdit->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onEdit ) );
	this->Connect( m_toolDelete->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onDelete ) );
	this->Connect( m_toolRefresh->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onRefresh ) );
	this->Connect( m_toolClose->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onClose ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( RecordManager::onDataViewCtrlSelectionChanged ) );
}

RecordManager::~RecordManager()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( RecordManager::xClose ) );
	this->Disconnect( m_toolAdd->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onAdd ) );
	this->Disconnect( m_toolEdit->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onEdit ) );
	this->Disconnect( m_toolDelete->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onDelete ) );
	this->Disconnect( m_toolRefresh->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onRefresh ) );
	this->Disconnect( m_toolClose->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( RecordManager::onClose ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( RecordManager::onDataViewCtrlSelectionChanged ) );
	
}
