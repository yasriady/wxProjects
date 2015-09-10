#include "CtrlCombo.h"

CtrlCombo::CtrlCombo( wxWindow* parent )
:
Combo( parent )
{
	// NEVER USED ------- for wxFormBuilder class generation only
}

void CtrlCombo::onAdd( wxCommandEvent& event )
{
/*
AppUIAddDialog *add_dlg = new AppUIAddDialog(this);
BasePanel *panel = new AppUICategoryPanel(add_dlg);
add_dlg->InsertPanel(panel);
add_dlg->ShowModal();
*/
}


wxString CtrlCombo::GetLabel() const
{
	wxString lbl = m_combo->GetValue();
	//wxPanel::SetLabel(lbl);
	//m_gtkLabel = lbl;
	return lbl; //m_gtkLabel;
}

/*
 * Dd:
 * supply single column, please!
 */
void CtrlCombo::InitCtrl( AppDB* db, wxString table, wxString column, wxString where, wxString orderby )
{
	//m_combo->InitCtrl(db, table, column, where, orderby);
}

CtrlCombo::CtrlCombo( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
		: Combo(parent, id, pos, size, style, name)
{
	m_bShow_AddButton = true;
	m_buttonAdd->Show(m_bShow_AddButton);
}

void CtrlCombo::SetLabel( const wxString& label )
{
	//m_gtkLabel = label;
	m_combo->SetValue(label);
}
