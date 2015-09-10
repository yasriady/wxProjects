/* 
 * File:   Control.cpp
 * Author: dedy
 * 
 * Created on September 1, 2015, 7:47 AM
 */

#include <wx-3.0/wx/gtk/control.h>

#include "Control.h"

Control::Control() {
}

Control::Control(const Control& orig) {
}

Control::~Control() {
}

// Ddy: default ctor
Control::Control(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name) 
: wxControl( parent, id, pos, size, style, validator, name )
{
    
}

