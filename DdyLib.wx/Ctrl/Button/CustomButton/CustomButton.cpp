/*
 * CustomButton.cpp
 *
 *  Created on: Jan 31, 2015
 *      Author: dedy
 */

#include "CustomButton.h"

// wxToggleButton or wxButton compatible constructor (also wxTextCtrl)
CustomButton::CustomButton(wxWindow* parent, wxWindowID id,
		const wxString& label, const wxPoint& pos, const wxSize& size,
		long style, const wxValidator& val, const wxString& name)
: wxCustomButton( parent, id, label, pos, size, style, val, name )
{
	doInit(style);
}

// wxBitmapButton compatible constructor
CustomButton::CustomButton(wxWindow* parent, wxWindowID id,
		const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size,
		long style, const wxValidator& val, const wxString& name)
: wxCustomButton( parent, id, bitmap, pos, size, style, val, name )
{
	style = wxCUSTBUT_RIGHT;
	doInit(style);
	if( GetName().Left(2) != "wx" ) SetLabel( GetName() );
}

// Native constructor
CustomButton::CustomButton(wxWindow* parent, wxWindowID id,
		const wxString& label, const wxBitmap& bitmap, const wxPoint& pos,
		const wxSize& size, long style, const wxValidator& val,
		const wxString& name)
: wxCustomButton( parent, id, label, bitmap, pos, size, style, val, name )
{
	doInit(style);
}

CustomButton::~CustomButton() {
	// TODO Auto-generated destructor stub
}

void CustomButton::doInit(int style) {

	style |= wxCUSTBUT_BUTTON;
	SetButtonStyle(style);
	SetInitialSize( wxButton::GetDefaultSize() );
}
