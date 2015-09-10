/*
 * QueryData.h
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#ifndef QUERYDATA_H_
#define QUERYDATA_H_

#include <wx/wx.h>
#include "../../DB/AppDB.h"

//enum FORMACTION 					{ NEWRCD=0, EDITRCD=1 };
//#define DONOT_USED_					wxMessageBox(__PRETTY_FUNCTION, "Do not used!")

class QueryData
{
public:
	QueryData();
	virtual ~QueryData();
	QueryData( AppDB* db, wxString table, wxString columns="*", wxString where="1", wxString orderby=wxEmptyString, int limit=-1, int offset=-1 );

	const wxString& GetColumns() const;
	void SetColumns( const wxString& columns );
	AppDB* GetDb() const;
	void SetDb( AppDB* db );
	int GetLimit() const;
	void SetLimit( int limit );
	int GetOffset() const;
	void SetOffset( int offset );
	const wxString& GetOrderby() const;
	void SetOrderby( const wxString& orderby );
	const wxString& GetTable() const;
	void SetTable( const wxString& table );
	const wxString& GetWhere() const;
	void SetWhere( const wxString& where );

protected:

	AppDB* m_db;
	wxString m_table;
	wxString m_columns;
	wxString m_where;
	wxString m_orderby;
	int		 m_limit;
	int		 m_offset;

	//wxString m_columns_alias;

	//void InitQueryData( QueryData* q );
	void InitQueryData( AppDB* db, wxString table, wxString columns="*", wxString where="1", wxString orderby="", int limit=-1, int offset=-1 );

private:
	void init( AppDB* db, wxString table, wxString columns="*", wxString where="1", wxString orderby=wxEmptyString, int limit=-1, int offset=-1 );

};

#endif /* QUERYDATA_H_ */


