/*
 * DataViewCtrl.h
 *
 *  Created on: Feb 3, 2015
 *      Author: dedy
 */

#ifndef DATAVIEWCTRL_H_
#define DATAVIEWCTRL_H_

#include <wx/dataview.h>
//x_#include "MyLibrary/Base/wxBase/wxDataViewCtrlB.h"
#include "../../Base/wxBase/wxDataViewCtrlB.h"
#include "classes/DataViewVirtualListModel.h"
#include "classes/DataViewColumn.h"
//x_#include "MyLibrary/Base/ClientData.h"
#include "../../Base/ClientData.h"

class DataViewCtrl: public wxDataViewCtrlB {
public:
	DataViewCtrl();
	virtual ~DataViewCtrl();

	// Native ctor
    DataViewCtrl( wxWindow *parent, wxWindowID id,
           const wxPoint& pos = wxDefaultPosition,
           const wxSize& size = wxDefaultSize, long style = 0,
           const wxValidator& validator = wxDefaultValidator,
           const wxString& name = wxDataViewCtrlNameStr );

    void InitCtrl( AppDB* db, wxString table, wxString columns, wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );
    void Test();
    int DeleteRow();
    wxString MakeWhereFromSelected();

    void RowAppended();
    void RowChanged();
    void Reset();

protected:
    // event handler
    void onColumnHeaderClicked( wxDataViewEvent &event );

private:
    wxObjectDataPtr<DataViewVirtualListModel> m_data;

    wxDECLARE_EVENT_TABLE();

};

#endif /* DATAVIEWCTRL_H_ */


