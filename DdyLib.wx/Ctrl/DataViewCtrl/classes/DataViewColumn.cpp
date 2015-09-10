/*
 * DataViewColumn.cpp
 *
 *  Created on: Feb 20, 2015
 *      Author: dedy
 */

#include "DataViewColumn.h"

//DataViewColumn::DataViewColumn() {}

DataViewColumn::~DataViewColumn()
{
}

DataViewColumn::DataViewColumn( const wxString& title, wxDataViewRenderer* renderer, unsigned int model_column, int width, wxAlignment align, int flags )
: wxDataViewColumn(title, renderer, model_column, width, align, flags)
{
}

DataViewColumn::DataViewColumn( const wxBitmap& bitmap, wxDataViewRenderer* renderer, unsigned int model_column, int width, wxAlignment align, int flags )
: wxDataViewColumn( bitmap, renderer, model_column, width, align, flags )
{
}

