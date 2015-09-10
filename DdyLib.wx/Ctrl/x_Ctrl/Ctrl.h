///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __CTRL_H__
#define __CTRL_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class ComboVListBox;
class LPanel;

#include <wx/string.h>
#include <wx/combobox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/statbox.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>

#include "Base/LPanel.h"

///////////////////////////////////////////////////////////////////////////

#define IDTB_LOG 1000
#define IDTB_CLEAR 1001
#define IDTB_ABOUT 1002

///////////////////////////////////////////////////////////////////////////////
/// Class Combo
///////////////////////////////////////////////////////////////////////////////
class Combo : public LPanel
{
	private:
	
	protected:
		ComboVListBox* m_combo;
		wxButton* m_buttonAdd;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onAdd( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Combo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 385,50 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("CtrlCombo") ); 
		~Combo();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Log
///////////////////////////////////////////////////////////////////////////////
class Log : public LPanel
{
	private:
	
	protected:
		wxTextCtrl* m_textLog;
		wxToolBar* tb;
		wxToolBarToolBase* m_toolClear; 
		wxToolBarToolBase* m_toolHide; 
		wxToolBarToolBase* m_toolAbout; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_toolClearOnToolClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_toolHideOnToolClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_toolAboutOnToolClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Log( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("MYCustomLog") ); 
		~Log();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Image
///////////////////////////////////////////////////////////////////////////////
class Image : public LPanel
{
	private:
	
	protected:
		wxPanel* m_panel2;
		wxStaticBitmap* m_bitmap;
		wxStaticText* m_staticLabel;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textLabel;
		wxToolBar* m_toolBar2;
		wxToolBarToolBase* m_toolBrowse; 
		wxToolBarToolBase* m_toolClear; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_textLabelOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_toolBrowseOnToolClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_toolClearOnToolClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Image( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 392,239 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("ImageViewer") ); 
		~Image();
	
};

#endif //__CTRL_H__
