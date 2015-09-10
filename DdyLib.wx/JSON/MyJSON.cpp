/*
 * MyJSON.cpp
 *
 *  Created on: Feb 18, 2015
 *      Author: dedy
 */

#include "MyJSON.h"

MyJSONValue::MyJSONValue()
{
}

MyJSONValue::~MyJSONValue()
{
}

wxString MyJSONValue::GetString(int style)
{
	wxJSONWriter writer(style);
	wxString str;
	writer.Write(*this, str);
	return str;

}

void MyJSONValue::SetString( const wxString& str )
{
	wxJSONReader reader;
	int numErrors = reader.Parse(str, this);

	if( numErrors > 0 )
	{
		wxLogMessage
		("ERROR: JSON document is not well-formed");
		const wxArrayString &errors = reader.GetErrors();
		// print the errors array
		// ...
	}
}

//Trace document string
void MyJSONValue::Trace(int style)
{
	wxString str = GetString(style);
	TRACE(str);
}

