#include <QDebug>
#include "camerasettingswidget.h"
#include "captureopencv.h"

#include <fstream>

void CameraSettingsWidget::CreateSingleSlider( QSlider ** slider, int minimumValue, int maximumValue, int currentValue )
{
    (*slider) = new QSlider(Qt::Horizontal);
    (*slider)->setMinimum(minimumValue);
    (*slider)->setMaximum(maximumValue);
    (*slider)->setValue(currentValue);
}

void CameraSettingsWidget::ConnectSlidersToHandlers()
{
    connect(imageHueSlider, SIGNAL(valueChanged(int)), this, SLOT(image_hue_slider_changed(int)));
    connect(imageSaturationSlider, SIGNAL(valueChanged(int)), this, SLOT(image_saturation_slider_changed(int)));
    connect(imageGainSlider, SIGNAL(valueChanged(int)), this, SLOT(image_gain_slider_changed(int)));
    connect(imageBrightnessSlider, SIGNAL(valueChanged(int)), this, SLOT(image_brightness_slider_changed(int)));
    connect(imageContrastSlider, SIGNAL(valueChanged(int)), this, SLOT(image_contrast_slider_changed(int)));
    connect(imageExposureSlider, SIGNAL(valueChanged(int)), this, SLOT(image_exposure_slider_changed(int)));
}

void CameraSettingsWidget::AddSliderToGridLayout(
        QGridLayout * gridLayout,
        QSlider ** slider,
        const char * name,
        int minimumValue,
        int maximumValue,
        int currentValue )
{
    static int currentRow;

    char buffer[0x100];

    char i = 0;

    while( buffer[i] = name[i] )
    {
        i++;
    }

    buffer[i] = ' ';
    buffer[i+1] = 0;

    QLabel * labelDescription = new QLabel(buffer);

    sprintf( buffer, "%d ", minimumValue );

    QLabel * labelMin = new QLabel(buffer);

    sprintf( buffer, " %d", maximumValue );

    QLabel * labelMax = new QLabel(buffer);

    CreateSingleSlider( slider, minimumValue, maximumValue, currentValue );

    gridLayout->addWidget( labelDescription, currentRow, 0 );
    gridLayout->addWidget( labelMin, currentRow, 1 );
    gridLayout->addWidget( (*slider), currentRow, 2 );
    gridLayout->addWidget( labelMax, currentRow, 3 );

    currentRow++;
}

void CameraSettingsWidget::CreateSliders(  )
{
    QGridLayout * gridLayout = new QGridLayout();

    AddSliderToGridLayout( gridLayout, &imageHueSlider, "Hue", -2000, 2000, -21 ); // was 0 360
    AddSliderToGridLayout( gridLayout, &imageSaturationSlider, "Saturation", 0, 100, 100 ); // was 0 100
    AddSliderToGridLayout( gridLayout, &imageGainSlider, "Gain", 1, 65535, 1 ); // was 0 65535 Gain doesn't seem to work yet
    AddSliderToGridLayout( gridLayout, &imageBrightnessSlider, "Brightness", -70, 70, 0 ); // was -128 128
    AddSliderToGridLayout( gridLayout, &imageContrastSlider, "Contrast", 0, 100, 30 ); // was 0 100
    AddSliderToGridLayout( gridLayout, &imageExposureSlider, "Exposure", 1, 7, 2 ); // was 0 100 Neither does exposure

    btnSaveSettings = new QPushButton(tr("Save Settings"));
    btnLoadSettings = new QPushButton(tr("Load Settings"));

    connect( btnSaveSettings, SIGNAL( clicked()), SLOT( save_settings() ) );
    connect( btnLoadSettings, SIGNAL( clicked()), SLOT( load_settings() ) );

    gridLayout->addWidget( btnSaveSettings, 6, 0, 1, 4 );
    gridLayout->addWidget( btnLoadSettings, 7, 0, 1, 4 );

    this->setLayout( gridLayout );
}

CameraSettingsWidget::CameraSettingsWidget(CameraParameters &cameraParams, CaptureOpenCv * capOpenCv, const char * fileName) :
    camera_parameters(cameraParams), assignedCaptureOpenCv(capOpenCv), fileName(fileName)
{
    CreateSliders();

    ConnectSlidersToHandlers();

    camSettingsParams = (void*) (new unsigned char[sizeof(int) + sizeof(double)]);
}

void CameraSettingsWidget::packCamSettingsParams( int id, double value )
{
    *((int*)(camSettingsParams)) = id;
    *((double*)(((unsigned char*)(camSettingsParams))+sizeof(int))) = value;
}

void CameraSettingsWidget::image_brightness_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_BRIGHTNESS, (double)val);
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::image_contrast_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_CONTRAST, (double)val);
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::image_hue_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_HUE, (double)val);
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::image_saturation_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_SATURATION, (double)val);
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::image_gain_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_GAIN, 1.0/(double)val);
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::image_exposure_slider_changed(int val)
{
    packCamSettingsParams(CV_CAP_PROP_EXPOSURE, ((double)(val)));
    assignedCaptureOpenCv->loadCapturingSettings(camSettingsParams);
}

void CameraSettingsWidget::save_settings()
{
    std::ofstream file;
    file.open( fileName, std::ofstream::trunc | std::ofstream::binary );

    int hue = 0, saturation = 0, contrast = 0, gain = 0, brightness = 0, exposure = 0;

    hue = imageHueSlider->value();
    saturation = imageSaturationSlider->value();
    brightness = imageBrightnessSlider->value();
    contrast = imageContrastSlider->value();
    gain = imageGainSlider->value();
    exposure = imageExposureSlider->value();

    file.write( (char *)&hue, sizeof( int ) );
    file.write( (char *)&saturation, sizeof( int ) );
    file.write( (char *)&brightness, sizeof( int ) );
    file.write( (char *)&contrast, sizeof( int ) );
    file.write( (char *)&gain, sizeof( int ) );
    file.write( (char *)&exposure, sizeof( int ) );

    file.close();
}

void CameraSettingsWidget::load_settings()
{
    std::ifstream file;
    file.open( fileName, std::ifstream::binary );

    int hue = 0, saturation = 0, contrast = 0, gain = 0, brightness = 0, exposure = 0;

    file.read( (char *)&hue, sizeof( int ) );
    file.read( (char *)&saturation, sizeof( int ) );
    file.read( (char *)&brightness, sizeof( int ) );
    file.read( (char *)&contrast, sizeof( int ) );
    file.read( (char *)&gain, sizeof( int ) );
    file.read( (char *)&exposure, sizeof( int ) );

    imageHueSlider->setValue(hue);
    imageSaturationSlider->setValue(saturation);
    imageBrightnessSlider->setValue(brightness);
    imageContrastSlider->setValue(contrast);
    imageGainSlider->setValue(gain);
    imageExposureSlider->setValue(exposure);

    file.close();
}

CameraSettingsWidget::~CameraSettingsWidget()
{
    delete camSettingsParams;
}
