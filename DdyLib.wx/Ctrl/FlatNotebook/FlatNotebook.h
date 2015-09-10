/*
 * FlatNoteBook.h
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#ifndef FLATNOTEBOOK_H_
#define FLATNOTEBOOK_H_

#include <wx/wxFlatNotebook/wxFlatNotebook.h>

#define MYSTYLE			wxFNB_VC8 | wxFNB_NO_X_BUTTON

class FlatNotebook : public wxFlatNotebook
{
public:
	FlatNotebook();
	virtual ~FlatNotebook();

	// Native ctor
	FlatNotebook(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = wxT("Flat Notebook"));
};

#endif /* FLATNOTEBOOK_H_ */
