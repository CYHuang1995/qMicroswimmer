#include"qMicroswimmer.h"
#include"qCameraSet.hpp"
#include "qGetCamera.h"
#include <QtMultimedia\qcamera.h>
#include <opencv\cv.hpp>
#include <qtimer.h>
#include<qpainter.h>
#include "FlyCapture2.h"
using namespace cv;
using namespace FlyCapture2;

qMicroswimmer::qMicroswimmer(QWidget *parent)
	: QMainWindow(parent)
{
	theWid.setupUi(this);
}

qMicroswimmer::~qMicroswimmer()
{

}
void qMicroswimmer::CameraSet()
{
	qCameraSet *theCameraSet=new qCameraSet;
	
	theCameraSet->show();
}


//原openCamera
void qMicroswimmer::qOpenCamera()
{
	FlyCapture2::Error error; 
	Camera camera;
	CameraInfo camInfo;

	// Connect the camera
	error = camera.Connect(0);
	if (error != PGRERROR_OK)
	{
		//std::cout << "Failed to connect to camera" << std::endl;
		system("pause");
		return ;
	}

	// Get the camera info and print it out
	error = camera.GetCameraInfo(&camInfo);
	if (error != PGRERROR_OK)
	{
		//std::cout << "Failed to get camera info from camera" << std::endl;
		return;
	}
	/*std::cout << camInfo.vendorName << " "
		<< camInfo.modelName << " "
		<< camInfo.serialNumber << std::endl;*/

	error = camera.StartCapture();
	if (error == PGRERROR_ISOCH_BANDWIDTH_EXCEEDED)
	{
		//std::cout << "Bandwidth exceeded" << std::endl;
		return;
	}
	else if (error != PGRERROR_OK)
	{
	//	std::cout << "Failed to start image capture" << std::endl;
		return;
	}

	// capture loop


	//char key = 0;
	while (1)
	{
		// Get the image
		Image rawImage;
		FlyCapture2::Error error = camera.RetrieveBuffer(&rawImage);
		//if (error != PGRERROR_OK)
		//{
		//	//std::cout << "capture error" << std::endl;
		//	continue;
		//}

		// convert to rgb
		Image rgbImage;
		rawImage.Convert(FlyCapture2::PIXEL_FORMAT_BGR, &rgbImage);

		// convert to OpenCV Mat
		unsigned int rowBytes = (double)rgbImage.GetReceivedDataSize() / (double)rgbImage.GetRows();
		cv::Mat image = cv::Mat(rgbImage.GetRows(), rgbImage.GetCols(), CV_8UC3, rgbImage.GetData(), rowBytes);
		cv::resize(image, image, Size(), 0.25, 0.25, INTER_LINEAR);
		cv::cvtColor(image, image, CV_RGB2RGBA);//将RGBA格式转化成RGB  

		cv::imshow("image", image);
	    char key = cv::waitKey(1);

		int i;i++;
		QString str;
		str.sprintf("%d",i);
		theWid.textBrowser->append(str);

		QImage img = QImage((const unsigned char*)(image.data),image.cols, image.rows, QImage::Format_RGB32);

		img = img.scaled(theWid.label->width(), theWid.label->height());
		theWid.label->setPixmap(QPixmap::fromImage(img));
		theWid.label->show();
	

		
	}
	
	error = camera.StopCapture();
	if (error != PGRERROR_OK)
	{
		// This may fail when the camera was removed, so don't show 
		// an error message
	}

	camera.Disconnect();
	system("pause");
} 

//void qMicroswimmer::qOpenCamera()
//{
//thePTCamera= new NPTGreyCamera();
//
//	if (!thePTCamera->SelectCamera() || !thePTCamera->ConnectCamera()) 
//		{theWid.textBrowser->append("<<<!ERROR>>> \nCamera selection or connection failed.");
//		return;}
//QString str;
//str.sprintf("Camera %d is connected, serial number is %d.", thePTCamera->GetCameraIndex(), \
	thePTCamera->GetCameraSerial());
//	theWid.textBrowser->append(str);
//	thePTCamera->SetFrameRate(50);
//
//	theWid.textBrowser->append("Capturing procedure has begun. Using thread-callback method.");
//
//
//	//char key = 0;
//	while (1)
//	{
//		// Get the image
//		Image rawImage;
//		FlyCapture2::Error error = thePTCamera->theCam.RetrieveBuffer(&rawImage);
//		//if (error != PGRERROR_OK)
//		//{
//		//	//std::cout << "capture error" << std::endl;
//		//	continue;
//		//}
//
//		// convert to rgb
//		Image rgbImage;
//		rawImage.Convert(FlyCapture2::PIXEL_FORMAT_BGR, &rgbImage);
//
//		// convert to OpenCV Mat
//		unsigned int rowBytes = (double)rgbImage.GetReceivedDataSize() / (double)rgbImage.GetRows();
//		cv::Mat image = cv::Mat(rgbImage.GetRows(), rgbImage.GetCols(), CV_8UC3, rgbImage.GetData(), rowBytes);
//		cv::cvtColor(image, image, CV_RGB2RGBA);//将RGBA格式转化成RGB  
//
//		cv::imshow("image", image);
//
//		char key = cv::waitKey(30);
//
//
//		QImage img = QImage((const unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB32);
//
//		img = img.scaled(theWid.label->width(), theWid.label->height());
//		theWid.label->setPixmap(QPixmap::fromImage(img));
//		theWid.label->show();
//
//
//
//	}
//
//}

void  qMicroswimmer::qOpenCamera1()
{
	theCam = cvCaptureFromCAM(200);
	timer->start(45);
	frame = cvQueryFrame(theCam);
	if (!frame)
	{
		qDebug("get frame1 error!");
		return;
	}
	QImage image = QImage((const uchar*)frame->imageData, frame->width, frame->height, QImage::Format_RGB888).rgbSwapped();//rgbSwapped()用于转换QImage对象从RGB->BGR  
	theWid.label->setPixmap(QPixmap::fromImage(image));

}