/*
 * ArtProvider.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: dedy
 */

#include "ArtProvider.h"

ArtProvider::ArtProvider()
{
	wxImage::AddHandler(new wxPNGHandler);
	wxImage::AddHandler(new wxJPEGHandler);
	//wxImage::AddHandler(new wxXPMHandler);
	//wxImage::AddHandler(new wxGIFHandler);
	//wxImage::AddHandler(new wxBMPHandler);
	//wxImage::AddHandler(new wxTIFFHandler);

}

ArtProvider::~ArtProvider()
{
}

wxBitmap ArtProvider::CreateBitmap( const wxArtID& id, const wxArtClient& client, const wxSize& size )
{
	if( client == wxART_TOOLBAR )
		return MakeBitmap(id);

	if( client == wxART_OTHER )
		return MakeBitmap_Other(id);

	return wxNullBitmap;

}

