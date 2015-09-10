#include "uiComboPanelA.h"

uiComboPanelA::uiComboPanelA( wxWindow* parent )
:
ComboPanelA( parent )
{

}

void uiComboPanelA::onAdd( wxCommandEvent& event )
{
// TODO: Implement onAdd
}

uiComboPanelA::uiComboPanelA( wxWindow* parent, wxWindowID id, const wxString& value, const wxPoint& pos, const wxSize& size, int n, const wxString choices[], long style, const wxValidator& validator, const wxString& name )
: ComboPanelA(parent, id, pos, size, style, name)
{
}
