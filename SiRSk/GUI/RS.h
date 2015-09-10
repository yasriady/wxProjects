///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug 22 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __RS_H__
#define __RS_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class ComboBox;
class StatusBar;

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/radiobox.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/gbsizer.h>
#include <wx/dialog.h>
#include <wx/statbmp.h>
#include <wx/listbox.h>
#include <wx/panel.h>

#include "DdyLib.wx.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* mnuFile;
		wxMenu* mnuEdit;
		wxMenu* mnuHelp;
		wxButton* m_button6;
		
		// Virtual event handlers, overide them in your derived class
		virtual void menuPendaftaranPasienOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button6OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("SiRSk"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 911,731 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogPasien1
///////////////////////////////////////////////////////////////////////////////
class DialogPasien1 : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText5;
		wxTextCtrl* textName;
		ComboBox* cmb_salutation;
		wxStaticText* m_staticText42;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText6;
		wxDatePickerCtrl* dateBirth;
		wxStaticText* m_staticText38;
		wxTextCtrl* textAgeYear;
		wxStaticText* m_staticText39;
		wxTextCtrl* textAgeMonth;
		wxStaticText* m_staticText40;
		wxTextCtrl* textAgeDay;
		wxStaticText* m_staticText41;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText10;
		wxStaticLine* m_staticline3;
		wxStaticText* m_staticText11;
		ComboBox* cmb_religion;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText12;
		ComboBox* cmb_education;
		wxStaticText* m_staticText14;
		wxStaticText* m_staticText15;
		wxTextCtrl* text_occupation;
		wxStaticText* m_staticText16;
		wxStaticText* m_staticText17;
		ComboBox* cmb_marital_status;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText19;
		wxRadioBox* radioGender;
		wxStaticText* m_staticText421;
		ComboBox* cmb_idcard;
		wxStaticText* m_staticText43;
		wxStaticText* m_staticText20;
		wxTextCtrl* textIDNumber;
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText37;
		wxStaticText* m_staticText22;
		wxTextCtrl* textPhoneNo;
		wxStaticText* m_staticText23;
		wxStaticText* m_staticText24;
		wxTextCtrl* textAddress;
		wxStaticText* m_staticText25;
		wxStaticText* m_staticText26;
		wxTextCtrl* textKelurahan;
		wxStaticText* m_staticText27;
		wxStaticText* m_staticText28;
		wxTextCtrl* textKecamatan;
		wxStaticText* m_staticText29;
		wxStaticText* m_staticText30;
		wxTextCtrl* textKabupaten;
		wxStaticText* m_staticText31;
		wxStaticText* m_staticText32;
		ComboBox* cmb_province;
		wxStaticText* m_staticText33;
		wxButton* buttonSave;
		wxButton* buttonRegister;
		wxButton* buttonUpdate;
		wxButton* buttonReset;
		wxButton* buttonClose;
		wxStaticText* m_staticText34;
		wxTextCtrl* textAdmissionDate;
		wxStaticText* m_staticText371;
		wxCheckBox* m_checkBox1;
		wxCheckBox* m_checkBox2;
		wxTextCtrl* textMedicalRecordNo;
		wxStaticText* stcResponseTime;
		StatusBar* statusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void dateBirthOnDateChanged( wxDateEvent& event ) { event.Skip(); }
		virtual void buttonSaveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonRegisterOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonUpdateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonResetOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void buttonCloseOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogPasien1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 930,577 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogPasien1();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogPasien2
///////////////////////////////////////////////////////////////////////////////
class DialogPasien2 : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap21;
		wxStaticText* m_staticText471;
		wxStaticText* m_staticText481;
		wxStaticLine* m_staticline9;
		wxStaticText* m_staticText79;
		wxComboBox* m_comboBox7;
		wxStaticText* m_staticText80;
		wxTextCtrl* m_textCtrl41;
		wxStaticText* m_staticText62;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText82;
		wxTextCtrl* m_textCtrl42;
		wxStaticText* m_staticText83;
		wxComboBox* m_comboBox8;
		wxStaticText* m_staticText84;
		wxComboBox* m_comboBox9;
		wxStaticText* m_staticText85;
		wxComboBox* m_comboBox10;
		wxStaticText* m_staticText63;
		wxDatePickerCtrl* m_datePicker4;
		wxStaticText* m_staticText86;
		wxStaticText* m_staticText64;
		wxTextCtrl* m_textCtrl27;
		wxStaticText* m_staticText65;
		wxComboBox* m_comboBox11;
		wxStaticText* m_staticText87;
		wxComboBox* m_comboBox12;
		wxStaticText* m_staticText88;
		wxComboBox* m_comboBox13;
		wxStaticText* m_staticText66;
		wxTextCtrl* m_textCtrl29;
		wxStaticText* m_staticText90;
		wxComboBox* m_comboBox15;
		wxStaticText* m_staticText92;
		wxTextCtrl* m_textCtrl44;
		wxStaticText* m_staticText68;
		wxTextCtrl* m_textCtrl31;
		wxStaticText* m_staticText93;
		wxTextCtrl* m_textCtrl45;
		wxButton* m_button7;
		wxButton* m_button8;
		wxTextCtrl* statusBar;
	
	public:
		
		DialogPasien2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogPasien2();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogLogin
///////////////////////////////////////////////////////////////////////////////
class DialogLogin : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap2;
		wxStaticText* m_staticText47;
		wxStaticText* m_staticText48;
		wxStaticLine* m_staticline4;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textCtrl20;
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText54;
		wxStaticLine* m_staticline5;
		wxButton* m_button7;
		wxButton* m_button8;
		wxTextCtrl* m_textCtrl22;
	
	public:
		
		DialogLogin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 433,286 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogLogin();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogDataDokter
///////////////////////////////////////////////////////////////////////////////
class DialogDataDokter : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmap21;
		wxStaticText* m_staticText471;
		wxStaticText* m_staticText481;
		wxStaticLine* m_staticline9;
		wxStaticText* m_staticText59;
		wxTextCtrl* m_textCtrl24;
		wxListBox* m_listBox2;
		wxStaticText* m_staticText61;
		wxStaticText* m_staticText62;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText63;
		wxTextCtrl* m_textCtrl26;
		wxStaticText* m_staticText64;
		wxTextCtrl* m_textCtrl27;
		wxStaticText* m_staticText65;
		wxTextCtrl* m_textCtrl28;
		wxStaticText* m_staticText66;
		wxTextCtrl* m_textCtrl29;
		wxStaticText* m_staticText67;
		wxTextCtrl* m_textCtrl30;
		wxStaticText* m_staticText68;
		wxTextCtrl* m_textCtrl31;
		wxStaticText* m_staticText71;
		wxTextCtrl* m_textCtrl33;
		wxStaticText* m_staticText72;
		wxStaticText* m_staticText69;
		wxDatePickerCtrl* m_datePicker2;
		wxStaticText* m_staticText70;
		wxCheckBox* m_checkBox3;
		wxCheckBox* m_checkBox4;
		wxCheckBox* m_checkBox5;
		wxCheckBox* m_checkBox6;
		wxCheckBox* m_checkBox7;
		wxCheckBox* m_checkBox8;
		wxCheckBox* m_checkBox9;
		wxPanel* m_panel1;
		wxButton* m_button11;
		wxButton* m_button12;
		wxButton* m_button13;
		wxButton* m_button14;
		wxButton* m_button15;
		wxStaticLine* m_staticline5;
		wxButton* m_button7;
		wxButton* m_button8;
		wxTextCtrl* statusBar;
	
	public:
		
		DialogDataDokter( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 953,614 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogDataDokter();
	
};

#endif //__RS_H__
