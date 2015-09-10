#include "uiLoggerA.h"

uiLoggerA::uiLoggerA( wxWindow* parent )
		: LoggerA(parent)
{
	// Ddy: this logger should be initiated on constructor
	wxLogTextCtrl *m_pLog = new wxLogTextCtrl(m_textLog);
	delete wxLog::SetActiveTarget(m_pLog);

	m_isShown = m_config->GetBool("Logger", "Show", true);	// Ddy: can be save into config file
	Show(m_isShown);

	//loadLayout(this);

}

void uiLoggerA::m_toolClearOnToolClicked( wxCommandEvent& event )
{
	m_textLog->Clear();
}

void uiLoggerA::m_toolHideOnToolClicked( wxCommandEvent& event )
{
	Show(false);
}

void uiLoggerA::m_toolAboutOnToolClicked( wxCommandEvent& event )
{
	wxMozillaLikeAboutBoxDialog *dlg = new wxMozillaLikeAboutBoxDialog(GetParent());
	dlg->ShowModal();
	dlg->Destroy();
}

void uiLoggerA::ToggleVisible()
{
	Show(!m_isShown);

	GetContainingSizer()->Layout();

	GetParent()->Layout();
	//GetParent()->Refresh();

	//GetContainingSizer()->Layout();
	//GetContainingSizer()->RecalcSizes();
	//GetGrandParent()->Layout();

}
