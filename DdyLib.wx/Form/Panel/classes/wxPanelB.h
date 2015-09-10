/*
 * wxPanelB.h
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#ifndef WXPANELB_H_
#define WXPANELB_H_

//#include <wx/panel.h>
#include "../../../Base/Base.h"

class wxPanelB : public wxPanel, public Base
{
public:
	wxPanelB();
	virtual ~wxPanelB();

    // wxPanel compatible ctor
    wxPanelB(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxPanelNameStr);

};

#endif /* WXPANELB_H_ */
