#pragma once

#ifndef CAMERASETTINGSWIDGET_H
#define CAMERASETTINGSWIDGET_H

#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QBoxLayout>
#include <QListWidget>
#include "camera_calibration.h"

#include "captureopencv.h"
#include "camerasettingskeeper.h"
//#include "plugin_camerasettings.h"

class CameraSettingsWidget : public QWidget
{
Q_OBJECT

private:
    void CreateSingleSlider( QSlider ** slider, int minimumValue, int maximumValue, int currentValue );
    void CreateSliders();

    void ConnectSlidersToHandlers();

    void AddSliderToGridLayout(
            QGridLayout * gridLayout,
            QSlider ** slider,
            const char * name,
            int minimumValue,
            int maximumValue ,
            int currentValue );

    void SetLayoutWithWidgets();

public:
    CameraParameters& camera_parameters;
    //CameraSettingsKeeper * cameraSettings;
    CaptureOpenCv * assignedCaptureOpenCv;

    void packCamSettingsParams( int id, double value );
    void * camSettingsParams;

    const char * fileName;

    CameraSettingsWidget(CameraParameters &cameraParams, CaptureOpenCv * captureOpenCv, const char * fileName);
    ~CameraSettingsWidget();

protected:
    QVBoxLayout  * vbox;
    QLabel      * label;

    QSlider * imageHueSlider;
    QSlider * imageSaturationSlider;
    QSlider * imageGainSlider;
    QSlider * imageBrightnessSlider;
    QSlider * imageContrastSlider;
    QSlider * imageExposureSlider;

    QPushButton * btnSaveSettings;
    QPushButton * btnLoadSettings;

public slots:
    void image_brightness_slider_changed(int val);
    void image_contrast_slider_changed(int val);
    void image_hue_slider_changed(int val);
    void image_saturation_slider_changed(int val);
    void image_gain_slider_changed(int val);
    void image_exposure_slider_changed(int val);

    void save_settings();
    void load_settings();
};

#endif // CAMERASETTINGSWIDGET_H
