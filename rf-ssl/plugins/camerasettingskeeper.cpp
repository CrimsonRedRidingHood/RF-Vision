#include "camerasettingskeeper.h"

#include <QDebug>

void CameraSettingsKeeper::put(int propId, double propValue)
{
    std::pair<bool,double> * current = map[propId];
    if( current )
    {
        current->first = true;
        current->second = propValue;
    }
    else
    {
        std::pair<bool,double> * newPair = new std::pair<bool,double>;
        newPair->first = true;
        newPair->second = propValue;
        map[propId] = newPair;
    }
}

bool CameraSettingsKeeper::check(int propId)
{
    std::pair<bool,double> * current = map[propId];
    if( current )
    {
        return current->first;
    }

    return false;
}

double CameraSettingsKeeper::poll(int propId) // call check() berfore
{
    return map[propId]->second;
}

void CameraSettingsKeeper::resetIterator()
{
    iter = map.begin();
}

bool CameraSettingsKeeper::nextProperty(int &propId, double &propValue)
{
    while( iter != map.end() && !(iter->second->first) )
    {
        iter++;
    }

    if( iter == map.end() )
    {
        return false;
    }

    propId = iter->first;
    propValue = iter->second->second;

    iter++;

    return true;
}

CameraSettingsKeeper::CameraSettingsKeeper()
{
}

CameraSettingsKeeper::~CameraSettingsKeeper()
{
    for( iter = map.begin(); iter != map.end(); iter++ )
    {
        delete iter->second;
    }
}
