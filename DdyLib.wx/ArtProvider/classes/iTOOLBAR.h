/*
 * iTOOLBAR.h
 *
 *  Created on: Jan 8, 2015
 *      Author: dedy
 */

#ifndef ITOOLBAR_H_
#define ITOOLBAR_H_

//#include "/mnt/HDD2T_P2/images/fatcow_cpp/icon_png24x24.h"
#include "fatcow/icon_png16x16.h"
#include "ToolbarIcons/icon_png16x16.h"
#include "open_icon_library-standard/icon_png16x16.h"
#include "image_1/noimage_png.h"

//#include <wx/gdicmn.h>
//#include <wx/imagpng.h>
//#include <wx/bitmap.h>
#include <wx/artprov.h>
#include <wx/gdicmn.h>

//#define b				wxBITMAP_PNG_FROM_DATA

inline wxBitmap MakeBitmap(const wxArtID& id)
{
	wxBitmap bmp = wxNullBitmap;

	// Application toolbar
	if( id == "select" ) 	bmp = wxBITMAP_PNG_FROM_DATA( select );
	if( id == "add" ) 		bmp = wxBITMAP_PNG_FROM_DATA( add );	// Ddy: add is similar to add_png
	if( id == "edit" ) 		bmp = wxBITMAP_PNG_FROM_DATA( application_form_edit );
	if( id == "del" ) 		bmp = wxBITMAP_PNG_FROM_DATA( cell_delete );
	if( id == "delete" )	bmp = wxBITMAP_PNG_FROM_DATA( cell_delete );
	if( id == "refresh" ) 	bmp = wxBITMAP_PNG_FROM_DATA( arrow_refresh );
	if( id == "sort" ) 		bmp = wxBITMAP_PNG_FROM_DATA( sort_asc_az );
	if( id == "print" ) 	bmp = wxBITMAP_PNG_FROM_DATA( printer_color );
	if( id == "close" ) 	bmp = wxBITMAP_PNG_FROM_DATA( cross );

	// Ribbon
	if( id == "login" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "level" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "password" )	bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "logout" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "item" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "service" )	bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "customer" )	bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "employee" )	bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "category" )	bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "supplier" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "cash" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "cost" )		bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "test1" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "test2" )		bmp = wxBITMAP_PNG_FROM_DATA( button );
	if( id == "barcode" )	bmp = wxBITMAP_PNG_FROM_DATA( barcode );//

	// Log
	if( id == "clear_log" )	bmp = wxBITMAP_PNG_FROM_DATA( draw_eraser );	//
	if( id == "about_log" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//

	// Billing
	if( id == "client" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "status" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "log" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//

	if( id == "chat" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "logout" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "restart" )	bmp = wxBITMAP_PNG_FROM_DATA( restart_services );	//
	if( id == "shutdown" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "relocate" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "edit" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "open" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "close" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//

	if( id == "add" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "edit" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "del" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "default")bmp = wxBITMAP_PNG_FROM_DATA( button );	//

	if( id == "more" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "menu" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "chat" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "finish" )	bmp = wxBITMAP_PNG_FROM_DATA( button );	//
	if( id == "about")bmp = wxBITMAP_PNG_FROM_DATA( button );	//

	if( id == "client")bmp = wxBITMAP_PNG_FROM_DATA( computer_desktop );	//
	if( id == "server")bmp = wxBITMAP_PNG_FROM_DATA( server );	//

	if( id == "server_started")bmp = wxBITMAP_PNG_FROM_DATA( lightbulb );	//
	if( id == "server_stopped")bmp = wxBITMAP_PNG_FROM_DATA( lightbulb_off );	//
	if( id == "server_started2")bmp = wxBITMAP_PNG_FROM_DATA( user_online );	//
	if( id == "server_stopped2")bmp = wxBITMAP_PNG_FROM_DATA( stop );	//


	return bmp;
}

inline wxBitmap MakeBitmap_Other(const wxArtID& id)
{
	wxBitmap bmp = wxNullBitmap;

	if( id == "noimage" ) 	bmp = wxBITMAP_PNG_FROM_DATA( noimage );

	return bmp;
}


#endif /* ITOOLBAR_H_ */
