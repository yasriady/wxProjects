#include "dlgFieldEditor.h"

// wxDialog ctor compatible
dlgFieldEditor::dlgFieldEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
		: FieldEditor(parent, id, title, pos, size, style)
{
	SetClientData( parent->GetClientData() );
	ClientData* clientData = (ClientData*)GetClientData();
	m_config = clientData->m_config;
	m_db = clientData->m_db;

	init();
}

dlgFieldEditor::dlgFieldEditor( wxWindow* parent )
		: FieldEditor(parent)
{
	SetClientData( parent->GetClientData() );
	ClientData* clientData = (ClientData*)GetClientData();
	m_config = clientData->m_config;
	m_db = clientData->m_db;

	init();
}

void dlgFieldEditor::xClose( wxCloseEvent& event )
{
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

void dlgFieldEditor::onSave( wxCommandEvent& event )
{
	m_db->execUpdate("BEGIN; ");

	for( wxWindowList::Node *node = m_ctrllist.GetFirst(); node; node = node->GetNext() )
	{
		MyJSONValue rcd;
		wxWindow* ctrl = (wxWindow*) node->GetData();

		wxString key = ctrl->GetName();
		key.Replace(m_ctrlprefix, "", true);

		wxString val = getValue2(ctrl);

		rcd["key"] = key;
		rcd["value"] = val;
		//rcd.Trace();

		wxString where = wxString::Format("key='%s'", key);
		bool keyexist = m_db->IsRcdExist(m_table, where);
		where = !keyexist ? "0" : where;
		m_db->UpdateTable(m_table, rcd, where);
	}

	m_db->execUpdate("COMMIT; ");

	setDirty(false);
}

void dlgFieldEditor::onClose( wxCommandEvent& event )
{
	xClose(*(new wxCloseEvent()));
}

bool dlgFieldEditor::doLayout( wxDialog* dlg )
{
	wxBoxSizer* sz1 = (wxBoxSizer*) dlg->GetSizer();
	wxBoxSizer* sz2 = (wxBoxSizer*) GetSizer();

	sz1->Insert(0, m_panelHeader, 0, wxEXPAND | wxALL, 5);
	sz2->Add(0, 0, 1, wxEXPAND, 5);
	sz1->Add(m_panelButton, 0, wxEXPAND | wxALL, 5);
	sz1->Add(m_panelFooter, 0, wxEXPAND, 0);

	return FieldEditor::Layout();

}

void dlgFieldEditor::onReset( wxCommandEvent& event )
{
	for( wxWindowList::Node *node = m_ctrllist.GetFirst(); node; node = node->GetNext() )
	{
		wxWindow* ctrl = (wxWindow*) node->GetData();
		wxString key = ctrl->GetName();
		key.Replace(m_ctrlprefix, "", true);

		wxString m_where = wxString::Format("%s='%s'", m_key_column, key);
		MyJSONValue rcd = m_db->GetRecordByName(m_table, m_val_column /*m_columns*/, m_where, m_orderby, m_limit, m_offset);

		wxString val = rcd[1][m_val_column/*m_columns*/].AsString();
		val = (val == "null") ? "" : val;
		setValue2(ctrl, val);

	}
	setDirty(false);
}

int dlgFieldEditor::ShowModal( AppDB* db, wxString table, wxString key_column, wxString val_column )
{
	m_db = db;
	m_table = table;
	m_columns = "";
	m_where = "";
	m_orderby = "";
	m_offset = -1;
	m_limit = -1;

	m_key_column = key_column;
	m_val_column = val_column;

	collectChildControl(this);
	onReset(*(new wxCommandEvent()));

	return FieldEditor::ShowModal();
}

void dlgFieldEditor::init()
{
	wxDialogB::m_buttonSave = m_buttonSave;
	wxDialogB::m_buttonReset = m_buttonReset;

	m_key_column = "";
	m_val_column = "";
}

