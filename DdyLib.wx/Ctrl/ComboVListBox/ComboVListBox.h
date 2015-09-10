/*
 * MyComboCtrl.h
 *
 *  Created on: Feb 15, 2015
 *      Author: dedy
 */

#ifndef MYCOMBOCTRL_H_
#define MYCOMBOCTRL_H_

#include <wx/combo.h>
#include "classes/PopupVListBox.h"

class ComboVListBox : public wxComboCtrl
{
public:

	// native ctor
    ComboVListBox(wxWindow *parent,
                wxWindowID id = wxID_ANY,
                const wxString& value = wxEmptyString,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = 0,
                const wxValidator& validator = wxDefaultValidator,
                const wxString& name = wxComboBoxNameStr);

    // wxComboBox compatible ctor
    ComboVListBox(wxWindow *parent,
               wxWindowID id,
               const wxString& value = wxEmptyString,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               int n = 0, const wxString choices[] = NULL,
               long style = 0,
               const wxValidator& validator = wxDefaultValidator,
               const wxString& name = wxComboBoxNameStr);

    virtual ~ComboVListBox();

    void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 )
    { m_popupCtrl->InitCtrl( db, table, columns, where, orderby, limit, offset  ); }

private:
    PopupVListBox *m_popupCtrl;
    wxButton *m_addbtn;

    void init();
    void setAddButton();
};

#endif /* MYCOMBOCTRL_H_ */
