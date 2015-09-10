/*
 * MyConfig.cpp
 *
 *  Created on: Dec 31, 2014
 *      Author: dedy
 */

#include "MyConfig.h"

MyConfig::MyConfig(wxString appname, wxString vendorname, wxString filename) {

	m_exefilename = wxFileName( ( wxStandardPaths::Get() ) . GetExecutablePath() );

	//filename = !filename.IsEmpty() ? filename : m_exefilename.GetName();
	if( filename=="" ) filename = m_exefilename.GetName();
	m_wxconf = new wxFileConfig(appname, vendorname, filename, "xxxxxxxxxxxxx", wxCONFIG_USE_LOCAL_FILE );


}

MyConfig::~MyConfig() {
	wxDELETE(m_wxconf);
	wxASSERT(!m_wxconf);
	m_wxconf = NULL;
}

bool MyConfig::SetString(wxString section, wxString key, wxString value) {
	//key = wxString::Format( "/%s/%s", section, key );
	key = skey(section, key);
	m_wxconf->Write(key, value);
	m_wxconf->Flush();
	return TRUE;
}

bool MyConfig::SetLong(wxString section, wxString key, long value) {
	this->SetString(section, key, wxString::Format(wxT("%ld"), value));
	return TRUE;
}

bool MyConfig::SetInt(wxString section, wxString key, int value) {
	this->SetLong(section, key, (long) value);
	return TRUE;
}

wxString MyConfig::GetString(wxString section, wxString key, wxString def_val) {
	wxString key2 = key;
	key = wxString::Format("%s/%s", section, key);
	wxString value = m_wxconf->Read(key, def_val);
	SetString(section, key2, value);
	return value;
}

long MyConfig::GetLong(wxString section, wxString key, long def_val) {

	wxString def_val2 = wxString::Format( wxT("%ld"), def_val);	// Ddy: CRASH
	//wxString def_val2 = wxString::Format( "%d", def_val);	// Ddy: CRASH
	wxString string = this->GetString(section, key, def_val2);
	long value;

	if ( !string.IsNumber() )
	{
		value = def_val;
	} else
	{
		string.ToLong(&value, 10);
	}
	return value;
}

int MyConfig::GetInt(wxString section, wxString key, int def_val) {
	int value = def_val;

	long lg = this->GetLong(section, key, def_val);
	//value = (int) this->GetLong(section, key, def_val);
	value = (int) lg;
	return value;
}

bool MyConfig::GetBool( wxString section, wxString key, bool def_val )
{
	wxString strval = GetString( section, key, BoolToString(def_val) );
	bool bvalue = StringToBool(strval);
	return bvalue;
}

// ------ EXTRA ------------------------------------------------------

wxString MyConfig::MyData(wxDialog* form, wxString action, wxString rowid) {
	wxString original_name = form->GetName();
	wxString mydata = wxString::Format("%s|%s|%s", original_name, action, rowid);
	return mydata;
}

// Ddy: Convert wxString to wxDateTime, please check format options
// if str="" return value will be "1970-01-01 00:00:00"
wxDateTime MyConfig::StringToDate(wxString str) {

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

// return true or false
bool MyConfig::StringToBool(wxString value) {
	bool retval = (value == "1") ? true : false;
	return retval;
}

wxArrayString MyConfig::StringToArray(const wxString& str, const wxString& delimiter) {
	wxArrayString result;
	const wxChar *c = delimiter.c_str();
	split(str, result, c);
	return result;
}

// return 0 or 1
wxString MyConfig::BoolToString(bool value) {
	wxString retval = value ? "1" : "0";
	return retval;
}

//Split (Tokenize) string at specified intervals
//s == string to split
//retArray == split up string (out)
//cpszExp == expression to split at
//crnStart == start postion to split
//crnCount == max number of split of strings
//crbCIComp == true if case insensitive
void MyConfig::split(const wxString& s, wxArrayString& retArray, const wxChar* cpszExp, const size_t& crnStart, const size_t& crnCount, const bool& crbCIComp) {
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

wxString MyConfig::slice(const wxString& s, size_t from, size_t to) {
	return s.Mid(from, (to - from));
}

wxString MyConfig::IntToString(int value) {
	wxString str_val = wxString::Format( "%d", value );
	return str_val;
}

void MyConfig::CollectChildControl(wxWindow* win, wxWindowList& ctrllist) {

//	wxWindowList &children = win->GetChildren();
//
//	for (wxWindowList::Node *node = children.GetFirst(); node; node = node->GetNext())
//	{
//		//wxWindow *current = (wxWindow*)node->GetData();
//		wxControl *current = (wxControl*) node->GetData();
//		if ((current->GetChildren()).GetCount() > 0)
//			CollectChildControl(current, ctrllist);
//		wxString ctrl_name = current->GetName();
//		if (ctrl_name.Left((wxString(FLDCTRLID)).Len()) == FLDCTRLID)
//		{
//			myctrl.Append(current);
//		}
//	}

}

long MyConfig::StringToLong(wxString str) {
	long long_val;
	if( !str.ToLong(&long_val, 10) ) {
		SHOWERROR("Coversion Error!");
		long_val = -1;
	}
	return long_val;
}

int MyConfig::StringToInt(wxString str) {
	int int_val = (int)StringToLong(str);
	return int_val;
}
/*
 * Utils
 * -------------------------------------------------------------------------------------------------
 */

//wxString MyConfig::GetMyDir() {
//	wxStandardPaths path = wxStandardPaths::Get();
//	wxString mypath = path.GetExecutablePath();
//	wxString my_dir = (wxFileName(path.GetExecutablePath())).GetPath();
//	return my_dir;
//}

//wxString MyConfig::GetExeFilenameNoExt() {
//	wxStandardPaths path = wxStandardPaths::Get();
//	wxString mypath = path.GetExecutablePath();
//	wxString my_nameis = (wxFileName(path.GetExecutablePath())).GetName();
//	return my_nameis;
//}

wxString MyConfig::GetMyIP()
{
	wxIPV4address addr;
	addr.Hostname( wxGetFullHostName() );
	wxString ipaddr = addr.IPAddress();
	return ipaddr;
}

wxString MyConfig::GetMyHostname() {
/* 	will Error if no network interface connected
	wxIPV4address addr;
	addr.Hostname( wxGetFullHostName() );
	wxString hostname = addr.Hostname();
	return hostname;
*/
	return wxGetHostName();
}
