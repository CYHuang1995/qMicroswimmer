#pragma once

#include <QtWidgets/QDialog>
#include <ui_qcameraset.h>
class qCameraSet : public QDialog {
	Q_OBJECT

public:
	qCameraSet(QWidget *parent = 0);
	~qCameraSet();

private:

	Ui::qCameraSet theCamSet;
	
};
