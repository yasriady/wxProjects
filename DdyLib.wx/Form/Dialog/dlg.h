///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 12 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DLG_H__
#define __DLG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class DataViewCtrl;
class StatusBar;
class wxDialogB;

#include "classes/wxDialogB.h"
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>
#include <wx/toolbar.h>
#include <wx/dataview.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Header
///////////////////////////////////////////////////////////////////////////////
class Header : public wxDialogB
{
	private:
	
	protected:
		wxPanel* m_panelHeader;
		wxStaticBitmap* m_bitmap;
		wxStaticText* m_staticTitle;
		wxPanel* m_panelButton;
		wxBoxSizer* bSizerButton;
		wxButton* m_buttonSave;
		wxButton* m_buttonReset;
		wxButton* m_buttonClose;
		wxPanel* m_panelFooter;
		StatusBar* m_sb;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void onReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void onClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Header( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 428,542 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Header();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FieldEditor
///////////////////////////////////////////////////////////////////////////////
class FieldEditor : public wxDialogB
{
	private:
	
	protected:
		wxPanel* m_panelHeader;
		wxStaticBitmap* m_bitmap;
		wxStaticText* m_staticTitle;
		wxPanel* m_panelButton;
		wxBoxSizer* bSizerButton;
		wxButton* m_buttonSave;
		wxButton* m_buttonReset;
		wxButton* m_buttonClose;
		wxPanel* m_panelFooter;
		StatusBar* m_sb;
		
		// Virtual event handlers, overide them in your derived class
		virtual void xClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void onSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void onReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void onClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FieldEditor( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 387,503 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~FieldEditor();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class RecordEditor
///////////////////////////////////////////////////////////////////////////////
class RecordEditor : public wxDialogB
{
	private:
	
	protected:
		wxPanel* m_panelHeader;
		wxStaticBitmap* m_bitmap;
		wxStaticText* m_staticTitle;
		wxPanel* m_panelButton;
		wxBoxSizer* bSizerButton;
		wxButton* m_buttonSave;
		wxButton* m_buttonReset;
		wxButton* m_buttonClose;
		wxPanel* m_panelFooter;
		StatusBar* m_sb;
		
		// Virtual event handlers, overide them in your derived class
		virtual void xClose( wxCloseEvent& event ) = 0;
		virtual void onInitDialog( wxInitDialogEvent& event ) = 0;
		virtual void onSave( wxCommandEvent& event ) = 0;
		virtual void onReset( wxCommandEvent& event ) = 0;
		virtual void onClose( wxCommandEvent& event ) = 0;
		
	
	public:
		
		RecordEditor( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 387,503 ), long style = wxCAPTION|wxCLOSE_BOX ); 
		~RecordEditor();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class RecordManager
///////////////////////////////////////////////////////////////////////////////
class RecordManager : public wxDialogB
{
	private:
	
	protected:
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* m_toolAdd; 
		wxToolBarToolBase* m_toolEdit; 
		wxToolBarToolBase* m_toolDelete; 
		wxToolBarToolBase* m_toolRefresh; 
		wxToolBarToolBase* m_toolClose; 
		DataViewCtrl* m_dvCtrl;
		StatusBar* m_sb;
		
		// Virtual event handlers, overide them in your derived class
		virtual void xClose( wxCloseEvent& event ) = 0;
		virtual void onAdd( wxCommandEvent& event ) = 0;
		virtual void onEdit( wxCommandEvent& event ) = 0;
		virtual void onDelete( wxCommandEvent& event ) = 0;
		virtual void onRefresh( wxCommandEvent& event ) = 0;
		virtual void onClose( wxCommandEvent& event ) = 0;
		virtual void onDataViewCtrlSelectionChanged( wxDataViewEvent& event ) = 0;
		
	
	public:
		
		RecordManager( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 537,402 ), long style = wxCAPTION|wxCLOSE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~RecordManager();
	
};

#endif //__DLG_H__
