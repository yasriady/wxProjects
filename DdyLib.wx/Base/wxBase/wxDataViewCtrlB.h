/*
 * wxDataViewCtrlB.h
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#ifndef WXDATAVIEWCTRLB_H_
#define WXDATAVIEWCTRLB_H_

#include <wx/dataview.h>
#include "../Base.h"
#include "../classes/QueryData.h"

//#define DVCOL_SECTION				GetName()
//#define DVCOL_KEY(x)				wxString::Format("wcol_%02d", x)

class wxDataViewCtrlB : public wxDataViewCtrl, public Base, public QueryData
{
public:
	wxDataViewCtrlB();
	virtual ~wxDataViewCtrlB();

	// Native ctor
    wxDataViewCtrlB( wxWindow *parent, wxWindowID id,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxDataViewCtrlNameStr );

protected:
    // event handler
    void onHeaderClick( wxDataViewEvent &event );
    void onKillFocus( wxFocusEvent &event );

private:
    void saveColumnLayout();


    wxDECLARE_EVENT_TABLE();

};

#endif /* WXDATAVIEWCTRLB_H_ */
