#pragma once

#include <opencv/highgui.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "captureinterface.h"

#include "camerasettingskeeper.h"

class CaptureOpenCv : public CaptureInterface
{
public:
    CaptureOpenCv(CameraSettingsKeeper * camSettings, VarList * _settings=0);
    virtual ~CaptureOpenCv();

    virtual RawImage getFrame();
    virtual bool isCapturing();
    virtual void releaseFrame();
    virtual bool startCapture();
    virtual bool stopCapture();
    virtual string getCaptureMethodName() const;

public slots:
    virtual void loadCapturingSettings( void * params );

private:
    void loadSettingsFromKeeper();

    cv::VideoCapture mCapture;
    VarList *mCaptureSettings;
    VarString *mIndex;
    QMutex mutex;

    CameraSettingsKeeper * cameraSettings;
};
