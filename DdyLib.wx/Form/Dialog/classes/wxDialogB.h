/*
 * wxDialogB.h
 *
 *  Created on: Feb 21, 2015
 *      Author: dedy
 */

#ifndef WXDIALOGB_H_
#define WXDIALOGB_H_

#include <wx/datectrl.h>
#include <wx/spinctrl.h>
#include <wx/dateevt.h>
#include <wx/combo.h>

//#include <wx/dialog.h>
#include "../../../Base/Base.h"
#include "../../../Base/classes/QueryData.h"

#define KEY						"KEY="
#define FLD						"FLD="
#define MYCLS(cls)				cls

class wxDialogB : public wxDialog, public Base, public QueryData
{
public:

	wxDialogB();
	virtual ~wxDialogB();

	// wxDialog ctor compatible
    wxDialogB( wxWindow *parent, wxWindowID id,
            const wxString &title,
            const wxPoint &pos = wxDefaultPosition,
            const wxSize &size = wxDefaultSize,
            long style = wxDEFAULT_DIALOG_STYLE,
            const wxString &name = wxDialogNameStr );

private:
    void init();
    bool m_init;

protected:
    bool m_dirty;
    wxButton* m_buttonSave;
    wxButton* m_buttonReset;

    wxString m_ctrlprefix;
    wxWindowList m_ctrllist;

    enum CTRLACTION						{ GETVALUE, SETVALUE, CONNECTEVT };

    void collectChildControl( wxWindow* parent );

	// processControl
	//--------------------------------------------------------------------------------
	void setValue2( wxWindow* ctrl, wxString value);
	wxString getValue2( wxWindow *ctrl );
	void connectEvent( wxControl *ctrl );
	wxString processControl	( wxWindow 		 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxTextCtrl 	 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxComboBox 	 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxStaticText 	 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxCheckBox 	 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxDatePickerCtrl	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxPanel		 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxSpinCtrl	 	*ctrl, CTRLACTION action, wxString value="" );
	wxString processControl	( wxComboCtrl	 	*ctrl, CTRLACTION action, wxString value="" );

	// onControlModified
	//--------------------------------------------------------------------------------
	void setDirty(bool dirty);
	virtual void onTextModified( wxCommandEvent& event );
	virtual void onDateModified( wxDateEvent& event );
	void setCtrlProperty( wxWindowID id, bool dirty);

	void enableInput(bool enable);


};

#endif /* WXDIALOGB_H_ */
