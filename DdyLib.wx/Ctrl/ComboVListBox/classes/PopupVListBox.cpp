/*
 * MyDVPopup.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: dedy
 */

#include "PopupVListBox.h"

wxBEGIN_EVENT_TABLE( PopupVListBox, VListBox )
	EVT_MOTION( PopupVListBox::OnMouseMove )
	EVT_LEFT_UP( PopupVListBox::OnMouseClick )
wxEND_EVENT_TABLE()

PopupVListBox::PopupVListBox()
{
	//SetItemCount(25);
}

//void PopupVListBox::OnDrawItem( wxDC& dc, const wxRect& rect, size_t n ) const
//{
//	dc.DrawText( "Daffa", wxPoint(0,0) );
//}

//wxCoord PopupVListBox::OnMeasureItem( size_t n ) const
//{
//	return 24;
//}

PopupVListBox::~PopupVListBox()
{
	// TODO Auto-generated destructor stub
}

// Initialize member variable
void PopupVListBox::Init()
{
	m_value = -1;
}

bool PopupVListBox::Create( wxWindow* parent )
{
	return VListBox::Create(parent, wxID_ANY, wxDefaultPosition /*wxPoint(0,0)*/, wxDefaultSize );
}

void PopupVListBox::SetStringValue( const wxString& s )
{
}

// Ddy: Get selected string value
wxString PopupVListBox::GetStringValue() const
{
	const wxString &str = VListBox::GetSelectedItemString();
	return str;
}

void PopupVListBox::OnMouseMove( wxMouseEvent& event )
{
}

void PopupVListBox::OnMouseClick( wxMouseEvent& )
{
	Dismiss();
	wxString str = GetStringValue();
	GetComboCtrl()->SetValue( str );

//	wxLogTrace(wxTraceMask(), __PRETTY_FUNCTION__ );
//	wxLogTrace(wxTraceMask(), str );



}

