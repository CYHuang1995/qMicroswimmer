/********************************************************************************
** Form generated from reading UI file 'qmicroswimmer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMICROSWIMMER_H
#define UI_QMICROSWIMMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMicroswimmerClass
{
public:
    QAction *actionOpen;
    QWidget *centralWidget;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *File;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QDockWidget *Camera;
    QWidget *dockWidgetContents;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QDockWidget *ManualControl;
    QWidget *dockWidgetContents_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QDockWidget *Reserved;
    QWidget *dockWidgetContents_4;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *qMicroswimmerClass)
    {
        if (qMicroswimmerClass->objectName().isEmpty())
            qMicroswimmerClass->setObjectName(QStringLiteral("qMicroswimmerClass"));
        qMicroswimmerClass->resize(994, 785);
        actionOpen = new QAction(qMicroswimmerClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(qMicroswimmerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(670, 10, 291, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        qMicroswimmerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qMicroswimmerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 994, 23));
        File = new QMenu(menuBar);
        File->setObjectName(QStringLiteral("File"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        qMicroswimmerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qMicroswimmerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qMicroswimmerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        Camera = new QDockWidget(qMicroswimmerClass);
        Camera->setObjectName(QStringLiteral("Camera"));
        Camera->setMinimumSize(QSize(620, 750));
        Camera->setSizeIncrement(QSize(0, 0));
#ifndef QT_NO_TOOLTIP
        Camera->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        Camera->setLayoutDirection(Qt::LeftToRight);
        Camera->setStyleSheet(QStringLiteral("background-color: rgb(211, 211, 211);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 670, 91, 31));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 630, 131, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        pushButton_2 = new QPushButton(dockWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 670, 91, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(dockWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 670, 91, 31));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(dockWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 670, 91, 31));
        pushButton_4->setFont(font);
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 630, 201, 21));
        label_6->setFont(font1);
        pushButton_7 = new QPushButton(dockWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(120, 670, 91, 31));
        pushButton_7->setFont(font);
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 600, 600));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Camera->setWidget(dockWidgetContents);
        qMicroswimmerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), Camera);
        ManualControl = new QDockWidget(qMicroswimmerClass);
        ManualControl->setObjectName(QStringLiteral("ManualControl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ManualControl->sizePolicy().hasHeightForWidth());
        ManualControl->setSizePolicy(sizePolicy);
        ManualControl->setMinimumSize(QSize(350, 322));
        ManualControl->setMaximumSize(QSize(350, 331));
        ManualControl->setSizeIncrement(QSize(0, 0));
        ManualControl->setMouseTracking(false);
        ManualControl->setStyleSheet(QStringLiteral("background-color: rgb(211, 211, 211);"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        doubleSpinBox = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(120, 21, 61, 41));
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setToolTipDuration(-2);
        doubleSpinBox_2 = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(120, 70, 61, 41));
        doubleSpinBox_2->setFont(font1);
        doubleSpinBox_3 = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(120, 120, 61, 41));
        doubleSpinBox_3->setFont(font1);
        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 21, 61, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(dockWidgetContents_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 71, 61, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(dockWidgetContents_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 121, 61, 31));
        label_5->setFont(font1);
        pushButton_5 = new QPushButton(dockWidgetContents_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 330, 121, 41));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(133, 199, 130);"));
        pushButton_6 = new QPushButton(dockWidgetContents_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(190, 330, 121, 41));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 119, 119);"));
        ManualControl->setWidget(dockWidgetContents_3);
        qMicroswimmerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), ManualControl);
        Reserved = new QDockWidget(qMicroswimmerClass);
        Reserved->setObjectName(QStringLiteral("Reserved"));
        Reserved->setMinimumSize(QSize(336, 360));
        Reserved->setStyleSheet(QStringLiteral("background-color: rgb(211, 211, 211);"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        textBrowser = new QTextBrowser(dockWidgetContents_4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 331, 371));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Reserved->setWidget(dockWidgetContents_4);
        qMicroswimmerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), Reserved);

        menuBar->addAction(File->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        File->addSeparator();
        File->addSeparator();
        File->addAction(actionOpen);

        retranslateUi(qMicroswimmerClass);
        QObject::connect(pushButton, SIGNAL(clicked()), qMicroswimmerClass, SLOT(qOpenCamera()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), qMicroswimmerClass, SLOT(CameraSet()));

        QMetaObject::connectSlotsByName(qMicroswimmerClass);
    } // setupUi

    void retranslateUi(QMainWindow *qMicroswimmerClass)
    {
        qMicroswimmerClass->setWindowTitle(QApplication::translate("qMicroswimmerClass", "QMicoswimmer", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("qMicroswimmerClass", "open", Q_NULLPTR));
        File->setTitle(QApplication::translate("qMicroswimmerClass", "FIle", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("qMicroswimmerClass", "View", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("qMicroswimmerClass", "Help", Q_NULLPTR));
        Camera->setWindowTitle(QApplication::translate("qMicroswimmerClass", "Camera Monitor", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qMicroswimmerClass", "Open Camera", Q_NULLPTR));
        label_2->setText(QApplication::translate("qMicroswimmerClass", "Status of SHM:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("qMicroswimmerClass", "Snapshot", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("qMicroswimmerClass", "Record", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("qMicroswimmerClass", "Find", Q_NULLPTR));
        label_6->setText(QApplication::translate("qMicroswimmerClass", "(y,z)=(0,0) \316\270=0,\317\206=0,\317\211=0", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("qMicroswimmerClass", "Camera Set", Q_NULLPTR));
        label->setText(QString());
        ManualControl->setWindowTitle(QApplication::translate("qMicroswimmerClass", "Manual Control", Q_NULLPTR));
        label_3->setText(QApplication::translate("qMicroswimmerClass", "Angle \316\270", Q_NULLPTR));
        label_4->setText(QApplication::translate("qMicroswimmerClass", "Pitch \317\206", Q_NULLPTR));
        label_5->setText(QApplication::translate("qMicroswimmerClass", "Freq \317\211", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("qMicroswimmerClass", "Apply", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("qMicroswimmerClass", "Stop", Q_NULLPTR));
        Reserved->setWindowTitle(QApplication::translate("qMicroswimmerClass", "Reserved", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qMicroswimmerClass: public Ui_qMicroswimmerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMICROSWIMMER_H
