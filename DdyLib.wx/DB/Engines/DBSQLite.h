/*
 * DBSQLite.h
 *
 *  Created on: Dec 19, 2014
 *      Author: dedy
 */

#ifndef DBSQLITE_H_
#define DBSQLITE_H_

#include "DBBase.h"
#include <wx/wxsqlite3.h>

class DBSQLite: public DBBase {
public:

	DBSQLite(wxString host, wxString port, wxString dbname, wxString username, wxString password);
	virtual ~DBSQLite();

public:
	wxString Test();
	bool connect();
	// Get single value from a table
	wxString GetSingleValue(wxString table, wxString column, wxString criteria);
	// Get multiple values from a table
	wxArrayString GetColumnValues(wxString table, wxString column, wxString where, wxString orderby, wxString custom_sql);
	wxString GetTablenameBy(wxString column);
	void SaveToTable(wxString table, wxString columns, wxString values);
	int ExecUpdate(const wxString &sql);
	int ExecScalar(const wxString &sql);
	// 2 lines below are for MyDataViewVirtualListModel
	wxArrayString MakeColumns(const wxString &sql);
	wxArrayString GetColumnName(const wxString &table, const wxString &columns);

	wxString xx_getValueByRow(unsigned row, unsigned col, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby);
	wxArrayString xx_getValueByRow2(unsigned row, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby);
	wxArrayString *xx_GetValueByRow3(unsigned row, const wxString &table, const wxString &columns_str, const wxString &where, const wxString &orderby);

	unsigned int GetRecordCount(const wxString &table, const wxString &where);

	// app_config
	wxString getConfig(wxString section, wxString key);
	void setConfig(wxString section, wxString key, wxString value);

	bool SaveRecord(const wxString &table, const wxArrayString &columns, const wxArrayString &values);
	wxArrayString GetRecord(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);
	Recordset GetRecord2(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);

	// Using wxJSON, 140218
	MyJSONValue GetRecord(const JSONTYPE byWhat, const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);
	MyJSONValue x_GetRecordByName(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);
	MyJSONValue x_GetRecordByIdx(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);

	MyJSONValue GetColumnList( wxString table, wxString columns, JSONTYPE byWhat );

	// Get single value from a table
	// return val["column_name"];
	MyJSONValue GetSingleValue2(wxString table, wxString column, wxString criteria);
	wxString GetSingleValue3(wxString table, wxString column, wxString criteria);

protected:

private:
	wxSQLite3Database* m_db;
	wxSQLite3ResultSet getRS(const wxString &sql);
	wxSQLite3ResultSet getRS(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1);
};

#endif /* DBSQLITE_H_ */
