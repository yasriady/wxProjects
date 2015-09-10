/*
 * Logger.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#include "Logger.h"

Logger::~Logger()
{
}

//wxPanel ctor compatible
Logger::Logger( wxWindow* parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
: uiLoggerA( parent )
{
}

//wxTextCtrl ctor compatible
Logger::Logger( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name )
: uiLoggerA( parent )
{
}
