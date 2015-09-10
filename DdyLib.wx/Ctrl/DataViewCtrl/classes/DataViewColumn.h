/*
 * DataViewColumn.h
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#ifndef DATAVIEWCOLUMN_H_
#define DATAVIEWCOLUMN_H_

#include <wx/dataview.h>

class DataViewColumn : public wxDataViewColumn
{
public:
	//DataViewColumn();
	virtual ~DataViewColumn();

    DataViewColumn( const wxString &title, wxDataViewRenderer *renderer,
                      unsigned int model_column, int width = wxDVC_DEFAULT_WIDTH,
                      wxAlignment align = wxALIGN_CENTER,
                      int flags = wxDATAVIEW_COL_RESIZABLE );
    DataViewColumn( const wxBitmap &bitmap, wxDataViewRenderer *renderer,
                      unsigned int model_column, int width = wxDVC_DEFAULT_WIDTH,
                      wxAlignment align = wxALIGN_CENTER,
                      int flags = wxDATAVIEW_COL_RESIZABLE );

    void SetTitleOrig( wxString title_orig ) { m_title_orig = title_orig; }
    wxString GetTitleOrig() { return m_title_orig; }

    void SetTitleAlias( wxString title_alias ) {
    	m_title_alias = title_alias;
    	SetTitle(m_title_alias);
    }
    wxString GetTitleAlias() { return m_title_alias; }

protected:
    wxString m_title_orig;
    wxString m_title_alias;

};

#endif /* DATAVIEWCOLUMN_H_ */
