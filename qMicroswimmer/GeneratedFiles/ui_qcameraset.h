/********************************************************************************
** Form generated from reading UI file 'qcameraset.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCAMERASET_H
#define UI_QCAMERASET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qCameraSet
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *qCameraSet)
    {
        if (qCameraSet->objectName().isEmpty())
            qCameraSet->setObjectName(QStringLiteral("qCameraSet"));
        qCameraSet->resize(625, 207);
        label = new QLabel(qCameraSet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 54, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(qCameraSet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 101, 21));
        label_2->setFont(font);
        label_3 = new QLabel(qCameraSet);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 591, 61));
        label_3->setStyleSheet(QLatin1String("border:2px dotted rgb(156, 156, 156);\n"
""));
        label_4 = new QLabel(qCameraSet);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 100, 591, 61));
        label_4->setStyleSheet(QLatin1String("border:2px dotted rgb(156, 156, 156);\n"
""));
        label_5 = new QLabel(qCameraSet);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 40, 81, 16));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_6 = new QLabel(qCameraSet);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 40, 101, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(qCameraSet);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 40, 111, 16));
        label_7->setFont(font1);
        spinBox = new QSpinBox(qCameraSet);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(330, 40, 61, 22));
        spinBox_2 = new QSpinBox(qCameraSet);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(120, 40, 61, 22));
        spinBox_3 = new QSpinBox(qCameraSet);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(540, 40, 61, 22));
        label_8 = new QLabel(qCameraSet);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 120, 41, 16));
        label_8->setFont(font1);
        lineEdit = new QLineEdit(qCameraSet);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 120, 441, 20));
        pushButton = new QPushButton(qCameraSet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 120, 75, 23));
        pushButton_2 = new QPushButton(qCameraSet);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 170, 75, 23));
        pushButton_3 = new QPushButton(qCameraSet);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 170, 75, 23));
        label_4->raise();
        label_3->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        spinBox->raise();
        spinBox_2->raise();
        spinBox_3->raise();
        label_8->raise();
        lineEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(qCameraSet);

        QMetaObject::connectSlotsByName(qCameraSet);
    } // setupUi

    void retranslateUi(QWidget *qCameraSet)
    {
        qCameraSet->setWindowTitle(QApplication::translate("qCameraSet", "Camera Set", Q_NULLPTR));
        label->setText(QApplication::translate("qCameraSet", "Parameters", Q_NULLPTR));
        label_2->setText(QApplication::translate("qCameraSet", "Record Path", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("qCameraSet", "shutter(ms):", Q_NULLPTR));
        label_6->setText(QApplication::translate("qCameraSet", "Framerate(fps):", Q_NULLPTR));
        label_7->setText(QApplication::translate("qCameraSet", "Brightness(lux):", Q_NULLPTR));
        label_8->setText(QApplication::translate("qCameraSet", "Path:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qCameraSet", "Browse", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("qCameraSet", "Cancell", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("qCameraSet", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qCameraSet: public Ui_qCameraSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCAMERASET_H
