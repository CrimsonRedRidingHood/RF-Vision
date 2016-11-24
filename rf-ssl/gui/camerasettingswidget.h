#pragma once

#ifndef CAMERASETTINGSWIDGET_H
#define CAMERASETTINGSWIDGET_H

#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QBoxLayout>
#include <QListWidget>
#include "camera_calibration.h"

class CameraSettingsWidget : public QWidget
{
Q_OBJECT
protected:
    QBoxLayout  * vbox;
    QBoxLayout  * hbox;
    QListWidget * list;
    QLabel      * label;
public:
    CameraParameters& camera_parameters;

    CameraSettingsWidget(CameraParameters &campar);
    ~CameraSettingsWidget();
};

#endif // CAMERASETTINGSWIDGET_H
