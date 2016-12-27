#ifndef CAMERASETTINGSKEEPER_H
#define CAMERASETTINGSKEEPER_H

#include <map>

class CameraSettingsKeeper
{
private:
    std::map<int,std::pair<bool,double>*> map;
    std::map<int,std::pair<bool,double>*>::iterator iter;
public:

    std::vector<void*> captureOpenCv;

    void put(int propId, double propValue);
    bool check(int propId);
    double poll(int propId);

    void resetIterator();
    bool nextProperty(int &propId, double &propValue);

    CameraSettingsKeeper();
    ~CameraSettingsKeeper();
};


#endif // CAMERASETTINGSKEEPER_H
