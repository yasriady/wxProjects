#include "dlgRecordManager.h"

dlgRecordManager::dlgRecordManager(wxWindow* parent) :
		RecordManager(parent)
{
	wxMessageBox(__FUNCTION__, "Do not used this!!");
}

void dlgRecordManager::xClose(wxCloseEvent& event) {
	saveLayout(this);
	int ans = wxMessageBox(_("Close ?"), _("Caption"), wxYES_NO);
	if (ans == wxYES)
		EndModal(wxCLOSE);
}

void dlgRecordManager::onAdd(wxCommandEvent& event) {
	//m_where = "0";
	//m_editorForm->ShowModal(m_db, m_table, m_where);
	showFormAdd(m_editorForm);
}

void dlgRecordManager::onEdit(wxCommandEvent& event) {
	//m_where = m_dvCtrl->MakeWhereFromSelected();
	//m_editorForm->ShowModal(m_db, m_table, m_where);
}

void dlgRecordManager::onDelete(wxCommandEvent& event) {
	event.SetClientData((void*) wxNO);
	if (m_dvCtrl->DeleteRow() > 0) {
		event.SetClientData((void*) wxYES); //return result status as void* clientData: wxYES or wxNO
	}

}

void dlgRecordManager::onRefresh(wxCommandEvent& event) {
	m_dvCtrl->Reset();
}

void dlgRecordManager::onClose(wxCommandEvent& event) {
	xClose(*(new wxCloseEvent()));
}

void dlgRecordManager::onDataViewCtrlSelectionChanged(wxDataViewEvent& event) {
// TODO: Ddy: Implement on DERIVED CLASS
}

// Ddy: Biarkan dibawah supaya tidak diHAPUS oleh wxFormBuilder
wxDEFINE_EVENT(wxRECORD_CHANGED, wxCommandEvent);
wxDEFINE_EVENT(wxRECORD_APPENDED, wxCommandEvent);
wxBEGIN_EVENT_TABLE( dlgRecordManager, RecordManager ) EVT_COMMAND( wxID_ANY, wxRECORD_CHANGED, dlgRecordManager::onRecordChanged )
EVT_COMMAND( wxID_ANY, wxRECORD_APPENDED, dlgRecordManager::onRecordAppended)
wxEND_EVENT_TABLE()

// wxDialog ctor compatible
dlgRecordManager::dlgRecordManager(wxWindow* parent, wxWindowID id,
		const wxString& title, const wxPoint& pos, const wxSize& size,
		long style, const wxString& name) :
		RecordManager(parent, id, title, pos, size, style) {

	SetClientData( parent->GetClientData() );
	ClientData* clientData = (ClientData*)GetClientData();
	m_config = clientData->m_config;
	m_db = clientData->m_db;

	m_editorForm = new dlgRecordEditor(this);

}

//void dlgRecordManager::onInitDialog(wxInitDialogEvent& event) {
//	loadLayout(this);
//}

void dlgRecordManager::showFormEdit(dlgRecordEditor* form, wxString title) {
//	wxString where = m_dvCtrl->MakeWhereFromSelected();
//	form->SetTitle(title);
//	form->ShowModal(m_db, m_table, where);
}

// Ddy: to modified selected record
void dlgRecordManager::x_doModified(dlgRecordEditor* form, wxString where) {
	//form->ShowModal(m_db, m_table, where);
}

void dlgRecordManager::showFormAdd(dlgRecordEditor* form, wxString title) {
	wxString where = "0";
	form->SetTitle(title);
	//form->ShowModal(m_db, m_table, where);
	form->ShowModal();
}

//int dlgRecordManager::showMe( AppDB* db, wxString table, wxString columns, wxString where, wxString orderby, int limit, int offset )
//
//{
//	//InitQueryData(new QueryData(db, table, columns, where, orderby, limit, offset));
//	//m_dvCtrl->InitCtrl(new QueryData(db, table, columns, where, orderby, limit, offset));
//	return RecordManager::ShowModal();
//
//}

void dlgRecordManager::onRecordChanged(wxCommandEvent& event) {
	wxLogMessage (__PRETTY_FUNCTION__);
	m_dvCtrl->RowChanged();
}

void dlgRecordManager::onRecordAppended(wxCommandEvent& event) {
	wxLogMessage (__PRETTY_FUNCTION__);
	m_dvCtrl->RowAppended();
}

