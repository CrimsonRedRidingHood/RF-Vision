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
  \file    plugin_camerasettings.cpp
  \brief   C++ Implementation: plugin_camerasettings
  \author  KKastaneda, 2016
*/
//========================================================================

#include <QDebug>
#include "plugin_camerasettings.h"

PluginCameraSettings::PluginCameraSettings( FrameBuffer * _buffer,
                                            CameraParameters& camera_params
                                            ) :
    VisionPlugin(_buffer), camera_parameters(camera_params), camSettingsWidget(0)
{
    qDebug() << "PluginCameraSettings constructor called";
    settings = new VarList( "CameraSettings Settings" );
}

PluginCameraSettings::~PluginCameraSettings()
{
}

VarList * PluginCameraSettings::getSettings() {
  return settings;
}

string PluginCameraSettings::getName() {
  return "Camera Settings";
}

QWidget * PluginCameraSettings::getControlWidget()
{
    if (camSettingsWidget==0)
      camSettingsWidget = new CameraSettingsWidget(camera_parameters);

    return (QWidget *)camSettingsWidget;
}
