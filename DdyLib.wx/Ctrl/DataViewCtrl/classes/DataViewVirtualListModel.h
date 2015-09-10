/*
 * DataViewVirtualListModel.h
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#ifndef DATAVIEWVIRTUALLISTMODEL_H_
#define DATAVIEWVIRTUALLISTMODEL_H_

#include <wx/dataview.h>
//x_#include "MyLibrary/Base/wxBase/wxDataViewVirtualListModelB.h"
#include "../../../Base/wxBase/wxDataViewVirtualListModelB.h"

class DataViewVirtualListModel : public wxDataViewVirtualListModelB
{
public:
	DataViewVirtualListModel();
	virtual ~DataViewVirtualListModel();

	void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );

	// Ddy: Must implemented pure virtual methods
	virtual void GetValueByRow(wxVariant &variant,
                           unsigned row, unsigned col) const;
    virtual unsigned int GetColumnCount() const;
    virtual bool SetValueByRow(const wxVariant &variant,
                           unsigned row, unsigned col);
    virtual wxString GetColumnType( unsigned int col ) const;
    // ---------------------------------------------------------------------------

    void Reset2();

private:
    unsigned int m_column_cnt, m_row_cnt;


};

#endif /* DATAVIEWVIRTUALLISTMODEL_H_ */
