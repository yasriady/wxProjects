/*
 * ArtProvider.h
 *
 *  Created on: Jan 9, 2015
 *      Author: dedy
 */

#ifndef ARTPROVIDER_H_
#define ARTPROVIDER_H_

//#include <wx/artprov.h>
#include "classes/iTOOLBAR.h"

class ArtProvider : public wxArtProvider
{
public:
	ArtProvider();
	virtual ~ArtProvider();

protected:
	virtual wxBitmap CreateBitmap( const wxArtID& id, const wxArtClient& client, const wxSize& size );

};

#endif /* ARTPROVIDER_H_ */
