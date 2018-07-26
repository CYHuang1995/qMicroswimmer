#include"qGetCamera.h"


NPTGreyCamera::NPTGreyCamera()
{
	FlyCapture2::Error error;

	error = busMgr.GetNumOfCameras(&camTotalNum);
	if (error != PGRERROR_OK) return;

	if (camTotalNum == 0) return;

	camFound = true;
}
NPTGreyCamera::~NPTGreyCamera()
{
	DisconnectCamera();
}

// >> Rescan for cameras
bool NPTGreyCamera::ScanCamera()
{
	FlyCapture2::Error error;

	error = busMgr.GetNumOfCameras(&camTotalNum);
	if (error != PGRERROR_OK) return false;

	if (camTotalNum == 0) return false;

	camFound = true;

	return true;
}

// >> Check if more than one cameras are found
bool NPTGreyCamera::Exist()
{
	return camFound;
}


// >> Set desired camera index (start from 0)
void NPTGreyCamera::SetCameraIndex(unsigned int val)
{
	if (!camFound || camIndex >= camTotalNum) return;

	camIndex = val;
}

// >> Get current active camera index
unsigned int NPTGreyCamera::GetCameraIndex()
{
	if (!camFound) return -1;

	return camIndex;
}

// >> Get current active camera serial
// !NOTE:	Initial value for camera serial number is invalid. Make sure to call NPTGreyCamera::SelectCamera()
//			first to acquire a proper serial number.
unsigned int NPTGreyCamera::GetCameraSerial()
{
	if (!camFound) return -1;

	return camSerialNum;
}

// >> Get current found camera count
unsigned int NPTGreyCamera::GetCameraNum()
{
	return camTotalNum;
}

// >> Select a camera by its index
// !NOTE:	This function determines the camera by camera index. If there are more than one camera connected
//			to the computer, make sure to call NPTGreyCamera::SetCameraIndex(unsigned int) first. By default
//			this function will only select the first camera.
bool NPTGreyCamera::SelectCamera()
{
	if (!camFound) return false;

	FlyCapture2::Error error;

	if (camIndex < camTotalNum)
	{
		error = busMgr.GetCameraSerialNumberFromIndex(camIndex, &camSerialNum);
		if (error != PGRERROR_OK) return false;
	}
	else
	{
		return false;
	}

	error = busMgr.GetCameraFromSerialNumber(camSerialNum, &camGuid);
	if (error != PGRERROR_OK) return false;

	//if (!ConnectCamera()) return false;

	return true;
}

// >> Connect to a camera from extracted GUID
// !NOTE:	This function will only be affective when a proper GUID is extracted.
//			Make sure to execute NPTGreyCamera::SelectCamera(unsigned int index) first.
bool NPTGreyCamera::ConnectCamera()
{
	if (!camFound) return false;

	if (theCam.IsConnected())
	{
		DisconnectCamera();
	}

	FlyCapture2::Error error;

	// Connect to a camera
	error = theCam.Connect(&camGuid);
	if (error != PGRERROR_OK) return false;

	// Load more information from the camera connected
	error = theCam.GetCameraInfo(&camInfo);
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Disconnect current connected camera and reset
bool NPTGreyCamera::DisconnectCamera()
{
	if (theCam.IsConnected()) theCam.Disconnect();
	theCam.ResetStats();

	return true;
}

bool NPTGreyCamera::SetProperty(PropertyType type, float val, bool man)
{
	Property camProperty(type);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	camProperty.absValue = val;
	camProperty.absControl = TRUE;
	camProperty.autoManualMode = man;
	camProperty.onePush = FALSE;
	camProperty.onOff = TRUE;
	//camProperty.present = TRUE;

	error = theCam.SetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Set desired shutter time
bool NPTGreyCamera::SetShutterTime(float val)
{
	Property camProperty(SHUTTER);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	camProperty.absValue = val;
	camProperty.absControl = TRUE;
	camProperty.autoManualMode = FALSE;
	camProperty.onePush = FALSE;
	camProperty.onOff = TRUE;
	//camProperty.present = TRUE;

	error = theCam.SetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Set desired frame rate
bool NPTGreyCamera::SetFrameRate(float val)
{
	Property camProperty(FRAME_RATE);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	camProperty.absValue = val;
	camProperty.absControl =TRUE;
	camProperty.autoManualMode = FALSE;
	camProperty.onePush = FALSE;
	camProperty.onOff = TRUE;
	//camProperty.present = TRUE;

	error = theCam.SetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Set desired frame rate
bool NPTGreyCamera::SetBrightness(float val)
{
	Property camProperty(BRIGHTNESS);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	camProperty.absValue = val;
	camProperty.absControl = TRUE;
	camProperty.autoManualMode = FALSE;
	camProperty.onePush = FALSE;
	camProperty.onOff = TRUE;
	//camProperty.present = TRUE;

	error = theCam.SetProperty(&camProperty);
	if (error != PGRERROR_OK) return false;

	return true;
}


// >> Get current shutter time
float NPTGreyCamera::GetShutterTime()
{
	Property camProperty(SHUTTER);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return 0;

	return camProperty.absValue;
}

// >> Get current framerate
float NPTGreyCamera::GetFrameRate()
{
	Property camProperty(FRAME_RATE);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return 0;

	return camProperty.absValue;
}

// >> Get current brightness
float NPTGreyCamera::GetBrightness()
{
	Property camProperty(BRIGHTNESS);
	FlyCapture2::Error error;

	error = theCam.GetProperty(&camProperty);
	if (error != PGRERROR_OK) return 0;

	return camProperty.absValue;
}



// >> Start capture procedure
bool NPTGreyCamera::BeginCapturing(void callback(Image *, const void *))
{
	FlyCapture2::Error error;

	error = theCam.StartCapture(callback);
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Stop capture procedure
bool NPTGreyCamera::StopCapturing()
{
	FlyCapture2::Error error;

	error = theCam.StopCapture();
	if (error != PGRERROR_OK) return false;

	return true;
}

// >> Get current image buffer
// !Note:	No matter image retrievement succeeds or not, the image which pImg points to WILL
//			be lost. Do remember to back up if the original image is still needed.
bool NPTGreyCamera::TakeSnapshot(Image * pImg)
{
	FlyCapture2::Error error;

	// Prevent memory leak
	if (NULL != pImg) delete pImg;

	error = theCam.RetrieveBuffer(pImg);
	if (error != PGRERROR_OK) return false;

	return true;
}

