/*
 * DBBase.cpp
 *
 *  Created on: Dec 19, 2014
 *      Author: dedy
 */

#include "DBBase.h"

DBBase::DBBase(wxString host, wxString port, wxString dbname, wxString username, wxString password) {
	m_host = host;
	m_port = port;
	m_dbname = dbname;
	m_username = username;
	m_password = password;

	//m_dbtype = DBTYPE;	// unnecessary

}

DBBase::~DBBase() {
	// TODO Auto-generated destructor stub
}

