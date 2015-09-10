/*
 * Logger.h
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include "classes/uiLoggerA.h"

class Logger : public uiLoggerA
{
public:
	virtual ~Logger();

	//wxPanel ctor compatible
    Logger(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxPanelNameStr);

    //wxTextCtrl ctor compatible
    Logger(wxWindow *parent,
           wxWindowID id,
           const wxString &value = wxEmptyString,
           const wxPoint &pos = wxDefaultPosition,
           const wxSize &size = wxDefaultSize,
           long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString &name = wxTextCtrlNameStr);
};

#endif /* LOGGER_H_ */
