/*
 * MyJSON.h
 *
 *  Created on: Feb 18, 2015
 *      Author: dedy
 */

#ifndef MYJSON_H_
#define MYJSON_H_

//#include <wx/jsonval.h>
#include <wx/jsonwriter.h>
#include <wx/jsonreader.h>

#define TRACE(str) 					wxLogTrace(wxTraceMask(), str)
#define LOG(str) 					wxLogMessage(str)

class MyJSONValue : public wxJSONValue
{
public:
	MyJSONValue();
	virtual ~MyJSONValue();

	wxString GetString(int style=wxJSONWRITER_NONE);
	void SetString( const wxString& str );

	void Trace(int style=wxJSONWRITER_NONE);

};

#endif /* MYJSON_H_ */
