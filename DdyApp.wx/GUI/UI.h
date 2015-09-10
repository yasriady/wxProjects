///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug 22 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UI_H__
#define __UI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_button1OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("My wxApp"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame1
///////////////////////////////////////////////////////////////////////////////
class MainFrame1 : public wxFrame 
{
	private:
	
	protected:
	
	public:
		
		MainFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("My wxApp"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 639,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame1();
	
};

#endif //__UI_H__
