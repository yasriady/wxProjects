#include "CtrlImage.h"

CtrlImage::CtrlImage( wxWindow* parent )
		: Image(parent)
{

}

void CtrlImage::m_textLabelOnText( wxCommandEvent& event )
{
//GetEventHandler()
//GetEventHandler()->ProcessPendingEvents();
	GetEventHandler()->ProcessEvent(event);
}

void CtrlImage::m_toolBrowseOnToolClicked( wxCommandEvent& event )
{

	wxFileDialog dlg(this, "Select image file", "", "", "Image file (*.png, *.jpg, *.jpeg, *.gif, *.bmp)|*.png;*.jpg;*.jpeg;*.gif;*.bmp", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
	if( dlg.ShowModal() == wxID_CANCEL )
		return;
	m_oldfilename = GetLabel();
	//m_newfile = true;
	wxFileName f(dlg.GetPath());
	m_filename = f.GetFullName(); // without dir
	m_dir = f.GetPath(wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);	// dir only
	SetLabel(m_filename);
}

void CtrlImage::m_toolClearOnToolClicked( wxCommandEvent& event )
{
	this->clearImage();
}

void CtrlImage::setImage( wxString filename )
{
	// filename= file+dir
	wxImage myimg = wxImage(filename);
	double sw = (double) myimg.GetWidth();
	double sh = (double) myimg.GetHeight();
	double dw = (double) m_bitmap->GetSize().GetWidth();
	double dh = (double) m_bitmap->GetSize().GetHeight();

	double scale;
	scale = (sw > sh) ? (dw / sw) : (dh / sh);
	double new_width = sw * scale;
	double new_height = sh * scale;
	myimg = myimg.Scale((int) new_width, (int) new_height, wxIMAGE_QUALITY_NORMAL);
	m_bitmap->SetBitmap(myimg);
}

wxString CtrlImage::GetLabel() const
{

	// when do save
	if( m_dir != DATADIR)
	{
		wxString fromfile = m_dir + m_filename;
		wxString tofile = DATADIR+ m_filename;
		wxCopyFile(fromfile, tofile);
		wxString of = DATADIR + m_oldfilename;
		if (wxFileExists(of)) wxRemoveFile(of);
	}
	return Image::GetLabel();
}

void CtrlImage::SetLabel( const wxString& label )
{
	// open

//	Image::SetLabel(label);
//	m_textLabel->SetValue(label);
	m_filename = label;
	m_staticLabel->Show(false);
	wxString newlabel = label;

	if( label == "" )
	{
		m_filename = NOIMAGE;
		m_dir = DATADIR;
	}

	if( !wxFileExists(m_dir + m_filename) )
	{
		newlabel = "";
		m_filename = NOIMAGE;
		m_dir = DATADIR;
	}

	if( m_filename == NOIMAGE && !wxFileExists(m_dir + m_filename) )
	{
		m_staticLabel->Show(true);
	} else
	{
		setImage(m_dir + m_filename);
	}

	m_staticText1->SetLabel("label: " + label);
	m_staticText2->SetLabel("m_filename: " + m_filename);
	m_staticText3->SetLabel("m_dir: " + m_dir);

	m_textLabel->SetValue(newlabel);
	Image::SetLabel(newlabel);
}

void CtrlImage::clearImage()
{
	SetLabel("");
}

CtrlImage::CtrlImage( wxWindow* parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
		: Image(parent, winid, pos, size, style, name)
{

	//m_newfile = false;
	m_dir = DATADIR;
	m_filename = "";
	if (!wxDirExists(m_dir)) wxMkdir(m_dir);
}

