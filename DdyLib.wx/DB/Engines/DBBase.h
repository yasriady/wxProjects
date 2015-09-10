/*
 * DBBase.h
 *
 *  Created on: Dec 19, 2014
 *      Author: dedy
 */

#ifndef DBBASE_H_
#define DBBASE_H_

#include "../Functions.h"
#include "../Recordset.h"
#include "../../JSON/MyJSON.h"

#define DBTYPE				funcDBTYPE(__FUNCTION__)
#define ALIAS				"ALIAS"
#define ORIG				"ORIG"

inline wxString funcDBTYPE(wxString name) {
	name.Replace("DB", "");
	return name;
}

class DBBase {
public:

	DBBase(wxString host, wxString port, wxString dbname, wxString username, wxString password);
	virtual ~DBBase();

	enum JSONTYPE{ BYNAME, BYINDEX };

protected:

	wxString m_host;
	wxString m_port;
	wxString m_dbname;
	wxString m_username;
	wxString m_password;

	wxString m_dbtype;

public:

	virtual wxString Test() = 0;
	wxString getDBType() {
		return m_dbtype;
	}
	wxString getDBName() {
		return m_dbname;
	}
	virtual bool connect() = 0;
	virtual wxString GetSingleValue(wxString table, wxString column, wxString criteria) = 0;		// Get single value from a table
	virtual wxArrayString GetColumnValues(wxString table, wxString column, wxString where, wxString orderby, wxString custom_sql) = 0;	// Get multiple values from a table
	virtual wxString GetTablenameBy(wxString column) = 0;
	virtual void SaveToTable(wxString table, wxString columns, wxString values) = 0;
	virtual int ExecUpdate(const wxString &sql) = 0;
	virtual int ExecScalar(const wxString &sql) = 0;

	// 2 lines below are for MyDataViewVirtualListModel
	virtual wxArrayString MakeColumns(const wxString &sql) = 0;
	virtual wxArrayString GetColumnName(const wxString &table, const wxString &columns) = 0;

	virtual wxString xx_getValueByRow(unsigned row, unsigned col, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby) = 0;
	virtual unsigned int GetRecordCount(const wxString &table, const wxString &where) = 0;

	virtual wxArrayString xx_getValueByRow2(unsigned row, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby) = 0;

	virtual wxArrayString *xx_GetValueByRow3(unsigned row, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby) = 0;

	// app_config
	virtual wxString getConfig(wxString section, wxString key) = 0;
	virtual void setConfig(wxString section, wxString key, wxString value) = 0;

	virtual bool SaveRecord(const wxString &table, const wxArrayString &columns, const wxArrayString &values) = 0;
	virtual wxArrayString GetRecord(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) = 0;
	virtual Recordset GetRecord2(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) = 0;

	// Using wxJSON, 140218
	virtual MyJSONValue GetRecord(const JSONTYPE byWhat, const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) = 0;
	virtual MyJSONValue x_GetRecordByName(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) = 0;
	virtual MyJSONValue x_GetRecordByIdx(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) = 0;

	virtual MyJSONValue GetColumnList( wxString table, wxString columns, JSONTYPE byWhat ) = 0;

	virtual MyJSONValue GetSingleValue2(wxString table, wxString column, wxString criteria) = 0;		// Get single value from a table, return JSON
	virtual wxString GetSingleValue3(wxString table, wxString column, wxString criteria) = 0;		// Get single value from a table, return JSON
};

#endif /* DBBASE_H_ */
