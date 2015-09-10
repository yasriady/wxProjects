///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UILOGGER_H__
#define __UILOGGER_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class wxPanelB;

//x_#include "MyLibrary/Form/Panel/classes/wxPanelB.h"
#include "../../../Form/Panel/classes/wxPanelB.h"
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////

#define IDTB_LOG 1000
#define IDTB_CLEAR 1001
#define IDTB_ABOUT 1002

///////////////////////////////////////////////////////////////////////////////
/// Class LoggerA
///////////////////////////////////////////////////////////////////////////////
class LoggerA : public wxPanelB
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
		
		LoggerA( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 572,188 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("MyCustomLogger") ); 
		~LoggerA();
	
};

#endif //__UILOGGER_H__
