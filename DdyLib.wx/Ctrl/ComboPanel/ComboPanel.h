/*
 * ComboPanel.h
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#ifndef COMBOPANEL_H_
#define COMBOPANEL_H_

#include "classes/uiComboPanelA.h"
//x_#include "MyLibrary/Ctrl/ComboVListBox/ComboVListBox.h"
#include "../../Ctrl/ComboVListBox/ComboVListBox.h"


class ComboPanel : public uiComboPanelA
{
public:
	virtual ~ComboPanel();

	// wxComboBox compatible ctor
    ComboPanel(wxWindow *parent,
               wxWindowID id,
               const wxString& value = wxEmptyString,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               int n = 0, const wxString choices[] = NULL,
               long style = 0,
               const wxValidator& validator = wxDefaultValidator,
               const wxString& name = wxComboBoxNameStr);

	//void InitCtrl(AppDB* db, wxString table, wxString column, wxString where="1", wxString orderby="");
	void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );

    // SetLabel(), which does nothing in wxWindow
    virtual void SetLabel(const wxString& label);// { m_gtkLabel = label; }
    virtual wxString GetLabel() const ;//           { return m_gtkLabel; }

protected:
	bool m_bShow_AddButton;



};

#endif /* COMBOPANEL_H_ */
