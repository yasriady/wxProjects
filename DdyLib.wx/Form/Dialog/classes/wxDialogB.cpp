/*
 * wxDialogB.cpp
 *
 *  Created on: Feb 21, 2015
 *      Author: dedy
 */

#include "wxDialogB.h"

wxDialogB::wxDialogB()
		: wxDialog()
{
	init();
}

// wxDialog ctor compatible
wxDialogB::wxDialogB( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
		: wxDialog(parent, id, title, pos, size, style, name)
{
	init();
}

void wxDialogB::init()
{
	m_init = true;
}

wxDialogB::~wxDialogB()
{
}

void wxDialogB::collectChildControl( wxWindow* parent )
{
	wxWindowList &children = parent->GetChildren();

	for( wxWindowList::Node *node = children.GetFirst(); node; node = node->GetNext() )
	{
		wxControl *ctrl = (wxControl*) node->GetData();

		if( (ctrl->GetChildren()).GetCount() > 0 )
			collectChildControl(ctrl);

		wxString ctrl_name = ctrl->GetName();
		// get ctrlprefix
		wxString ctlprefix = ctrl_name.Left(4).Upper();
		if( (ctlprefix == KEY) | (ctlprefix == FLD) )
		{
			m_ctrlprefix = ctlprefix;
			m_ctrllist.Append(ctrl);
			connectEvent(ctrl);
		}
	}

}

void wxDialogB::setValue2( wxWindow* ctrl, wxString value )
{
	processControl(ctrl, SETVALUE, value);
}

wxString wxDialogB::getValue2( wxWindow* ctrl )
{
	return processControl(ctrl, GETVALUE);
}

void wxDialogB::connectEvent( wxControl* ctrl )
{
	processControl(ctrl, CONNECTEVT);
}

wxString wxDialogB::processControl( wxWindow* ctrl, CTRLACTION action, wxString value )
{
	ctrl->Enable(action);	//GETVALUE=false, SETVALUE=true

	if( ctrl->IsKindOf(wxCLASSINFO( wxTextCtrl)) )
		value = processControl(wxDynamicCast(ctrl, wxTextCtrl), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxComboBox)) )
		value = processControl(wxDynamicCast(ctrl, wxComboBox), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxStaticText)) )
		value = processControl(wxDynamicCast(ctrl, wxStaticText), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxCheckBox)) )
		value = processControl(wxDynamicCast(ctrl, wxCheckBox), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxDatePickerCtrl)) )
		value = processControl(wxDynamicCast(ctrl, wxDatePickerCtrl), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxPanel)) )
		value = processControl(wxDynamicCast(ctrl, wxPanel), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxSpinCtrl)) )
		value = processControl(wxDynamicCast(ctrl, wxSpinCtrl), action, value);
	if( ctrl->IsKindOf(wxCLASSINFO( wxComboCtrl ) ) )
		value = processControl(wxDynamicCast(ctrl, wxComboCtrl), action, value);
	return value;
}

wxString wxDialogB::processControl( wxTextCtrl* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetValue(value);
	}
	if( action == GETVALUE )
	{
		value = ctrl->GetValue();
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}
	return value;
}

wxString wxDialogB::processControl( wxComboBox* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		if( value == "" )
			ctrl->SetSelection(0);
		else
			ctrl->SetValue(value);
	}
	if( action == GETVALUE )
	{
		if( ctrl->GetSelection() == 0 )
			value = "";
		else
			value = ctrl->GetValue();
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
		ctrl->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}
	return value;
}

wxString wxDialogB::processControl( wxStaticText* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetLabel(value);
	}
	if( action == GETVALUE )
	{
		value = ctrl->GetLabel();
	}
	if( action == CONNECTEVT )
	{
		// NONE
	}

	return value;
}

wxString wxDialogB::processControl( wxCheckBox* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetValue(m_config->StringToBool(value));
	}
	if( action == GETVALUE )
	{
		bool bool_value = ctrl->GetValue();
		value = m_config->BoolToString(bool_value);
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}

	return value;
}

wxString wxDialogB::processControl( wxDatePickerCtrl* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetValue(m_config->StringToDate(value));
	}
	if( action == GETVALUE )
	{
		wxDateTime date_value = ctrl->GetValue();
		value = date_value.Format("%Y-%m-%d %H:%M:%S");
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect(wxEVT_DATE_CHANGED, wxDateEventHandler(wxDialogB::onDateModified), NULL, this);
	}
	return value;
}

wxString wxDialogB::processControl( wxPanel* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetLabel(value);
	}
	if( action == GETVALUE )
	{
		value = ctrl->GetLabel();
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}

	return value;
}

wxString wxDialogB::processControl( wxSpinCtrl* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		int int_value = m_config->StringToInt(value);
		ctrl->SetValue(int_value);
	}
	if( action == GETVALUE )
	{
		int int_value = ctrl->GetValue();
		value = m_config->IntToString(int_value);
	}
	if( action == CONNECTEVT )
	{
		ctrl->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}

	return value;
}

wxString wxDialogB::processControl( wxComboCtrl* ctrl, CTRLACTION action, wxString value )
{
	if( action == SETVALUE )
	{
		ctrl->SetValue(value);
	}
	if( action == GETVALUE )
	{
		value = ctrl->GetValue();
	}

	if( action == CONNECTEVT )
	{
		ctrl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
		ctrl->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(wxDialogB::onTextModified), NULL, this);
	}
	return value;
}

void wxDialogB::setDirty( bool dirty )
{
	m_dirty = dirty;
	m_buttonSave->Enable(m_dirty );
	m_buttonReset->Enable(m_dirty );

}

void wxDialogB::onDateModified( wxDateEvent& event )
{
	setDirty(true);
}

void wxDialogB::onTextModified( wxCommandEvent& event )
{
	setDirty(true);
}

void wxDialogB::setCtrlProperty( wxWindowID id, bool dirty )
{
}

void wxDialogB::enableInput(bool enable)
{
	for( wxWindowList::Node *node=m_ctrllist.GetFirst(); node; node->GetNext() ) {
		wxWindow* ctrl = (wxWindow*) node->GetData();
		ctrl->Enable(enable);
	}
}
