/*
 * MPanel.h
 *
 *  Created on: Jan 28, 2015
 *      Author: dedy
 */

#ifndef MPanel_H_
#define MPanel_H_

//#include <wx/generic/panelg.h>
//#include <wx/wx.h>
#include  "../../../Base/Base.h"

class MPanel: public wxPanel, public Base {

public:
	virtual ~MPanel();
    MPanel(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxPanelNameStr);

};

#endif /* MPanel_H_ */


