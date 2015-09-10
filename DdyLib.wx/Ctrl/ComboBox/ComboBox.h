/* 
 * File:   ComboBox.h
 * Author: dedy
 *
 * Created on August 30, 2015, 6:10 AM
 */

#ifndef COMBOBOX_H
#define	COMBOBOX_H

#include <wx/combo.h>
//#include <wx-3.0/wx/gtk/combobox.h>
#include "../../DB/AppDB.h"

class ComboBox : public wxComboBox {
public:
    
    ComboBox();
    
//    ComboBox(const ComboBox& orig);

    ComboBox(wxWindow *parent,
               wxWindowID id,
               const wxString& value = wxEmptyString,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               int n = 0, const wxString choices[] = NULL,
               long style = 0,
               const wxValidator& validator = wxDefaultValidator,
               const wxString& name = wxComboBoxNameStr);    
    
    virtual ~ComboBox();
    
    void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );
    void InitCtrl( const wxString &sql, AppDB* db );

    
private:

};

#endif	/* COMBOBOX_H */

