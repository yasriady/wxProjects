/*
 * AppDB.h
 *
 *  Created on: Dec 22, 2014
 *      Author: dedy
 */

#ifndef DB_APPDB_H_
#define DB_APPDB_H_
 
#include "Engines/DBSQLite.h"
//#include "DBPostgresql.h"
//#include "DBMySQL.h"
//#include "MyLibrary/Base/Global_Var.h"

#define DAFFA	"Lagi belajar!"

class AppDB {

private:
	DBBase* m_db;
	//wxString m_sql;
        // Ddy: 150903
        wxArrayString columns, values;

public:
	AppDB(wxString host, wxString port, wxString dbname, wxString username, wxString password);
	virtual ~AppDB();

	bool m_connect;

	wxString getDBType() {
		return m_db->getDBType();
	}

	wxString getDBName() const {
		return m_db->getDBName();
	}

	wxString Test() {
		return m_db->Test();
	}

	// Get single value from a table
	wxString GetVar(wxString table, wxString column, wxString criteria) {
		return m_db->GetSingleValue(table, column, criteria);
	}

	// Get multiple values from a table (1 COLUMN, many ROWS)
	wxArrayString GetVars(wxString table, wxString column, wxString where, wxString orderby, wxString custom_sql) {
		wxArrayString array;
		array = m_db->GetColumnValues(table, column, where, orderby, custom_sql);
		//array.Insert("-",0);
		return array;
	}

	// to get table name which consist username and column name
	wxString getTablenameBy(wxString column) {
		return m_db->GetTablenameBy(column);
	}

	void SaveToTable(wxString table, wxString columns, wxString values) {
		m_db->SaveToTable(table, columns, values);
	}

	int execUpdate(const wxString &sql) {	// no return value
		return m_db->ExecUpdate(sql);
	}

	int execScalar(const wxString &sql) {	// Allows to easily retrieve the result of queries returning a single integer result like SELECT COUNT(*) FROM table WHERE condition.
		return m_db->ExecScalar(sql);
	}

	wxArrayString makeColumns(const wxString &sql) {
		return m_db->MakeColumns(sql);
	}

	wxArrayString makeColumns(const wxString &table, const wxString &columns) {
		return m_db->GetColumnName(table, columns);
	}

	unsigned int GetRecordCount(const wxString &table, const wxString &where) {
		return m_db->GetRecordCount(table, where);
	}

	// 0000000000000000000000 ------------------------------------------------------------

	// app_config
	wxString getConfig(wxString section, wxString key) {
		return m_db->getConfig(section, key);
	}
	void setConfig(wxString section, wxString key, wxString value) {
		m_db->setConfig(section, key, value);
	}

	bool SaveRecord(const wxString& table, const wxArrayString& columns, const wxArrayString& values) {
		return m_db->SaveRecord(table, columns, values);
	}

	wxArrayString GetRecord(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) {
		return m_db->GetRecord(columns, table, where, orderby, limit, offset);
	}

	Recordset GetRecordset(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) {
		return m_db->GetRecord2(columns, table, where, orderby, limit, offset);
	}

//	Recordset GetFieldset(const wxString &columns, const wxString &table, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) {
//		return m_db->GetRecord2(columns, table, where, orderby, limit, offset);
//	}

	int x_DelRecord(const wxString &table, const wxString &rowid);
	int UpdateRecord(const wxString &table, const wxArrayString &columns, const wxArrayString &values, const wxString &where);
	void CreateIndex(const wxString &table, const wxString &column);	// Ddy: create index, so data querying much faster

        // Ddy (150901): default is insert, thus where = 0
	void InsertOrUpdate( const wxString &table, const wxArrayString &columns, const wxArrayString &values, const wxString &where="0" );
        void InsertOrUpdate2( const wxString &table, const int rcd_id );

	wxString GetConfig(wxString key, wxString table = "setting");
	void SetConfig(wxString key, wxString value, wxString table = "setting");

	bool IsRcdExist(wxString table, wxString where);

	// Using wxJSON, 140218
	MyJSONValue GetRecordByName(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) {
		return m_db->GetRecord( DBBase::BYNAME, table, columns, where, orderby, limit, offset);
	}

	MyJSONValue GetRecordByIdx(const wxString &table, const wxString &columns, const wxString &where = "1", const wxString &orderby = "", const int limit = -1, const int offset = -1) {
		return m_db->GetRecord( DBBase::BYINDEX, table, columns, where, orderby, limit, offset);
	}

	MyJSONValue GetColumnListByName( wxString table, wxString columns ) {
		return m_db->GetColumnList(table, columns, DBBase::BYNAME);
	}

	MyJSONValue GetColumnListByIdx( wxString table, wxString columns );

	void UpdateTable(const wxString &table, MyJSONValue &rcd, const wxString &where);

	// Get single value from a table
	// return val["column_name"];
	MyJSONValue GetVar2(wxString table, wxString column, wxString criteria) {
		MyJSONValue result;
		result = m_db->GetSingleValue2(table, column, criteria);
		return result;
	}
	wxString GetVar3(wxString table, wxString column, wxString criteria) {
		return m_db->GetSingleValue3(table, column, criteria);
	}

	int DeleteRecord(const wxString &table, const wxString &where);
        
        // Ddy: 150903
        void ResetColumn();
        void AddInput(wxControl* control);

protected:

};

#endif /* APPDB_H_ */

