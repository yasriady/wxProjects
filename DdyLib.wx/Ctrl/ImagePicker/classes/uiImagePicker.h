///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UIIMAGEPICKER_H__
#define __UIIMAGEPICKER_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class wxPanelB;

#include "../../../Form/Panel/classes/wxPanelB.h"
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
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ImagePickerA
///////////////////////////////////////////////////////////////////////////////
class ImagePickerA : public wxPanelB
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
		wxButton* m_buttonBrowse;
		wxButton* m_buttonClear;
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_textLabelOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void onBrowse( wxCommandEvent& event ) { event.Skip(); }
		virtual void onClear( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ImagePickerA( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 161,116 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("ImagePickerA") ); 
		~ImagePickerA();
	
};

#endif //__UIIMAGEPICKER_H__
