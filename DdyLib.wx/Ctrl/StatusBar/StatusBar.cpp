/*
 * StatusBar.cpp
 *
 *  Created on: Jan 10, 2015
 *      Author: dedy
 */

#include "StatusBar.h"

// Ddy: ??? ctor
//StatusBar::StatusBar( wxWindow* parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
//		: wxStatusBar(parent, winid, style, name)
//{
//	SetStatusText(CLSNAME, 0);
//}

// wxTextCtrl compatible ctor (purpose: for visual design by wxFormBuilder)
StatusBar::StatusBar( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, long style, const wxValidator& validator, const wxString& name )
		: wxStatusBar(parent, id, MYSTB_STYLE, name)
{
	init(parent);
}

// Ddy: NATIVE ctor
StatusBar::StatusBar( wxWindow* parent, wxWindowID winid, long style, const wxString& name )
		: wxStatusBar(parent, winid, style, name)
{
	init(parent);
}

void StatusBar::init( wxWindow* parent )
{
//	if( parent->IsKindOf(wxCLASSINFO(wxPanel)) ) createStatusBarForDialog();
//	if( parent->IsKindOf(wxCLASSINFO(wxFrame)) ) createStatusBarForFrame(parent);

	if( parent->IsKindOf(wxCLASSINFO(wxFrame)) )
		createStatusBarForFrame(parent);
	else
		createStatusBarForDialog();

}

StatusBar::~StatusBar()
{
}

void StatusBar::createStatusBarForDialog()
{
	int widths[dlgSbField_Max];

	widths[dlgSbField_0] = -1; // growable
	widths[dlgSbField_1] = 75;
	widths[dlgSbField_2] = 50;
	widths[dlgSbField_3] = 25;

	SetFieldsCount(dlgSbField_Max, widths);
	//SetStatusWidths( dlgSbField_Max, widths );

	// set pane style
	int fields = GetFieldsCount();
	int *styles = new int[fields];
	for( int i=0; i<fields; i++ )
		styles[i] = wxSB_SUNKEN; //wxSB_NORMAL;
	SetStatusStyles( fields, styles );
	delete[] styles;


}

void StatusBar::createStatusBarForFrame(wxWindow* parent)
{
	int widths[sbField_Max];

	widths[sbField_0] = -1; // growable
	widths[sbField_1] = 100;
	widths[sbField_2] = 75;
	widths[sbField_3] = 35;
	widths[sbField_4] = 25;

	SetFieldsCount(sbField_Max, widths);
	//SetStatusWidths( sbField_Max, widths );

	// set pane style
	int fields = GetFieldsCount();
	int *styles = new int[fields];
	for( int i=0; i<fields; i++ )
		styles[i] = wxSB_SUNKEN; //wxSB_NORMAL;
	SetStatusStyles( fields, styles );
	delete[] styles;

	// delete old statusbar and set new statusbar to the parent
	wxFrame *parnt = (wxFrame*)parent;
	wxStatusBar *oldsb = parnt->GetStatusBar();
	parnt->SetStatusBar(NULL);
	if( oldsb != NULL )
		wxDELETE ( oldsb );
	parnt->SetStatusBar(this);


}
