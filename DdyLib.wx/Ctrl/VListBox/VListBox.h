/*
 * VListBox.h
 *
 *  Created on: Feb 16, 2015
 *      Author: dedy
 */

#ifndef VLISTBOX_H_
#define VLISTBOX_H_

#include <wx/vlbox.h>
//#include "DB/AppDB.h"
#include "../../Base/Base.h"
#include "../../Base/classes/QueryData.h"

#define ITEMHEIGHT							24

class VListBox : public wxVListBox, public Base, public QueryData
{
public:
	VListBox();
    // normal constructor which calls Create() internally
    VListBox(wxWindow *parent,
               wxWindowID id = wxID_ANY,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               long style = 0,
               const wxString& name = wxVListBoxNameStr);

    // Ddy: wxListBox compatible ctor
    VListBox( wxWindow *parent, wxWindowID id,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            int n = 0, const wxString choices[] = (const wxString *) NULL,
            long style = 0,
            const wxValidator& validator = wxDefaultValidator,
            const wxString& name = wxListBoxNameStr );

    virtual ~VListBox();

    void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );

protected:
	// Ddy: Must implemented pure virtual methods
	virtual void OnDrawItem(wxDC& dc, const wxRect& rect, size_t n) const;
	virtual wxCoord OnMeasureItem(size_t n) const;

	//AppDB *m_db;
	//wxString m_table, m_column, m_where, m_orderby;
	size_t m_itemcount;

public:
	wxString GetSelectedItemString() const;


};

#endif /* VLISTBOX_H_ */
