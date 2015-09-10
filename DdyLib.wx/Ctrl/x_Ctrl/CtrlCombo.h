#ifndef __CtrlCombo__
#define __CtrlCombo__

/**
@file
Subclass of Combo, which is generated by wxFormBuilder.
*/

#include "Ctrl.h"

//// end generated include

//#include "../Common/Global_Var.h"
//#include "../DB/AppDB.h"
//#include "Form/AppUICategoryPanel.h"
//#include "Form/Base/BasePanel.h"
//#include "Form/AppUIAddDialog.h"

#include "Ctrl/ComboVListBox/ComboVListBox.h"

/** Implementing Combo */
class CtrlCombo : public Combo
{
	protected:
		// Handlers for Combo events.
		void onAdd( wxCommandEvent& event );
	public:
		/** Constructor */
		CtrlCombo( wxWindow* parent );
	//// end generated class members

		// wxComboBox ctor compatible
		CtrlCombo(wxWindow *parent, wxWindowID id, const wxString& value = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator =
				wxDefaultValidator, const wxString& name = wxComboBoxNameStr);

		void InitCtrl(AppDB* db, wxString table, wxString column, wxString where="1", wxString orderby="");

	    // SetLabel(), which does nothing in wxWindow
	    virtual void SetLabel(const wxString& label);// { m_gtkLabel = label; }
	    virtual wxString GetLabel() const ;//           { return m_gtkLabel; }

	protected:
		bool m_bShow_AddButton;










};

#endif // __CtrlCombo__