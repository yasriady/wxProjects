/*
 * Common.h
 *
 *  Created on: Dec 24, 2014
 *      Author: dedy
 */

#ifndef COMMON_H_
#define COMMON_H_

#include "Strings.h"
//#include <wx/wx.h>
//#include "Ctrl/MyConfig.h"
//#include <wx/aui/auibook.h>

#define x_LOGFUNC						wxLogMessage(wxString::Format("FUNCTION -> %s", __PRETTY_FUNCTION__))
#define LOGMSG						wxLogMessage
#define LOGERR(msg1, msg2)			funcLOGERR(__PRETTY_FUNCTION__, msg1, msg2)
#define FORMAT						wxString::Format
//#define CTRLID					wxString::Format( "%s%d", GetClassInfo()->GetClassName(), GetId() )
#define CTRLNAME					wxString::Format( "%s", GetName() )
//#define conf						m_db->getConfig
#define AlertMe(msg)				funcAlertMe(__PRETTY_FUNCTION__, msg)

//enum MyAction { ADD1, EDIT1, DELETE };
static wxString MyActionString[] = { "Add", "Edit", "Delete" };

#define n2s							NumericToString

inline void funcLOGERR(const wxString &func_name, const wxString &msg1, const wxString &msg2) {
	wxLogError ("->@FUNC: " + func_name);
	wxLogError (msg1);
	wxLogError (msg2);
	wxLogError ("---------------------------------------------------------");
}

inline void funcAlertMe(wxString msg1, wxString msg2) {
	wxMessageBox(msg1, msg2);
}

inline wxString Slice(const wxString& s, size_t from, size_t to) {
	return s.Mid(from, (to - from));
}

//Split (Tokenize) string at specified intervals
//s == string to split
//retArray == split up string (out)
//cpszExp == expression to split at
//crnStart == start postion to split
//crnCount == max number of split of strings
//crbCIComp == true if case insensitive
inline void Split(const wxString& s, wxArrayString& retArray, const wxChar* cpszExp, const size_t& crnStart = 0, const size_t& crnCount = (size_t) -1, const bool& crbCIComp = false) {
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
			retArray.Add(Slice(s, nOldPos, nPos)); //Insert the token in the array
			nOldPos = nPos += szExp.Length(); //Move up the start slice position
		}
	} else
	{
		for (int i = crnCount; (nPos = szComp.find(szExp, nPos)) != wxString::npos && i != 0; --i) //Is there another token in the string && have we met nCount?
		{
			retArray.Add(Slice(s, nOldPos, nPos)); //Insert the token in the array
			nOldPos = nPos += szExp.Length(); //Move up the start slice position
		}
	}
	if (nOldPos != s.Length())
		retArray.Add(Slice(s, nOldPos, s.Length())); //Add remaining characters in string
}

inline wxArrayString StringToArray(const wxString &str, const wxString &delimiter) {
	wxArrayString result;
	const wxChar *c = delimiter.c_str();
	Split(str, result, c);
	return result;
}

inline wxString x_BoolToString(bool value) {	// return 0 or 1
	wxString retval = value ? "1" : "0";
	return retval;
}

inline bool x_StringToBool(wxString value) {	// return 0 or 1
	bool retval = (value == "1") ? true : false;
	return retval;
}

inline wxString NumericToString(wxVariant n) {
	return n.GetString();
}

inline wxDateTime x_StringToDate(wxString str) {
	wxDateTime dt;
	wxString::const_iterator end;
	wxString format;

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
		LOGERR("Parse failed", "");
	} else if (end == str.end())
	{
		LOGMSG
		("Entire string parsed");
	} else
	{
		LOGERR("Entire string to date conversion completed", "");
	}
	return dt;
}

//inline void RemovePage(wxWindow* page) {
//	wxAuiNotebook* parent = (wxAuiNotebook*) page->GetParent();
//	parent->DeletePage(parent->GetSelection());
//}

inline void AvailableSoon(wxString msg = "caption") {
	wxMessageBox("This feature will available soon...!", msg);
}

#endif /* DB_COMMON_H_ */

