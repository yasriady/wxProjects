/*
 * ImagePicker.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: dedy
 */

#include "ImagePicker.h"

// wxPanel compatible ctor
ImagePicker::ImagePicker( wxWindow* parent, wxWindowID winid, const wxPoint& pos, const wxSize& size, long style, const wxString& name )
: uiImagePickerA( parent, winid, pos, size, style, name )
{
}

//ImagePicker::ImagePicker( wxWindow* parent )
//: uiImagePickerA(parent)
//{ }

ImagePicker::~ImagePicker()
{
	// TODO Auto-generated destructor stub
}

