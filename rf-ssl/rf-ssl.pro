#This is the main project file to build the vision server/gui

#read the global configuration file
include( ../config.pro.inc )
QMAKE_LFLAGS += /NODEFAULTLIB:atlthunk

#where to place built objects
OBJECTS_DIR = ../build/rf-ssl/obj$${SUFFIX_STR}

#where to place temporary moc sources
MOC_DIR = ../build/rf-ssl/moc

#where to place auto-generated UI files
UI_DIR = ../build/rf-ssl/ui

#where to place intermediate resource files
RCC_DIR = ../build/rf-ssl/resources

#where to place LIBS
LIB_DIR = ../lib

unix {
  #add libeigen include path
  INCLUDEPATH += /usr/include/eigen2

  #add libdc1394
  LIBS += -ldc1394

  #add google protocol buffers
  LIBS += -lprotobuf

  #add opengl support
  LIBS += -lGL -lGLU
}

win32 {
  #add libs
  LIBS += $$LIB_DIR/libprotobuf$${SUFFIX_STR}.lib \
          #$$LIB_DIR/libdc1394$${SUFFIX_STR}.lib \
          ws2_32.lib \
        #  $$LIB_DIR/videoInput.lib \


  #OPENCV_PATH = $$(OPENCV_PATH)
  #  OPENCV_PATH = d:\Work\opencv249
    OPENCV_PATH = d:\Work\ocv249\opencv\

  !isEmpty(OPENCV_PATH){
    message(Compiling with OpenCV in $$(OPENCV_PATH))

    INCLUDEPATH += \
        $$OPENCV_PATH/build/include \

    #!!! ???? ? lib, ????????? ?????? opencv ??? vs2008
    exists($$OPENCV_PATH\build\x64\vc11\lib\opencv_core249.lib) {

      debug {
          LIBS += \
            -L$$OPENCV_PATH\build\x64\vc11\lib \
            -lopencv_core249d \
            -lopencv_highgui249d \
#            -lopencv_video249d \
#            -lopencv_ml249d \
#            -lopencv_legacy249d \
            -lopencv_imgproc249d \
#            -lopencv_flann249d \
#            -lopencv_features2d249d \
#            -lopencv_contrib249d \
#            -L$$OPENCV_PATH\build\x64\vc11\staticlib \
#            -llibjasperd \
#            -llibjpegd \
#            -llibpngd \
#            -llibtiffd \
#            -lzlibd \
#            -lvfw32 \
#            -lole32 \

      }
      release {
          LIBS += \
            -L$$OPENCV_PATH\build\x64\vc11\lib \
            -lopencv_core249d \
            -lopencv_highgui249d \
#            -lopencv_video249d \
#            -lopencv_ml249d \
#            -lopencv_legacy249d \
            -lopencv_imgproc249d \
#            -lopencv_flann249d \
#            -lopencv_features2d249d \
#            -lopencv_contrib249d \
#            -L$$OPENCV_PATH\build\x64\vc11\staticlib \
#            -llibjasperd \
#            -llibjpegd \
#            -llibpngd \
#            -llibtiffd \
#            -lzlibd \
#            -lvfw32 \
#            -lole32 \

        }

    } else {
      message(Unsupported OpenCV version: please use release build of OpenCV 2.2 for MSVC 2008)
    }
  } else {
    message(OPENCV_PATH variable is not set, please set it to a root of OpenCv installation, example: set OPENCV_PATH=C:\OpenCV2.0)
  }
}

#enable gl
QT     += opengl core widgets
#enable networking
#QT     += network

#where to build the vision executive
TARGET = rf-vision

#precompiled header
CONFIG += precompile_header
PRECOMPILED_HEADER = stable.h

#include actual list of source files for application
include ( rf-ssl.sources.pro.inc )

DEPENDPATH = INCLUDEPATH

