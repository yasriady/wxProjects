#include "dlgRecordEditor.h"

dlgRecordEditor::dlgRecordEditor( wxWindow* parent )
		: RecordEditor(parent)
{

	SetClientData( parent->GetClientData() );
	ClientData* clientData = (ClientData*)GetClientData();
	m_config = clientData->m_config;
	m_db = clientData->m_db;

	init();
}

void dlgRecordEditor::xClose( wxCloseEvent& event )
{
	saveLayout(this);
	if( m_dirty )
	{
		int ans = wxMessageBox(_("Close ?"), _("Caption"), wxYES_NO);
		if( ans == wxYES )
			EndModal(wxCLOSE);
	} else
	{
		EndModal(wxCLOSE);
	}
}

void dlgRecordEditor::onInitDialog( wxInitDialogEvent& event )
{
	SetName("EditorForm");
	loadLayout(this);
}

void dlgRecordEditor::onSave( wxCommandEvent& event )
{
	MyJSONValue rcd;

	for( wxWindowList::Node *node = m_ctrllist.GetFirst(); node; node = node->GetNext() )
	{
		wxWindow* ctrl = (wxWindow*) node->GetData();
		wxString fld = ctrl->GetName();
		fld.Replace(m_ctrlprefix, "", true);
		wxString val = getValue2(ctrl);
		rcd[fld] = val;
	}

	m_db->UpdateTable(m_table, rcd, m_where);

	wxCommandEvent *myevt;
	if( m_where == "0" )
	{
		onReset(event); // ?? jika pada mode edit, maka form menjadi kosong semua, WHY ?????
		myevt = new wxCommandEvent(wxRECORD_APPENDED);
	} else
	{
		myevt = new wxCommandEvent(wxRECORD_CHANGED);
	}
//	RcdClient *rcd = new RcdClient();
//	rcd->m_name = "Daffa & Azzam";
//	rcd->m_type = "Owner";
//	myevt->SetClientData(rcd);
	wxQueueEvent(GetParent()/*m_parent*/, myevt);

	setDirty(false);
}

void dlgRecordEditor::onReset( wxCommandEvent& event )
{
	MyJSONValue record = m_db->GetRecordByName(m_table, m_columns, m_where, m_orderby, m_limit, m_offset);

	for( wxWindowList::Node *node = m_ctrllist.GetFirst(); node; node = node->GetNext() )
	{
		wxWindow* ctrl = (wxWindow*) node->GetData();
		wxString fld = ctrl->GetName();
		fld.Replace(m_ctrlprefix, "", true);
		wxString val = record["ROW0"][fld].AsString();
		val = (val == "null") ? "" : val;
		setValue2(ctrl, val);

	}
	setDirty(false);
}

void dlgRecordEditor::onClose( wxCommandEvent& event )
{
	xClose(*(new wxCloseEvent()));
}

void dlgRecordEditor::init()
{
	wxDialogB::m_buttonSave = m_buttonSave;
	wxDialogB::m_buttonReset = m_buttonReset;
}

// wxDialog ctor compatible
dlgRecordEditor::dlgRecordEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
		: RecordEditor(parent, id, title, pos, size, style)
{
	SetClientData( parent->GetClientData() );
	ClientData* clientData = (ClientData*)GetClientData();
	m_config = clientData->m_config;
	m_db = clientData->m_db;

	init();
}

//int dlgRecordEditor::ShowModal( AppDB* db, wxString table, wxString where )
//{
//	if( !db )
//	{
//		wxString s = __PRETTY_FUNCTION__;
//		m_sb->SetStatusText(s + " NoDB");
//		return RecordEditor::ShowModal();
//	}
//
//	m_db = db;
//	m_table = table;
//	m_columns = "*";
//	m_where = where;
//	m_orderby = "";
//	m_offset = -1;
//	m_limit = 1; // 0 or 1
//
//	collectChildControl(this);
//	onReset(*(new wxCommandEvent()));
//
//	return RecordEditor::ShowModal();
//}

bool dlgRecordEditor::doLayout( wxDialog* dlg )
{
	wxBoxSizer* sz1 = (wxBoxSizer*) dlg->GetSizer();
	wxBoxSizer* sz2 = (wxBoxSizer*) GetSizer();

	sz1->Insert(0, m_panelHeader, 0, wxEXPAND | wxALL, 5);
	//sz2->Add(0, 0, 1, wxEXPAND, 5);
	sz1->Add(m_panelButton, 0, wxEXPAND | wxALL, 5);
	sz1->Add(m_panelFooter, 0, wxEXPAND, 0);

	return RecordEditor::Layout();

}

void dlgRecordEditor::SetTitle( const wxString& title )
{
	m_staticTitle->SetLabel(title);
	RecordEditor::SetTitle(title);
}

