/*
 * VListBox.cpp
 *
 *  Created on: Feb 16, 2015
 *      Author: dedy
 */

#include "VListBox.h"

VListBox::VListBox()
{
	m_itemcount = 0;
	m_db = NULL;
}

// normal constructor which calls Create() internally
VListBox::VListBox( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
		: wxVListBox(parent, id, pos, size, style, name)
{
	m_itemcount = 0;
	m_db = NULL;
}

// Ddy: wxListBox compatible ctor (convenienced call via wxFormBuilder)
VListBox::VListBox( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
		: wxVListBox(parent, id, pos, size, style, name)
{
	m_itemcount = 0;
	m_db = NULL;
}

VListBox::~VListBox()
{
}

void VListBox::OnDrawItem( wxDC& dc, const wxRect& rect, size_t n ) const
{
	wxString s;
	//s = wxString::Format("Item-%u", n);
	int limit = 1;
	int offset = n;
	wxArrayString arr_s = m_db->GetRecord( m_columns, m_table, m_where, m_orderby, limit, offset );
	s = arr_s[0];
	wxPoint pt = rect.GetPosition();
	pt.x = pt.x + 3;
	dc.DrawText(s, pt );

}

wxCoord VListBox::OnMeasureItem( size_t n ) const
{
	return ITEMHEIGHT; // height of the item
}

wxString VListBox::GetSelectedItemString() const
{
	int limit = 1;
	int offset = GetSelection();
	if( offset == wxNOT_FOUND ) return wxEmptyString;

	MyJSONValue val = m_db->GetRecordByName(m_table, m_columns, m_where, m_orderby, limit, offset);
	wxString str = val["ROW0"][m_columns].AsString();
	return str;

}

void VListBox::InitCtrl(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset)
{
	InitQueryData( db, table, columns, where, orderby, limit, offset );
	m_itemcount = m_db->GetRecordCount(m_table, m_where);
	SetItemCount(m_itemcount);
}

