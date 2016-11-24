//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
  \file    plugin_camerasettings.h
  \brief   C++ Interface: plugin_camerasettings
  \author  KKastaneda, 2016
*/
//========================================================================
#pragma once

#ifndef PLUGIN_CAMERASETTINGS_H
#define PLUGIN_CAMERASETTINGS_H

#include <QWidget>
#include <QSlider>
#include <QLabel>

#include "framedata.h"
#include "VarTypes.h"
#include "visionplugin.h"
#include "camera_calibration.h"
#include "camerasettingswidget.h"

class PluginCameraSettings : public VisionPlugin
{
protected:
    VarList* settings;
    VarList* camera_settings;
    VarList* calibration_settings;

    CameraSettingsWidget * camSettingsWidget;

public:
    CameraParameters& camera_parameters;

    PluginCameraSettings( FrameBuffer * _buffer,
                          CameraParameters& camera_params );
    ~PluginCameraSettings();

    virtual VarList * getSettings();

    virtual string getName();

    virtual QWidget * getControlWidget();
};

#endif // PLUGIN_CAMERASETTINGS_H
