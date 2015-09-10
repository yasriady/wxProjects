/******************************************************************************

   main.h

    macros and defines for test application
    Copyleft (C) 2007  Luciano Cattani

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*****************************************************************************/

#if !defined( wxJSON_MAIN_H )
#define wxJSON_MAIN_H

#define ASSERT( cond )  wxASSERT( cond );

//  global data
extern int		gs_argc;
extern char*	gs_argv[];


// printf functions in 'main.cpp'
extern void TestCout( const wxChar* str );
extern void TestCout( wxChar ch, bool lf = true );
extern void TestCout( const wxString& str );
extern void TestCout( int i, bool lf = false );
extern void TestCout( bool b, bool lf = false );
extern void TestCout( unsigned ui, bool lf = false );
extern void TestCout( long int l, bool lf = false );
extern void TestCout( unsigned long int ul, bool lf = false );
extern void TestCout( double d, bool lf = false );

// functions for printing values and parser error array
extern void PrintErrors( wxJSONReader& reader );
extern void PrintValue( wxJSONValue& val, wxJSONReader* reader = 0 );


#if defined( wxJSON_64BIT_INT )
extern void TestCout( wxInt64 i64, bool lf = false );
extern void TestCout( wxUint64 ui64, bool lf = false );
#endif

#endif            // not defined wxJSON_MAIN_H


/*
{
}
*/



