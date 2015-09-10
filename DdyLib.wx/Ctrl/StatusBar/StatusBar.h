/*
 * StatusBar.h
 *
 *  Created on: Jan 10, 2015
 *      Author: dedy
 */

#ifndef STATUSBAR_H_
#define STATUSBAR_H_

//#include <wx/statusbr.h>
#include "../../Base/MYDEFINE.h"

#define	MYSTB_STYLE						wxST_SIZEGRIP //wxSTB_DEFAULT_STYLE

class StatusBar: public wxStatusBar {
public:

	// Ddy: NATIVE ctor
    StatusBar(wxWindow *parent, wxWindowID winid = wxID_ANY,
                long style = wxSTB_DEFAULT_STYLE,
                const wxString& name = wxStatusBarNameStr);
	virtual ~StatusBar();

    // Ddy: ??? ctor
	//StatusBar(wxWindow *parent, wxWindowID winid = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSTB_DEFAULT_STYLE, const wxString& name = wxStatusBarNameStr);

	// wxTextCtrl compatible ctor (purpose: for visual design by wxFormBuilder)
    StatusBar(wxWindow *parent,
               wxWindowID id,
               const wxString &value = wxEmptyString,
               const wxPoint &pos = wxDefaultPosition,
               const wxSize &size = wxDefaultSize,
               long style = 0,
               const wxValidator& validator = wxDefaultValidator,
               const wxString &name = wxTextCtrlNameStr);

private:

    void init(wxWindow* parent);

    void createStatusBarForDialog();
    enum {
    	dlgSbField_0,
    	dlgSbField_1,
    	dlgSbField_2,
    	dlgSbField_3,
    	dlgSbField_Max
    };

    void createStatusBarForFrame(wxWindow* parent);
    enum {
    	sbField_0,
    	sbField_1,
    	sbField_2,
    	sbField_3,
    	sbField_4,
    	sbField_Max
    };


};

#endif /* STATUSBAR_H_ */
