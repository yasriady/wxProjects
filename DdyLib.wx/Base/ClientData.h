/*
 * ClientData.h
 *
 *  Created on: Mar 30, 2015
 *      Author: dedy
 */

#ifndef CLIENTDATA_H_
#define CLIENTDATA_H_

#include <wx/wx.h>
#include "../DB/AppDB.h"
#include "MyConfig.h"

class ClientData {
public:
	ClientData();
	virtual ~ClientData();

	MyConfig *m_config;
	AppDB*    m_db;

	wxString m_TestString;

};

#endif /* CLIENTDATA_H_ */
