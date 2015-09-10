/*
 * QueryData.cpp
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#include "QueryData.h"

QueryData::QueryData()
{
	//m_db = NULL;
	//m_table = wxEmptyString;
	//m_columns = wxEmptyString;
	//m_where = wxEmptyString;
	//m_orderby = wxEmptyString;
	//m_limit = -1;
	//m_offset = -1;
	init( NULL, wxEmptyString, wxEmptyString, wxEmptyString, wxEmptyString, -1, -1 );

}

QueryData::QueryData( AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset )
{
	init( db, table, columns, where, orderby, limit, offset );
}

void QueryData::InitQueryData( AppDB* db, wxString table, wxString columns,
		wxString where, wxString orderby, int limit, int offset) {

	m_db = db;
	m_table = table;
	m_columns = columns;
	m_where = where;
	m_orderby = orderby;
	m_limit = limit;
	m_offset = offset;
}

void QueryData::init( AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset )
{
	m_db = db;
	m_table = table;
	m_columns = columns;
	m_where = where;
	m_orderby = orderby;
	m_limit = limit;
	m_offset = offset;
}

QueryData::~QueryData()
{
}

const wxString& QueryData::GetColumns() const
{
	return m_columns;
}

void QueryData::SetColumns( const wxString& columns )
{
	m_columns = columns;
}

AppDB* QueryData::GetDb() const
{
	return m_db;
}

void QueryData::SetDb( AppDB* db )
{
	m_db = db;
}

int QueryData::GetLimit() const
{
	return m_limit;
}

void QueryData::SetLimit( int limit )
{
	m_limit = limit;
}

int QueryData::GetOffset() const
{
	return m_offset;
}

void QueryData::SetOffset( int offset )
{
	m_offset = offset;
}

const wxString& QueryData::GetOrderby() const
{
	return m_orderby;
}

void QueryData::SetOrderby( const wxString& orderby )
{
	m_orderby = orderby;
}

const wxString& QueryData::GetTable() const
{
	return m_table;
}

void QueryData::SetTable( const wxString& table )
{
	m_table = table;
}

// Ddy: get SQL where clause
const wxString& QueryData::GetWhere() const
{
	return m_where;
}

void QueryData::SetWhere( const wxString& where )
{
	m_where = where;
}

// Ddy: deprecated
// initialize all member variables (m_db, m_table, m_columns, etc...)
//void QueryData::InitQueryData( QueryData* q )
//{
//	m_db = q->GetDb();
//	m_table = q->GetTable();
//	m_columns = q->GetColumns();
//	m_where = q->GetWhere();
//	m_orderby = q->GetOrderby();
//	m_offset = q->GetOffset();
//	m_limit = q->GetLimit();
//}

