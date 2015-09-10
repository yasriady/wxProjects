/*
 * ComboPanel.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#include "ComboPanel.h"

// wxComboBox compatible ctor
ComboPanel::ComboPanel( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
		: uiComboPanelA(parent, id, value, pos, size, n, choices, style, validator, name)
{
	m_bShow_AddButton = true;
	m_buttonAdd->Show(m_bShow_AddButton);
}

ComboPanel::~ComboPanel()
{
}

/*
 * Dd:
 * supply single column, please!
 */
//void ComboPanel::InitCtrl( AppDB* db, wxString table, wxString column, wxString where, wxString orderby )
//{
//	m_combo->InitCtrl(db, table, column, where, orderby);
//}

void ComboPanel::SetLabel( const wxString& label )
{
	//m_gtkLabel = label;
	m_combo->SetValue(label);
}

void ComboPanel::InitCtrl(AppDB* db, wxString table, wxString columns,
		wxString where, wxString orderby, int limit, int offset) {
	m_combo->InitCtrl( db, table, columns, where, orderby, limit, offset );
}

wxString ComboPanel::GetLabel() const
{
	wxString lbl = m_combo->GetValue();
	//wxPanel::SetLabel(lbl);
	//m_gtkLabel = lbl;
	return lbl; //m_gtkLabel;
}

