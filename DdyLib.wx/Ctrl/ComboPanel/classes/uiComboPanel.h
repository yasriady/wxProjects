///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 24 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UICOMBOPANEL_H__
#define __UICOMBOPANEL_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class ComboVListBox;

#include <wx/string.h>
#include <wx/combobox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ComboPanelA
///////////////////////////////////////////////////////////////////////////////
class ComboPanelA : public wxPanel 
{
	private:
	
	protected:
		ComboVListBox* m_combo;
		wxButton* m_buttonAdd;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onAdd( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ComboPanelA( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 385,50 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxT("CtrlCombo") ); 
		~ComboPanelA();
	
};

#endif //__UICOMBOPANEL_H__
