
// C++ headers
#include <iomanip>
#include <iostream>
#include <afx.h>

//// OpenCV headers
//#include "CvvImageMat.h"
//#include "cv.h"
//#include "highgui.h"
//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/features2d/features2d.hpp"
//#include "opencv2/calib3d/calib3d.hpp"

// FlyCapture2 headers
#include "BusManager.h"
#include "Camera.h"
#include "FlyCapture2.h"
#include "FlyCapture2GUI.h"
#include "Image.h"
#include "Utilities.h"

#pragma once

using namespace std;
using namespace FlyCapture2;

// PointGrey Camera Class

class NPTGreyCamera
{
private:
	BusManager			busMgr;
	PGRGuid				camGuid;

	/*Camera				theCam;
	CameraInfo			camInfo;*/

	bool				camFound = false;
	unsigned int		camTotalNum = 0;
	unsigned int		camSerialNum = -1;
	unsigned int		camIndex = 0;


public:
	NPTGreyCamera();
	~NPTGreyCamera();
	Camera				theCam;
	CameraInfo			camInfo;

	bool				Exist();
	bool				ScanCamera();
	void				SetCameraIndex(unsigned int);
	unsigned int		GetCameraIndex();
	unsigned int		GetCameraSerial();
	unsigned int		GetCameraNum();

	float				GetShutterTime();
	float				GetFrameRate();
	float				GetBrightness();

	bool				SelectCamera();
	bool				ConnectCamera();
	bool				DisconnectCamera();

	bool				SetProperty(PropertyType, float, bool man = false);

	bool				SetShutterTime(float);
	bool				SetFrameRate(float);
	bool				SetBrightness(float);
	bool				SetImageSize(unsigned int width, unsigned int height);
	bool				SetImageRegion(unsigned int offx, unsigned int offy,
		unsigned int sizex, unsigned int sizey);

	bool				BeginCapturing(void callback(FlyCapture2::Image *, const void *) = NULL);
	bool				StopCapturing();
	bool				TakeSnapshot(FlyCapture2::Image * pImg);
};