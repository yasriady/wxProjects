/*
 * MyConfig.h
 *
 *  Created on: Dec 31, 2014
 *      Author: dedy
 */

#ifndef MYCONFIG_H_
#define MYCONFIG_H_

#include <wx/wx.h>
#include <wx/fileconf.h>
//#include <wx/config.h>
#include <wx/stdpaths.h>
#include <wx/socket.h>

#define skey(s1, s2)		wxString::Format( "/%s/%s", s1, s2 )
#define SHOWERROR(msg)		funcSHOWERROR(__PRETTY_FUNCTION__, msg)

inline void funcSHOWERROR( wxString msg1, wxString msg2  ) {
	wxLogMessage(msg1);
	wxLogMessage(msg2);
}

class MyConfig {
public:
	MyConfig(wxString appname, wxString vendorname, wxString filename);
	virtual ~MyConfig();

public:
	bool SetString(wxString section, wxString key, wxString value);
	bool SetLong(wxString section, wxString key, long value);
	bool SetInt(wxString section, wxString key, int value);
	wxString GetString(wxString section, wxString key, wxString def_val = "");
	long GetLong(wxString section, wxString key, long def_val = -1);
	int GetInt(wxString section, wxString key, int def_val = -1);
	bool GetBool(wxString section, wxString key, bool def_val = false);

	// ------ EXTRA ------------------------------------------------------

	wxString MyData(wxDialog* form, wxString action, wxString rowid);
	long StringToLong(wxString str);
	int StringToInt(wxString str);
	wxDateTime StringToDate(wxString str);
	bool StringToBool(wxString value);
	wxString BoolToString(bool value);
	// for spliting string into array:
	wxArrayString StringToArray(const wxString &str, const wxString &delimiter);
	wxString IntToString(int value);
private:
	void split(const wxString& s, wxArrayString& retArray, const wxChar* cpszExp, const size_t& crnStart = 0, const size_t& crnCount = (size_t) -1, const bool& crbCIComp = false);
	wxString slice(const wxString& s, size_t from, size_t to);

	// ------ ITERATE CONTROL --------------------------------------------

public:
	void CollectChildControl(wxWindow* win, wxWindowList &ctrllist);

public:
	// ------ UTILS ------------------------------------------------------
	// Ddy: 2 baris berikut penyebab error:
	// ../../src/common/stdpbase.cpp(62): assert "traits" failed in Get(): create wxApp before calling this
	//wxString GetMyDir();
	//wxString GetExeFilenameNoExt();
	wxString GetMyIP();
	wxString GetMyHostname();


private:
	wxFileConfig* m_wxconf;
	wxFileName m_exefilename;
};

#endif /* MYCONFIG_H_ */
