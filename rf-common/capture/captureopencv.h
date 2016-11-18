#pragma once

#include <opencv/highgui.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "captureinterface.h"

class CaptureOpenCv : public CaptureInterface
{
public:
    CaptureOpenCv(VarList * _settings=0);
    virtual ~CaptureOpenCv();

    virtual RawImage getFrame();
    virtual bool isCapturing();
    virtual void releaseFrame();
    virtual bool startCapture();
    virtual bool stopCapture();
    virtual string getCaptureMethodName() const;

private:
    cv::VideoCapture mCapture;
    VarList *mCaptureSettings;
    VarString *mIndex;
    QMutex mutex;
};
