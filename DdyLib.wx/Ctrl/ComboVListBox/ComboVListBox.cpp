/*
 * MyComboCtrl.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: dedy
 */

#include "ComboVListBox.h"

// native ctor
ComboVListBox::ComboVListBox( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name )
		: wxComboCtrl(parent, id, value, pos, size, style, validator, name)
{
	m_addbtn = NULL;
	init();
}

// wxComboBox compatible ctor
ComboVListBox::ComboVListBox( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
		: wxComboCtrl(parent, id, value, pos, size, style, validator, name)
{
	m_addbtn = NULL;
	init();
}

ComboVListBox::~ComboVListBox()
{
	wxDELETE(m_addbtn);
}

void ComboVListBox::setAddButton()
{
	// Ddy: customize button
	//int ctl_w = GetSize().GetWidth();
	//int ctl_h = GetSize().GetHeight();
	//int addbtn_w = GetButtonSize().GetWidth();
	//int addbtn_h = GetButtonSize().GetHeight() - 0;
	//wxSize addbtn_sz = GetButtonSize();
	//wxPoint addbtn_pos = wxPoint( GetSize().GetWidth() - GetButtonSize().GetWidth()-1, 0);
	//m_addbtn = new wxButton(this, wxID_ANY, "+", addbtn_pos, addbtn_sz );
	//SetButtonPosition(-1, -1, wxRIGHT, 0);
}

void ComboVListBox::init()
{
	m_popupCtrl = new PopupVListBox();
	SetPopupControl(m_popupCtrl);
	//SetPopupMinWidth(300);
	SetPopupMaxHeight(200);
	//SetAddButton();
        SetValue("-");
}
