///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug 22 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "RS.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar1 = new wxMenuBar( 0 );
	mnuFile = new wxMenu();
	wxMenuItem* menuPendaftaranPasien;
	menuPendaftaranPasien = new wxMenuItem( mnuFile, wxID_ANY, wxString( wxT("Pendaftaran Pasien") ) , wxEmptyString, wxITEM_NORMAL );
	mnuFile->Append( menuPendaftaranPasien );
	
	m_menubar1->Append( mnuFile, wxT("&File") ); 
	
	mnuEdit = new wxMenu();
	m_menubar1->Append( mnuEdit, wxT("&Edit") ); 
	
	mnuHelp = new wxMenu();
	m_menubar1->Append( mnuHelp, wxT("&Help") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button6, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( menuPendaftaranPasien->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::menuPendaftaranPasienOnMenuSelection ) );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_button6OnButtonClick ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::menuPendaftaranPasienOnMenuSelection ) );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::m_button6OnButtonClick ), NULL, this );
	
}

DialogPasien1::DialogPasien1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	bSizer2->SetMinSize( wxSize( -1,65 ) ); 
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Mahkota New Az Hospital Pematang Siantar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 14, 70, 90, 90, false, wxT("Ubuntu") ) );
	
	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Jl. Utama Siga 23, Kota Pematang Siantar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Bidang Rekam Medis"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer2->Add( m_staticText3, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	
	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Identitas Pasien") ), wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Nama:"), wxDefaultPosition, wxSize( 75,-1 ), 0 );
	m_staticText5->Wrap( -1 );
	bSizer5->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	textName = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_name") );
	bSizer5->Add( textName, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	cmb_salutation = new ComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 65,-1 ), 0, NULL, 0, wxDefaultValidator, wxT("fld_salutation") ); 
	bSizer5->Add( cmb_salutation, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText42 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	bSizer5->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	sbSizer2->Add( bSizer5, 0, wxEXPAND, 5 );
	
	m_staticline2 = new wxStaticLine( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	sbSizer2->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Tgl. Lahir:"), wxDefaultPosition, wxSize( 75,-1 ), 0 );
	m_staticText6->Wrap( -1 );
	bSizer61->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	dateBirth = new wxDatePickerCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize( -1,-1 ), wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, wxT("fld_date_birth") );
	bSizer61->Add( dateBirth, 0, wxALL, 5 );
	
	m_staticText38 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("/ Usia:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer61->Add( m_staticText38, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	textAgeYear = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer61->Add( textAgeYear, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText39 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("th"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	m_staticText39->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Sans") ) );
	
	bSizer61->Add( m_staticText39, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );
	
	textAgeMonth = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer61->Add( textAgeMonth, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText40 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("bln"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	m_staticText40->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Sans") ) );
	
	bSizer61->Add( m_staticText40, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	textAgeDay = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer61->Add( textAgeDay, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText41 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("hari"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_staticText41->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Sans") ) );
	
	bSizer61->Add( m_staticText41, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	sbSizer2->Add( bSizer61, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Usia:"), wxDefaultPosition, wxSize( 75,-1 ), 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->Hide();
	
	bSizer7->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl2 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 45,-1 ), 0 );
	m_textCtrl2->Hide();
	
	bSizer7->Add( m_textCtrl2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText8 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("tahun,"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	m_staticText8->Hide();
	
	bSizer7->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl3 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 45,-1 ), 0 );
	m_textCtrl3->Hide();
	
	bSizer7->Add( m_textCtrl3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText9 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("bulan,"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->Hide();
	
	bSizer7->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl4 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 45,-1 ), 0 );
	m_textCtrl4->Hide();
	
	bSizer7->Add( m_textCtrl4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText10 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("hari"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->Hide();
	
	bSizer7->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	sbSizer2->Add( bSizer7, 0, wxEXPAND, 5 );
	
	m_staticline3 = new wxStaticLine( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	sbSizer2->Add( m_staticline3, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText11 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Agama:"), wxDefaultPosition, wxSize( 75,-1 ), 0 );
	m_staticText11->Wrap( -1 );
	fgSizer1->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	cmb_religion = new ComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0, wxDefaultValidator, wxT("fld_religion") ); 
	fgSizer1->Add( cmb_religion, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText13 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer1->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText12 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Pendidikan:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	fgSizer1->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	cmb_education = new ComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0, wxDefaultValidator, wxT("fld_education") ); 
	fgSizer1->Add( cmb_education, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText14 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer1->Add( m_staticText14, 0, wxALL, 5 );
	
	m_staticText15 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Pekerjaan:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer1->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	text_occupation = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_occupation") );
	fgSizer1->Add( text_occupation, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText16 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer1->Add( m_staticText16, 0, wxALL, 5 );
	
	m_staticText17 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Status Pernikahan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizer1->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	cmb_marital_status = new ComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0, wxDefaultValidator, wxT("fld_marital_status") ); 
	fgSizer1->Add( cmb_marital_status, 0, wxTOP|wxRIGHT|wxLEFT|wxEXPAND, 5 );
	
	m_staticText18 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer1->Add( m_staticText18, 0, wxALL, 5 );
	
	m_staticText19 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Jenis Kelamin:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizer1->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString radioGenderChoices[] = { wxT("Laki-Laki"), wxT("Perempuan") };
	int radioGenderNChoices = sizeof( radioGenderChoices ) / sizeof( wxString );
	radioGender = new wxRadioBox( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, radioGenderNChoices, radioGenderChoices, 1, wxRA_SPECIFY_COLS, wxDefaultValidator, wxT("fld_gender") );
	radioGender->SetSelection( 0 );
	fgSizer1->Add( radioGender, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText421 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Kartu Identitas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText421->Wrap( -1 );
	fgSizer1->Add( m_staticText421, 0, wxALL, 5 );
	
	cmb_idcard = new ComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0, wxDefaultValidator, wxT("fld_id_card") ); 
	fgSizer1->Add( cmb_idcard, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText43 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	fgSizer1->Add( m_staticText43, 0, wxALL, 5 );
	
	m_staticText20 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("No. ID (KTP/SIM/...):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgSizer1->Add( m_staticText20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	textIDNumber = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_id_number") );
	fgSizer1->Add( textIDNumber, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText21 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgSizer1->Add( m_staticText21, 0, wxALL, 5 );
	
	
	sbSizer2->Add( fgSizer1, 0, wxEXPAND, 5 );
	
	
	bSizer9->Add( sbSizer2, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	m_staticText37 = new wxStaticText( sbSizer6->GetStaticBox(), wxID_ANY, wxT("Petugas Entry: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	sbSizer6->Add( m_staticText37, 0, wxALL, 5 );
	
	
	bSizer9->Add( sbSizer6, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer8->Add( bSizer9, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Alamat Pasien") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText22 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Telepon/HP:"), wxDefaultPosition, wxSize( 75,-1 ), 0 );
	m_staticText22->Wrap( -1 );
	fgSizer3->Add( m_staticText22, 0, wxALL, 5 );
	
	textPhoneNo = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_phone_no") );
	fgSizer3->Add( textPhoneNo, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText23 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	fgSizer3->Add( m_staticText23, 0, wxALL, 5 );
	
	m_staticText24 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Alamat Lengkap:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer3->Add( m_staticText24, 0, wxALL, 5 );
	
	textAddress = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,65 ), wxTE_MULTILINE, wxDefaultValidator, wxT("fld_address_1") );
	fgSizer3->Add( textAddress, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText25 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	fgSizer3->Add( m_staticText25, 0, wxALL, 5 );
	
	m_staticText26 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Kelurahan:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	fgSizer3->Add( m_staticText26, 0, wxALL, 5 );
	
	textKelurahan = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_kelurahan") );
	fgSizer3->Add( textKelurahan, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText27 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer3->Add( m_staticText27, 0, wxALL, 5 );
	
	m_staticText28 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Kecamatan:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer3->Add( m_staticText28, 0, wxALL, 5 );
	
	textKecamatan = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_kecamatan") );
	fgSizer3->Add( textKecamatan, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText29 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer3->Add( m_staticText29, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Kota/Kabupaten"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer3->Add( m_staticText30, 0, wxALL, 5 );
	
	textKabupaten = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_kota_kabupaten") );
	fgSizer3->Add( textKabupaten, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText31 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	fgSizer3->Add( m_staticText31, 0, wxALL, 5 );
	
	m_staticText32 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Propinsi:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgSizer3->Add( m_staticText32, 0, wxALL, 5 );
	
	cmb_province = new ComboBox( sbSizer3->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0, wxDefaultValidator, wxT("fld_province") ); 
	fgSizer3->Add( cmb_province, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText33 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, wxT("!"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	fgSizer3->Add( m_staticText33, 0, wxALL, 5 );
	
	
	sbSizer3->Add( fgSizer3, 1, wxEXPAND, 5 );
	
	
	bSizer10->Add( sbSizer3, 0, wxRIGHT|wxLEFT|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Command Box") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	buttonSave = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Simpan"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( buttonSave, 0, wxALL, 5 );
	
	buttonRegister = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Registrasi"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( buttonRegister, 0, wxALL, 5 );
	
	buttonUpdate = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Update"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( buttonUpdate, 0, wxALL, 5 );
	
	buttonReset = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( buttonReset, 0, wxALL, 5 );
	
	buttonClose = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( buttonClose, 0, wxALL, 5 );
	
	
	sbSizer4->Add( bSizer11, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer10->Add( sbSizer4, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Keterangan Pendaftaran") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->AddGrowableCol( 1 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText34 = new wxStaticText( sbSizer41->GetStaticBox(), wxID_ANY, wxT("Tanggal Pendaftaran:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	fgSizer4->Add( m_staticText34, 0, wxALL, 5 );
	
	textAdmissionDate = new wxTextCtrl( sbSizer41->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_admission_date") );
	fgSizer4->Add( textAdmissionDate, 0, wxALL|wxEXPAND, 5 );
	
	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText371 = new wxStaticText( sbSizer41->GetStaticBox(), wxID_ANY, wxT("Nomor Rekam Medis:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText371->Wrap( -1 );
	gbSizer1->Add( m_staticText371, wxGBPosition( 0, 0 ), wxGBSpan( 1, 2 ), wxALL, 5 );
	
	m_checkBox1 = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, wxT("Auto Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox1->SetFont( wxFont( 7, 74, 90, 90, false, wxT("Sans") ) );
	
	gbSizer1->Add( m_checkBox1, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	m_checkBox2 = new wxCheckBox( sbSizer41->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_checkBox2, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );
	
	
	fgSizer4->Add( gbSizer1, 1, wxEXPAND, 5 );
	
	textMedicalRecordNo = new wxTextCtrl( sbSizer41->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, wxT("fld_mr_number") );
	fgSizer4->Add( textMedicalRecordNo, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer41->Add( fgSizer4, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( sbSizer41->GetStaticBox(), wxID_ANY, wxEmptyString ), wxVERTICAL );
	
	stcResponseTime = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Response Time"), wxDefaultPosition, wxDefaultSize, 0, wxT("fld_response_time") );
	stcResponseTime->Wrap( -1 );
	sbSizer5->Add( stcResponseTime, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	sbSizer41->Add( sbSizer5, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer10->Add( sbSizer41, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer8, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizer6_statusbar;
	bSizer6_statusbar = new wxBoxSizer( wxVERTICAL );
	
	statusBar = new StatusBar( this, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6_statusbar->Add( statusBar, 0, wxBOTTOM, 5 );
	
	
	bSizer1->Add( bSizer6_statusbar, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	dateBirth->Connect( wxEVT_DATE_CHANGED, wxDateEventHandler( DialogPasien1::dateBirthOnDateChanged ), NULL, this );
	buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonSaveOnButtonClick ), NULL, this );
	buttonRegister->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonRegisterOnButtonClick ), NULL, this );
	buttonUpdate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonUpdateOnButtonClick ), NULL, this );
	buttonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonResetOnButtonClick ), NULL, this );
	buttonClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonCloseOnButtonClick ), NULL, this );
}

DialogPasien1::~DialogPasien1()
{
	// Disconnect Events
	dateBirth->Disconnect( wxEVT_DATE_CHANGED, wxDateEventHandler( DialogPasien1::dateBirthOnDateChanged ), NULL, this );
	buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonSaveOnButtonClick ), NULL, this );
	buttonRegister->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonRegisterOnButtonClick ), NULL, this );
	buttonUpdate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonUpdateOnButtonClick ), NULL, this );
	buttonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonResetOnButtonClick ), NULL, this );
	buttonClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogPasien1::buttonCloseOnButtonClick ), NULL, this );
	
}

DialogPasien2::DialogPasien2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* BASE;
	BASE = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* HEADER;
	HEADER = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer_HEADER1;
	bSizer_HEADER1 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap21 = new wxStaticBitmap( this, wxID_ANY, wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_CMN_DIALOG ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_HEADER1->Add( m_bitmap21, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText471 = new wxStaticText( this, wxID_ANY, wxT("Registrasi Pasien"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471->Wrap( -1 );
	m_staticText471->SetFont( wxFont( 20, 72, 90, 90, false, wxT("Times New Roman") ) );
	
	bSizer141->Add( m_staticText471, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_staticText481 = new wxStaticText( this, wxID_ANY, wxT("Form pendaftaran dan edit data pasien"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText481->Wrap( -1 );
	bSizer141->Add( m_staticText481, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer_HEADER1->Add( bSizer141, 1, wxEXPAND, 5 );
	
	
	HEADER->Add( bSizer_HEADER1, 1, wxEXPAND, 5 );
	
	m_staticline9 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	HEADER->Add( m_staticline9, 0, wxEXPAND|wxALL, 5 );
	
	
	BASE->Add( HEADER, 0, wxEXPAND, 5 );
	
	wxBoxSizer* MID;
	MID = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* MIDLEFT;
	MIDLEFT = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* SEARCH;
	SEARCH = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxHORIZONTAL );
	
	m_staticText79 = new wxStaticText( SEARCH->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	SEARCH->Add( m_staticText79, 0, wxALL, 5 );
	
	m_comboBox7 = new wxComboBox( SEARCH->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	SEARCH->Add( m_comboBox7, 0, wxALL, 5 );
	
	m_staticText80 = new wxStaticText( SEARCH->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText80->Wrap( -1 );
	SEARCH->Add( m_staticText80, 0, wxALL, 5 );
	
	m_textCtrl41 = new wxTextCtrl( SEARCH->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	SEARCH->Add( m_textCtrl41, 0, wxALL, 5 );
	
	
	MIDLEFT->Add( SEARCH, 1, wxEXPAND, 5 );
	
	wxBoxSizer* DISPLAY;
	DISPLAY = new wxBoxSizer( wxVERTICAL );
	
	
	MIDLEFT->Add( DISPLAY, 1, wxEXPAND, 5 );
	
	
	MID->Add( MIDLEFT, 0, wxEXPAND, 5 );
	
	wxBoxSizer* MIDRIGHT;
	MIDRIGHT = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Informasi Pasien") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer10->AddGrowableCol( 1 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText62 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("No. RM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	fgSizer10->Add( m_staticText62, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl25 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl25, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText82 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nama Pasien"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText82->Wrap( -1 );
	fgSizer10->Add( m_staticText82, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl42 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl42, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText83 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kategori Pasien"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText83->Wrap( -1 );
	fgSizer10->Add( m_staticText83, 0, wxALL, 5 );
	
	m_comboBox8 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer10->Add( m_comboBox8, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText84 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Golongan Darah"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText84->Wrap( -1 );
	fgSizer10->Add( m_staticText84, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );
	
	m_comboBox9 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer45->Add( m_comboBox9, 0, wxALL, 5 );
	
	m_staticText85 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Jenis Kelamin"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText85->Wrap( -1 );
	bSizer45->Add( m_staticText85, 0, wxALL, 5 );
	
	m_comboBox10 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer45->Add( m_comboBox10, 0, wxALL, 5 );
	
	
	fgSizer10->Add( bSizer45, 1, wxEXPAND, 5 );
	
	m_staticText63 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Tanggal Lahir"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	fgSizer10->Add( m_staticText63, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );
	
	m_datePicker4 = new wxDatePickerCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer46->Add( m_datePicker4, 0, wxALL, 5 );
	
	m_staticText86 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Usia 01 Tahun 09 Bulan 23 Hari"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText86->Wrap( -1 );
	bSizer46->Add( m_staticText86, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer10->Add( bSizer46, 1, wxEXPAND, 5 );
	
	m_staticText64 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Alamat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	fgSizer10->Add( m_staticText64, 0, wxALL, 5 );
	
	m_textCtrl27 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_WORDWRAP );
	fgSizer10->Add( m_textCtrl27, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText65 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kota"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText65->Wrap( -1 );
	fgSizer10->Add( m_staticText65, 0, wxALL, 5 );
	
	m_comboBox11 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer10->Add( m_comboBox11, 0, wxALL, 5 );
	
	m_staticText87 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kecamatan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText87->Wrap( -1 );
	fgSizer10->Add( m_staticText87, 0, wxALL, 5 );
	
	m_comboBox12 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer10->Add( m_comboBox12, 0, wxALL, 5 );
	
	m_staticText88 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kelurahan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	fgSizer10->Add( m_staticText88, 0, wxALL, 5 );
	
	m_comboBox13 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer10->Add( m_comboBox13, 0, wxALL, 5 );
	
	m_staticText66 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nomor Telp / HP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	fgSizer10->Add( m_staticText66, 0, wxALL, 5 );
	
	m_textCtrl29 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl29, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText90 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Status Pernikahan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	fgSizer10->Add( m_staticText90, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_comboBox15 = new wxComboBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer48->Add( m_comboBox15, 0, wxALL, 5 );
	
	m_staticText92 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Pekerjaan"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	bSizer48->Add( m_staticText92, 0, wxALL, 5 );
	
	m_textCtrl44 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer48->Add( m_textCtrl44, 1, wxALL, 5 );
	
	
	fgSizer10->Add( bSizer48, 1, wxEXPAND, 5 );
	
	m_staticText68 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nama Ibu"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText68->Wrap( -1 );
	fgSizer10->Add( m_staticText68, 0, wxALL, 5 );
	
	m_textCtrl31 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl31, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText93 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nama Ayah"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93->Wrap( -1 );
	fgSizer10->Add( m_staticText93, 0, wxALL, 5 );
	
	m_textCtrl45 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl45, 0, wxALL, 5 );
	
	
	sbSizer7->Add( fgSizer10, 1, wxEXPAND, 5 );
	
	
	bSizer34->Add( sbSizer7, 1, wxEXPAND, 5 );
	
	
	MIDRIGHT->Add( bSizer34, 1, wxEXPAND, 5 );
	
	
	MID->Add( MIDRIGHT, 1, wxEXPAND, 5 );
	
	
	BASE->Add( MID, 1, wxEXPAND, 5 );
	
	wxBoxSizer* FOOTER	;
	FOOTER	 = new wxBoxSizer( wxHORIZONTAL );
	
	
	FOOTER	->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button7 = new wxButton( this, wxID_ANY, wxT("&Login"), wxDefaultPosition, wxDefaultSize, 0 );
	FOOTER	->Add( m_button7, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	FOOTER	->Add( m_button8, 0, wxALL, 5 );
	
	
	BASE->Add( FOOTER	, 0, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	statusBar = new wxTextCtrl( this, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, 0 );
	BASE->Add( statusBar, 0, wxALL, 5 );
	
	
	this->SetSizer( BASE );
	this->Layout();
	BASE->Fit( this );
	
	this->Centre( wxBOTH );
}

DialogPasien2::~DialogPasien2()
{
}

DialogLogin::DialogLogin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxArtProvider::GetBitmap( wxT("gtk-dialog-warning"), wxART_CMN_DIALOG ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_bitmap2, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	m_staticText47->SetFont( wxFont( 20, 72, 90, 90, false, wxT("Times New Roman") ) );
	
	bSizer14->Add( m_staticText47, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_staticText48 = new wxStaticText( this, wxID_ANY, wxT("Silahkan login dan menggunakan system ini"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	bSizer14->Add( m_staticText48, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer13, 0, wxEXPAND, 5 );
	
	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer12->Add( m_staticline4, 0, wxEXPAND|wxALL, 5 );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5->AddGrowableCol( 1 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Username: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	fgSizer5->Add( m_staticText51, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl20 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_textCtrl20, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Password: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	fgSizer5->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer5->Add( m_textCtrl21, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer12->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Password lupa?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	m_staticText54->SetForegroundColour( wxColour( 7, 70, 133 ) );
	
	bSizer12->Add( m_staticText54, 0, wxALL, 5 );
	
	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer12->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button7 = new wxButton( this, wxID_ANY, wxT("&Login"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button7, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button8, 0, wxALL, 5 );
	
	
	bSizer12->Add( bSizer15, 0, wxALIGN_RIGHT, 5 );
	
	m_textCtrl22 = new wxTextCtrl( this, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl22, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

DialogLogin::~DialogLogin()
{
}

DialogDataDokter::DialogDataDokter( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* BASE;
	BASE = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* HEADER;
	HEADER = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer_HEADER1;
	bSizer_HEADER1 = new wxBoxSizer( wxHORIZONTAL );
	
	m_bitmap21 = new wxStaticBitmap( this, wxID_ANY, wxArtProvider::GetBitmap( wxT("gtk-dialog-warning"), wxART_CMN_DIALOG ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_HEADER1->Add( m_bitmap21, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText471 = new wxStaticText( this, wxID_ANY, wxT("Data Dokter"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText471->Wrap( -1 );
	m_staticText471->SetFont( wxFont( 20, 72, 90, 90, false, wxT("Times New Roman") ) );
	
	bSizer141->Add( m_staticText471, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_staticText481 = new wxStaticText( this, wxID_ANY, wxT("Form data dan informasi mengenai dokter"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText481->Wrap( -1 );
	bSizer141->Add( m_staticText481, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizer_HEADER1->Add( bSizer141, 1, wxEXPAND, 5 );
	
	
	HEADER->Add( bSizer_HEADER1, 1, wxEXPAND, 5 );
	
	m_staticline9 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	HEADER->Add( m_staticline9, 0, wxEXPAND|wxALL, 5 );
	
	
	BASE->Add( HEADER, 0, wxEXPAND, 5 );
	
	wxBoxSizer* MID;
	MID = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("Search: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer35->Add( m_staticText59, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl24 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_textCtrl24, 1, wxALL, 5 );
	
	
	bSizer33->Add( bSizer35, 0, wxEXPAND, 5 );
	
	m_listBox2 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 300,-1 ), 0, NULL, 0 ); 
	bSizer33->Add( m_listBox2, 1, wxALL, 5 );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Total: 54 orang"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer33->Add( m_staticText61, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer31->Add( bSizer33, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Informasi Dokter") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer10->AddGrowableCol( 1 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText62 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nama Dokter"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	fgSizer10->Add( m_staticText62, 0, wxALL, 5 );
	
	m_textCtrl25 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl25, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText63 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Spesialisasi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	fgSizer10->Add( m_staticText63, 0, wxALL, 5 );
	
	m_textCtrl26 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl26, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText64 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Alamat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	fgSizer10->Add( m_staticText64, 0, wxALL, 5 );
	
	m_textCtrl27 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl27, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText65 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kota"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText65->Wrap( -1 );
	fgSizer10->Add( m_staticText65, 0, wxALL, 5 );
	
	m_textCtrl28 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl28, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText66 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nomor HP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	fgSizer10->Add( m_staticText66, 0, wxALL, 5 );
	
	m_textCtrl29 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl29, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText67 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Nomor Telepon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText67->Wrap( -1 );
	fgSizer10->Add( m_staticText67, 0, wxALL, 5 );
	
	m_textCtrl30 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl30, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText68 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText68->Wrap( -1 );
	fgSizer10->Add( m_staticText68, 0, wxALL, 5 );
	
	m_textCtrl31 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_textCtrl31, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText71 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Share Jasa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer10->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl33 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_textCtrl33, 0, wxALL, 5 );
	
	m_staticText72 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer36->Add( m_staticText72, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer10->Add( bSizer36, 1, wxEXPAND, 5 );
	
	m_staticText69 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Tgl. Mulai Praktek"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer10->Add( m_staticText69, 0, wxALL, 5 );
	
	m_datePicker2 = new wxDatePickerCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer10->Add( m_datePicker2, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText70 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Hari Prakter:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer10->Add( m_staticText70, 0, wxALL, 5 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 4, 0, 0 );
	
	m_checkBox3 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Senin"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox3->SetValue(true); 
	gSizer2->Add( m_checkBox3, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_checkBox4 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Selasa"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox4, 0, wxTOP|wxBOTTOM, 5 );
	
	m_checkBox5 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Rabu"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox5, 0, wxTOP|wxBOTTOM, 5 );
	
	m_checkBox6 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Kamis"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox6->SetValue(true); 
	gSizer2->Add( m_checkBox6, 0, wxTOP|wxBOTTOM, 5 );
	
	m_checkBox7 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Jumat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox7->SetValue(true); 
	gSizer2->Add( m_checkBox7, 0, wxBOTTOM|wxLEFT, 5 );
	
	m_checkBox8 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Sabtu"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox8, 0, wxBOTTOM, 5 );
	
	m_checkBox9 = new wxCheckBox( sbSizer7->GetStaticBox(), wxID_ANY, wxT("Minggu"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_checkBox9, 0, wxBOTTOM, 5 );
	
	
	fgSizer10->Add( gSizer2, 1, wxEXPAND, 5 );
	
	
	sbSizer7->Add( fgSizer10, 1, wxEXPAND, 5 );
	
	
	bSizer34->Add( sbSizer7, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Foto Dokter") ), wxVERTICAL );
	
	m_panel1 = new wxPanel( sbSizer8->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 125,135 ), wxTAB_TRAVERSAL );
	m_panel1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	
	sbSizer8->Add( m_panel1, 0, wxALL, 5 );
	
	
	bSizer34->Add( sbSizer8, 0, wxEXPAND, 5 );
	
	
	bSizer31->Add( bSizer34, 1, wxEXPAND, 5 );
	
	
	MID->Add( bSizer31, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button11, 0, wxALL, 5 );
	
	m_button12 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button12, 0, wxALL, 5 );
	
	m_button13 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button13, 0, wxALL, 5 );
	
	m_button14 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button14, 0, wxALL, 5 );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button15, 0, wxALL, 5 );
	
	
	MID->Add( bSizer32, 0, wxEXPAND, 5 );
	
	
	BASE->Add( MID, 1, wxEXPAND, 5 );
	
	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	BASE->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* FOOTER	;
	FOOTER	 = new wxBoxSizer( wxHORIZONTAL );
	
	
	FOOTER	->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button7 = new wxButton( this, wxID_ANY, wxT("&Login"), wxDefaultPosition, wxDefaultSize, 0 );
	FOOTER	->Add( m_button7, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	FOOTER	->Add( m_button8, 0, wxALL, 5 );
	
	
	BASE->Add( FOOTER	, 0, wxALIGN_RIGHT|wxEXPAND, 5 );
	
	statusBar = new wxTextCtrl( this, wxID_ANY, wxT("StatusBar"), wxDefaultPosition, wxDefaultSize, 0 );
	BASE->Add( statusBar, 0, wxALL, 5 );
	
	
	this->SetSizer( BASE );
	this->Layout();
	
	this->Centre( wxBOTH );
}

DialogDataDokter::~DialogDataDokter()
{
}
