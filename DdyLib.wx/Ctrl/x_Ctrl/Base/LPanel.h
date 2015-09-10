/*
 * LPanel.h
 *
 *  Created on: Jan 28, 2015
 *      Author: dedy
 */

#ifndef __LPanel_H_
#define __LPanel_H_

#include "MPanel.h"

class LPanel: public MPanel {
public:
	//LPanel();
	virtual ~LPanel();

    LPanel(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxPanelNameStr);



};

#endif /* __LPanel_H_ */
