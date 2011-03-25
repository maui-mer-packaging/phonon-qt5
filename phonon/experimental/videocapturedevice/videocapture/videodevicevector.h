/*
    videodevicevector.h  -  Kopete Video Device List Abstration

    Copyright (c) 2009 by Alan Jones <skyphyr@gmail.com>

    Kopete    (c) 2002-2009      by the Kopete developers  <kopete-devel@kde.org>

    *************************************************************************
    *                                                                       *
    * This library is free software; you can redistribute it and/or         *
    * modify it under the terms of the GNU General Public                   *
    * License as published by the Free Software Foundation; either          *
    * version 3 of the License, or (at your option) any later version.      *
    *                                                                       *
    * This program is distributed in the hope that it will be useful,       *
    * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
    * GNU General Public License for more details.                          *
    *                                                                       *
    * You should have received a copy of the GNU General Public License     *
    * along with this program.  If not, see <http://www.gnu.org/licenses/>. *
    *************************************************************************
*/

#ifndef PHONON_VIDEODEVICEVECTOR_H
#define PHONON_VIDEODEVICEVECTOR_H

#include "videodevice.h"
#include "dummyvideodevice.h"

namespace Phonon {

namespace VideoCapture {

/**
@author Kopete Developers
*/

class VideoDeviceVector : public QVector<VideoDevice>
{

public:
	VideoDeviceVector() {}
	~VideoDeviceVector() {}
	
	VideoDevice& operator[] (int i);

	const VideoDevice& operator[] (int i) const;
	
	const VideoDevice& at(int i) const;
	
private:
	
	DummyVideoDevice fallback;
};

}

}



#endif
