/* 
 * File     : Control.h
 * Author   : Dedy Yasriady
 * Purpose  : Generic control, intended for AppDB usage
 * Created on September 1, 2015, 7:47 AM
 */

#ifndef CONTROL_H
#define	CONTROL_H

class Control : public wxControl {
public:
    Control();
    Control(const Control& orig);
    virtual ~Control();
    
    // Ddy: default ctor
    Control(wxWindow *parent, wxWindowID id,
             const wxPoint& pos = wxDefaultPosition,
             const wxSize& size = wxDefaultSize, long style = 0,
             const wxValidator& validator = wxDefaultValidator,
             const wxString& name = wxControlNameStr);    
    
private:

};

#endif	/* CONTROL_H */

