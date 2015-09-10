/*
 * BaseDefs.h
 *
 *  Created on: Jan 23, 2015
 *      Author: dedy
 */

#ifndef BASEDEFS_H_
#define BASEDEFS_H_

//#include <wx/wx.h>

#define val(v)			funcVal(v, __PRETTY_FUNCTION__)

inline wxString funcVal(wxString val, wxString method_location) {
	// TODO: Ddy, do some actions filter here. Example to check if value is empty
	return val;
}

/*
 * Base def
 * ---------------------------------------------------------------------------------------------
 */
class BaseDefs {

public:
	BaseDefs() {}
	virtual ~BaseDefs() {}

	wxString GetTitle() 	{ return val( m_title ); }
	wxString GetTable() 	{ return val( m_table ); }
	wxString GetColumns() 	{ return val( m_columns ); }
	wxString GetCtrlPrefix(){ return val( m_ctrlprefix ); }
//	bool     IsMyCtrl(wxString ctrl_name);

protected:
	wxString m_title;
	wxString m_table;
	wxString m_columns;
	wxString m_ctrlprefix;

private:
	wxString x_val2(wxString str) {
		if( str.Trim()=="" ) {
			wxMessageBox( "Variable empty" );
		}
		return str;
	}

};





#endif /* BASEDEFS_H_ */
