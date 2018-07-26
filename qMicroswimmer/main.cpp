#include "qMicroswimmer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qMicroswimmer w;
	w.show();
	return a.exec();
}
