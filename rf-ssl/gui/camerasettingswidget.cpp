#include <QDebug>
#include "camerasettingswidget.h"

CameraSettingsWidget::CameraSettingsWidget(CameraParameters &campar) :
    camera_parameters(campar)
{
    qDebug() << "CameraSettingsWidget constructor called";
}

CameraSettingsWidget::~CameraSettingsWidget()
{

}
