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
  \file    multivisionstack.cpp
  \brief   C++ Implementation: MultiVisionStack
  \author  Stefan Zickler, (C) 2008
*/
//========================================================================
#include "multivisionstack.h"

MultiVisionStack::MultiVisionStack(string _name, RenderOptions * _opts) {
  name=_name;
  opts=_opts;
  settings=new VarList("Global");
}

MultiVisionStack::~MultiVisionStack() {
  delete settings;
  for(int i=0; i<threads.size(); i++)
    delete threads[i];
}

string MultiVisionStack::getName() {
  return name;
}

VarList * MultiVisionStack::getSettings() {
  return settings;
}

string MultiVisionStack::getSettingsFileName() {
  return name;
}

void MultiVisionStack::createThreads(int number, CameraSettingsKeeper * camSettings) {
  for (int i=0;i<number;i++) {
    //threads.push_back(new CaptureThread(i,mVideoInput));
      threads.push_back(new CaptureThread(i, camSettings));
  }
}


void MultiVisionStack::start() {
  unsigned int n=threads.size();
  CaptureThread * t;
  for (unsigned int i=0;i<n;i++) {
    t=threads[i];
    //t->start(QThread::HighestPriority);
    t->start(QThread::LowPriority);
  }
}

void MultiVisionStack::stop() {
  unsigned int n=threads.size();
  CaptureThread * t;
  for (unsigned int i=0;i<n;i++) {
    t=threads[i];
    t->kill();
  }
}
