/*
 * wxDataViewVirtualListModelB.h
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#ifndef WXDATAVIEWVIRTUALLISTMODELB_H_
#define WXDATAVIEWVIRTUALLISTMODELB_H_

#include <wx/dataview.h>
#include "../Base.h"
#include "../classes/QueryData.h"

class wxDataViewVirtualListModelB : public wxDataViewVirtualListModel, public Base, public QueryData
{
public:
	wxDataViewVirtualListModelB();
	virtual ~wxDataViewVirtualListModelB();
};

#endif /* WXDATAVIEWVIRTUALLISTMODELB_H_ */


