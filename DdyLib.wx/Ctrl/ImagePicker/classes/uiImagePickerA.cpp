#include "uiImagePickerA.h"

uiImagePickerA::uiImagePickerA( wxWindow* parent )
:
ImagePickerA( parent )
{

}

void uiImagePickerA::m_textLabelOnText( wxCommandEvent& event )
{
	GetEventHandler()->ProcessEvent(event);
}

void uiImagePickerA::onBrowse( wxCommandEvent& event )
{
wxFileDialog dlg(this, "Select image file", "", "",
"Image file (*.png, *.jpg, *.jpeg, *.gif, *.bmp)|*.png;*.jpg;*.jpeg;*.gif;*.bmp",
wxFD_OPEN | wxFD_FILE_MUST_EXIST);
if (dlg.ShowModal() == wxID_CANCEL)
return;
m_oldfilename = GetLabel();
//m_newfile = true;
wxFileName f(dlg.GetPath());
m_filename = f.GetFullName(); // without dir
m_dir = f.GetPath(wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);	// dir only
SetLabel(m_filename);

}

void uiImagePickerA::onClear( wxCommandEvent& event )
{
//clearImage();
SetLabel("");
}

#include "uiImagePickerA.h"

// wxPanel compatible ctor
uiImagePickerA::uiImagePickerA(wxWindow* parent, wxWindowID winid,
		const wxPoint& pos, const wxSize& size, long style,
		const wxString& name) :
		ImagePickerA(parent, winid, pos, size, style, name)
{
	SetLabel("");
}

wxString uiImagePickerA::GetLabel() const
{

	// when do save
	if (m_dir != DATADIR)
	{
		wxString fromfile = m_dir + m_filename;
		wxString tofile = DATADIR+ m_filename;
		wxCopyFile(fromfile, tofile);
		wxString of = DATADIR + m_oldfilename;
		if (wxFileExists(of)) wxRemoveFile(of);
	}
	return ImagePickerA::GetLabel();
}

void uiImagePickerA::SetLabel(const wxString& label)
{
	// open

//	Image::SetLabel(label);
//	m_textLabel->SetValue(label);
	m_filename = label;
	m_staticLabel->Show(false);
	wxString newlabel = label;

	if (label == "")
	{
		m_filename = NOIMAGE;
		m_dir = DATADIR;
	}

	if (!wxFileExists(m_dir + m_filename))
	{
		newlabel = "";
		m_filename = NOIMAGE;
		m_dir = DATADIR;
	}

//	// Ddy: 150308, if NOIMAGE (default one) file is not exist
//	if (m_filename == NOIMAGE && !wxFileExists(m_dir + m_filename)) {
//		m_staticLabel->Show(true);
//	} else {
//		setImage(m_dir + m_filename);
//	}

	m_staticText1->SetLabel("label: " + label);
	m_staticText2->SetLabel("m_filename: " + m_filename);
	m_staticText3->SetLabel("m_dir: " + m_dir);

	m_textLabel->SetValue(newlabel);
	ImagePickerA::SetLabel(newlabel);

	setImage(m_dir + m_filename);
}

void uiImagePickerA::setImage2(wxString filename)
{

}

void uiImagePickerA::setImage(wxString filename)	// filename=> file+dir
{
	wxImage myimg;

	if (filename == ( DATADIR+ NOIMAGE ) )
	{	//noimage
		wxBitmap mybmp;// = wxBITMAP_PNG_FROM_DATA(noimage1); // Ddy: sama dengan statement dibawah ini
		//mybmp = wxBitmap::NewFromPNGData( noimage1_png, sizeof(noimage1_png));
		mybmp = wxBITMAP_PNG_FROM_DATA(No_Image_Available);
		myimg = mybmp.ConvertToImage();
	}
	else
	{
		myimg = wxImage(filename);
	}

	if( !myimg.IsOk() ) {
		wxBitmap mybmp = wxBITMAP_PNG_FROM_DATA(badimage1);
		myimg = mybmp.ConvertToImage();
	}

	double sw = (double) myimg.GetWidth();
	double sh = (double) myimg.GetHeight();
	double dw = (double) m_bitmap->GetSize().GetWidth();
	double dh = (double) m_bitmap->GetSize().GetHeight();

	double scale;
	scale = (sw < sh) ? (dw / sw) : (dh / sh);
	double new_width = sw * scale;
	double new_height = sh * scale;
	myimg = myimg.Scale((int) new_width, (int) new_height,
			wxIMAGE_QUALITY_NORMAL);
	m_bitmap->SetBitmap(myimg);

	m_panel2->Layout();
	//m_panel2->GetSizer()->Layout();	// Ddy: method ini menyebabkan crash Assertion

}

