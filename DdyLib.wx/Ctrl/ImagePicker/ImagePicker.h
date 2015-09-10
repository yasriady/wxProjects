/*
 * ImagePicker.h
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#ifndef IMAGEPICKER_H_
#define IMAGEPICKER_H_

#include "classes/uiImagePickerA.h"

class ImagePicker : public uiImagePickerA
{
public:

	//ImagePicker( wxWindow* parent );
	virtual ~ImagePicker();

	// wxPanel compatible ctor
	ImagePicker(wxWindow *parent,
            wxWindowID winid = wxID_ANY,
            const wxPoint& pos = wxDefaultPosition,
            const wxSize& size = wxDefaultSize,
            long style = wxTAB_TRAVERSAL | wxNO_BORDER,
            const wxString& name = wxPanelNameStr);

};

#endif /* IMAGEPICKER_H_ */
