#include "RSDialogNewPatient.h"

RSDialogNewPatient::RSDialogNewPatient( wxWindow* parent )
:
DialogNewPatient( parent )
{
    m_db = (AppDB*) GetParent()->GetClientData();

    cmb_salutation->InitCtrl(m_db, "opt_salutation", "code");
    cmb_religion->InitCtrl(m_db, "opt_religion", "desc");
    cmb_education->InitCtrl(m_db, "opt_education", "desc");
    //cmb_occupation->InitCtrl(m_db, "test_wordlist", "word");
    cmb_marital_status->InitCtrl(m_db, "opt_marital_status", "desc");
    cmb_idcard->InitCtrl(m_db, "opt_idcard", "desc");
    cmb_province->InitCtrl(m_db, "opt_province", "desc", "1", "desc");

    dateBirth->SetValue( wxDateTime::Now() );
    makeAge();
    
    m_stbFldCnt = statusBar->GetFieldsCount();

}

void RSDialogNewPatient::dateBirthOnDateChanged( wxDateEvent& event )
{
    makeAge();
}

void RSDialogNewPatient::buttonSaveOnButtonClick( wxCommandEvent& event )
{

    m_db->ResetColumn();
    
    m_db->AddInput( textName );
    m_db->AddInput( cmb_salutation );
    m_db->AddInput( dateBirth );    
    m_db->AddInput( cmb_religion );
    m_db->AddInput( cmb_education );
    m_db->AddInput( text_occupation );
    m_db->AddInput( cmb_marital_status );
    m_db->AddInput( radioGender );
    m_db->AddInput( cmb_idcard );
    m_db->AddInput( textIDNumber );
    m_db->AddInput( textPhoneNo );
    m_db->AddInput( textAddress );
    m_db->AddInput( textKelurahan );
    m_db->AddInput( textKecamatan );
    m_db->AddInput( textKabupaten );
    m_db->AddInput( cmb_province );
    m_db->AddInput( textAdmissionDate );
    m_db->AddInput( textMedicalRecordNo );

    m_db->InsertOrUpdate2( MYTABLE, m_rcd_id );

}

void RSDialogNewPatient::buttonRegisterOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement buttonRegisterOnButtonClick
}

void RSDialogNewPatient::buttonUpdateOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement buttonUpdateOnButtonClick
}

void RSDialogNewPatient::buttonResetOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement buttonResetOnButtonClick
}

void RSDialogNewPatient::buttonCloseOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement buttorrnCloseOnButtonClick
}


void RSDialogNewPatient::makeAge() 
{
    wxDateTime dtBirth = this->dateBirth->GetValue();
    wxDateSpan dtSpan = ( wxDateTime::Now() ) .DiffAsDateSpan( dtBirth );
    int year = dtSpan.GetYears();
    int month = dtSpan.GetMonths();
    int week = dtSpan.GetWeeks();
    int day = week * dtSpan.GetDays();

    wxString yy = wxString::Format( "%d", year );
    wxString mm = wxString::Format( "%d", month );
    wxString dd = wxString::Format( "%d", day );
    textAgeYear->SetValue( yy );
    textAgeMonth->SetValue( mm );
    textAgeDay->SetValue( dd );

}

void RSDialogNewPatient::Tampil(int rcd_id)
{
    m_rcd_id = rcd_id;
    m_action = ( rcd_id>0 ) ? wxID_EDIT : wxID_ADD;
    
    switch( m_action ) 
    {
        case wxID_ADD:
            m_info1 = "ADD";
            break;
        case wxID_EDIT:
            m_info1 = "EDIT";
            break;
    }
    
    statusBar->SetStatusText( m_info1, m_stbFldCnt-1 );
    ShowModal();
}

