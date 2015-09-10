/*
 * FlatNoteBook.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#include "FlatNotebook.h"

FlatNotebook::FlatNotebook()
{ Init(); }

// Native ctor
FlatNotebook::FlatNotebook( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
: wxFlatNotebook( parent, id, pos, size, /*style |*/ MYSTYLE, name )
{
}

FlatNotebook::~FlatNotebook()
{

}

