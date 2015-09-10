/*
 * CustomButton.h
 *
 *  Created on: Jan 31, 2015
 *      Author: dedy
 */

#ifndef CUSTOMBUTTON_H_
#define CUSTOMBUTTON_H_

//x_#include "MyLibrary/Contrib/wxthings/toggle.h"
#include "../../../Contrib/wxthings/toggle.h"

class CustomButton : public wxCustomButton {
public:

	CustomButton() : wxCustomButton() { /*Init();*/ }

    // wxToggleButton or wxButton compatible constructor (also wxTextCtrl)
    CustomButton(wxWindow* parent, wxWindowID id,
                   const wxString& label,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = wxCUSTBUT_TOGGLE,
                   const wxValidator& val = wxDefaultValidator,
                   const wxString& name = wxT("wxCustomButton"));

    // wxBitmapButton compatible constructor
    CustomButton(wxWindow *parent, wxWindowID id,
                   const wxBitmap& bitmap,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = wxCUSTBUT_TOGGLE,
                   const wxValidator& val = wxDefaultValidator,
                   const wxString& name = wxT("wxCustomButton"));

    // Native constructor
    CustomButton(wxWindow *parent, wxWindowID id,
                   const wxString& label, const wxBitmap& bitmap,
                   const wxPoint& pos = wxDefaultPosition,
                   const wxSize& size = wxDefaultSize,
                   long style = wxCUSTBUT_TOGGLE|wxCUSTBUT_BOTTOM,
                   const wxValidator& val = wxDefaultValidator,
                   const wxString& name = wxT("wxCustomButton"));

    virtual ~CustomButton();

private:
    void doInit(int style);

};

#endif /* CUSTOMBUTTON_H_ */
