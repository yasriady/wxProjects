/*
 * MYFUNCTION.h
 *
 *  Created on: Feb 9, 2015
 *      Author: dedy
 */

#ifndef _MYFUNCTION_H_
#define _MYFUNCTION_H_

#include <wx/wx.h>

inline wxString slice( const wxString& s, size_t from, size_t to )
{
	return s.Mid(from, (to - from));
}

//Split (Tokenize) string at specified intervals
//s == string to split
//retArray == split up string (out)
//cpszExp == expression to split at
//crnStart == start postion to split
//crnCount == max number of split of strings
//crbCIComp == true if case insensitive
inline void split(const wxString& s, wxArrayString& retArray, const wxChar* cpszExp, const size_t& crnStart = 0, const size_t& crnCount = (size_t) -1, const bool& crbCIComp = false)
{
	//sanity checks
	wxASSERT_MSG(cpszExp != NULL, wxT("Invalid value for First Param of wxString::Split (cpszExp)"));
//    wxASSERT_MSG(crnCount >= (size_t)-1, wxT("Invalid value for Third Param of wxString::Split (crnCount)"));

	retArray.Clear();

	size_t nOldPos = crnStart,      //Current start position in this string
			nPos = crnStart;      //Current end position in this string

	wxString szComp,            //this string as-is (if bCIComp is false) or converted to lowercase
			szExp = cpszExp;   //Expression string, normal or lowercase

	if (crbCIComp)
	{
		szComp = s.Lower();
		szExp.MakeLower();
	} else
		szComp = s;

	if (crnCount == (size_t) -1)
	{
		for (; (nPos = szComp.find(szExp, nPos)) != wxString::npos;)   //Is there another token in the string
		{
			retArray.Add(slice(s, nOldPos, nPos)); //Insert the token in the array
			nOldPos = nPos += szExp.Length(); //Move up the start slice position
		}
	} else
	{
		for (int i = crnCount; (nPos = szComp.find(szExp, nPos)) != wxString::npos && i != 0; --i) //Is there another token in the string && have we met nCount?
		{
			retArray.Add(slice(s, nOldPos, nPos)); //Insert the token in the array
			nOldPos = nPos += szExp.Length(); //Move up the start slice position
		}
	}
	if (nOldPos != s.Length())
		retArray.Add(slice(s, nOldPos, s.Length())); //Add remaining characters in string

}

inline wxArrayString StringToArray( const wxString& str, const wxString& delimiter )
{
	wxArrayString result;
	const wxChar *c = delimiter.c_str();
	split(str, result, c);
	return result;
}

inline bool StringToBool(wxString value) {
	bool retval = (value == "1") ? true : false;
	return retval;
}

// Ddy: Convert wxString to wxDateTime, please check format options
// if str="" return value will be "1970-01-01 00:00:00"
inline wxDateTime StringToDate(wxString str) {

	wxDateTime dt;
	wxString::const_iterator end;
	wxString format;

	if( str=="" ) str = "1970-01-01 00:00:00";

	if (str.Len() == 19)
		format = "%Y-%m-%d %H:%M:%S";
	if (str.Len() == 10)
		format = "%Y-%m-%d";
	if (str.Len() == 8)
		format = "%m/%d/%Y";
	if (str.Len() == 17)
		format = "m/%d/%Y %H:%M:%S";

	//if( !dt.ParseFormat(str, "%Y-%m-%d", &end) ) {	// OK
	//if( !dt.ParseFormat(str, "%Y-%m-%d %H:%M:%S", &end) ) {
	//if( !dt.ParseFormat(str, "%m/%d/%Y %H:%M:%S", &end) ) { // NG
	if (!dt.ParseFormat(str, format, &end))
	{
		//LOGERR("Parse failed", "");
	} else if (end == str.end())
	{
		//LOGMSG("Entire string parsed");
	} else
	{
		//LOGERR("Entire string to date conversion completed", "");
	}
	return dt;
}

inline long StringToLong(wxString str) {
	long long_val;
	if( !str.ToLong(&long_val, 10) ) {
		//SHOWERROR("Coversion Error!");
		long_val = -1;
	}
	return long_val;
}

inline long StringToDouble(wxString str) {
	double double_val;

	if( !str.ToCDouble(&double_val) ) {
		//SHOWERROR("Coversion Error!");
		double_val = -1;
	}
	return double_val;
}

// return 0 or 1
inline wxString BoolToString(bool value) {
	wxString retval = value ? "1" : "0";
	return retval;
}

// return 0 or 1
inline wxString LongToString(long value) {
	wxString string = wxString::Format( "%ld", value );
	return string;
}

inline wxString DoubleToString(double value) {
	wxString string = wxString::FromDouble(value);
	return string;
}












#endif /* _MYFUNCTION_H_ */
