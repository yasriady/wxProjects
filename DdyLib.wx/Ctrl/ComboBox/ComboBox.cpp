/* 
 * File:   ComboBox.cpp
 * Author: dedy
 * 
 * Created on August 30, 2015, 6:10 AM
 */

//#include <wx-3.0/wx/gtk/combobox.h>
#include <wx-3.0/wx/gtk/combobox.h>

#include "ComboBox.h"

ComboBox::ComboBox() {
}

//ComboBox::ComboBox(const ComboBox& orig) {
//}

// wxComboBox compatible ctor
ComboBox::ComboBox( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
//: wxComboBox(parent, id, value, pos, size, style, validator, name)
: wxComboBox(parent, id, value, pos, size, n, choices, style | wxCB_READONLY, validator, name)
{
}


ComboBox::~ComboBox() {
}

void ComboBox::InitCtrl(AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset) 
{
    //SetValue("Daffa");
    MyJSONValue jval = 
            db->GetRecordByIdx(table, columns, where, orderby, limit, offset);
    const int qty = jval.Size();     
  
    for( int i=0;i<qty;i++ ) {
        
        wxString ROWID = wxString::Format( "ROW%d", i );
        wxString str = jval[ROWID][0].AsString();
        Append(str);
    }
    
}

void ComboBox::InitCtrl(const wxString& sql, AppDB* db)
{
    
}