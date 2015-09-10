/***************************************************************
 * Name:      wx_pch.h
 * Purpose:   Header to create Pre-Compiled Header (PCH)
 * Author:    Dedy Yasriady (yasriady@gmail.com)
 * Created:   2015-01-25
 * Copyright: Dedy Yasriady (http://yasriady.blogspot.com)
 * License:   
 **************************************************************/

#ifndef WX_PCH_H_INCLUDED
#define WX_PCH_H_INCLUDED

// basic wxWidgets headers
#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#ifdef WX_PRECOMP

// put here all your rarely-changing header files
#include <wx/fileconf.h>
//#include <wx/stdpaths.h>
#include <wx/dataview.h>
#include <wx/busyinfo.h>
#include <wx/aui/auibook.h>
#include <wx/socket.h>
#include <wx/datectrl.h>
#include <wx/spinctrl.h>
#include <wx/dateevt.h>
#include <wx/combo.h>
#include <wx/print.h>
#include <wx/printdlg.h>


#endif // WX_PRECOMP

#endif // WX_PCH_H_INCLUDED
