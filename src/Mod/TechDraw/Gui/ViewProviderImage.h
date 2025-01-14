/***************************************************************************
 *   Copyright (c) 2016 WandererFan <wandererfan@gmail.com>                *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef DRAWINGGUI_VIEWPROVIDERIMAGE_H
#define DRAWINGGUI_VIEWPROVIDERIMAGE_H

#include <Mod/TechDraw/App/DrawViewImage.h>

#include "ViewProviderDrawingView.h"


namespace TechDrawGui {


class TechDrawGuiExport ViewProviderImage : public ViewProviderDrawingView
{
    PROPERTY_HEADER(TechDrawGui::ViewProviderImage);

public:
    /// constructor
    ViewProviderImage();
    /// destructor
    virtual ~ViewProviderImage();

    App::PropertyBool  Crop;              //crop to feature width x height

    virtual bool useNewSelectionModel(void) const {return false;}
    /// returns a list of all possible modes
    virtual void updateData(const App::Property*);
    virtual void onChanged(const App::Property *prop);

    virtual TechDraw::DrawViewImage* getViewObject() const;
};


} // namespace TechDrawGui


#endif // DRAWINGGUI_VIEWPROVIDERIMAGE_H
