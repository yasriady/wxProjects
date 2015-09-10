/*
 * MyDVPopup.h
 *
 *  Created on: Feb 15, 2015
 *      Author: dedy
 */

#ifndef MYDVPOPUP_H_
#define MYDVPOPUP_H_

//#include <wx/vlbox.h>
#include "../../VListBox/VListBox.h"
#include <wx/combo.h>

class PopupVListBox : public VListBox, public wxComboPopup
{
public:
	PopupVListBox();
	virtual ~PopupVListBox();

	virtual void Init();
	virtual bool Create(wxWindow * parent);
	virtual wxWindow *GetControl() { return this; };
	virtual void SetStringValue(const wxString& s);
	virtual wxString GetStringValue() const;

	void OnMouseMove ( wxMouseEvent& event );
	void OnMouseClick( wxMouseEvent& WXUNUSED(event) );

protected:
	// Ddy: Must implement pure virtual methods
	//virtual void OnDrawItem(wxDC& dc, const wxRect& rect, size_t n) const;
	//virtual wxCoord OnMeasureItem(size_t n) const;


protected:
	int m_value;	// current item index

private:
	wxDECLARE_EVENT_TABLE();

};

#endif /* MYDVPOPUP_H_ */
