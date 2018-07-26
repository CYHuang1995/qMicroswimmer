#ifndef QMICOSWIMMER_H
#define QMICOSWIMMER_H

#include <QtWidgets/QMainWindow>
#include "ui_qmicroswimmer.h"

// C++ headers
#include <iomanip>
#include <iostream>
#include <thread>
#include <cstdarg>
#include <queue>


// Windows headers
//#include "winbase.h"

// OpenCV headers

#include <opencv\cv.h>
#include <opencv\highgui.h>
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

// User headers

#include "qGetCamera.h"
#include "qCameraSet.hpp"

class qMicroswimmer : public QMainWindow
{
	Q_OBJECT

public:
	qMicroswimmer(QWidget *parent = 0);
	~qMicroswimmer();

	public slots:
	void CameraSet();
	void qOpenCamera();
	void qOpenCamera1();

private:
	Ui::qMicroswimmerClass theWid;



	// Capturing procedure
	NPTGreyCamera *			thePTCamera;								// Pointer to a PointGrey camera

	float					camFrameRate = 50;
	float					camBrightness;
	float					camShutter;

	uint16_t				imgSizeX = 2048;							// Default image size X (columns)
	uint16_t				imgSizeY = 2048;							// Default image size Y (rows)
	uint16_t				camFpsCount = 0;							// Number of images received from callback

	CvCapture *theCam;
	QTimer *timer;
	IplImage  *frame;
};

#endif // QMICOSWIMMER_H
