#include "RSMainFrame.h"

RSMainFrame::RSMainFrame(wxWindow* parent)
:
MainFrame(parent) {

    m_db = new AppDB("", "", "dbname.sqlite", "", "");
    SetClientData(m_db);
}

void RSMainFrame::menuPendaftaranPasienOnMenuSelection(wxCommandEvent& event) {
    RSDialogNewPatient *dlg = new RSDialogNewPatient(this);
    dlg->Tampil(0);
}

void RSMainFrame::m_button6OnButtonClick(wxCommandEvent& event) {
    // TODO: Implement m_button6OnButtonClick
}
