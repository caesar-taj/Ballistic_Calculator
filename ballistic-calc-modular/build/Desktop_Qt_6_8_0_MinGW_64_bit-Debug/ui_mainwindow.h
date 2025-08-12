/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelMaxHeight;
    QLabel *labelTimeOfFlight;
    QLabel *labelRange;
    QPushButton *calculateButton;
    QLabel *label_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditVelocity;
    QLabel *label_2;
    QLineEdit *lineEditAngle;
    QLabel *label_3;
    QLineEdit *lineEditAltitude;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelMaxHeight = new QLabel(centralwidget);
        labelMaxHeight->setObjectName("labelMaxHeight");
        labelMaxHeight->setGeometry(QRect(311, 193, 271, 16));
        QFont font;
        font.setBold(true);
        labelMaxHeight->setFont(font);
        labelMaxHeight->setAutoFillBackground(false);
        labelMaxHeight->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelTimeOfFlight = new QLabel(centralwidget);
        labelTimeOfFlight->setObjectName("labelTimeOfFlight");
        labelTimeOfFlight->setGeometry(QRect(311, 215, 271, 16));
        labelTimeOfFlight->setFont(font);
        labelTimeOfFlight->setAutoFillBackground(false);
        labelTimeOfFlight->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelRange = new QLabel(centralwidget);
        labelRange->setObjectName("labelRange");
        labelRange->setGeometry(QRect(311, 171, 251, 16));
        labelRange->setFont(font);
        labelRange->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(370, 140, 75, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-40, -50, 911, 551));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/war-conflict-landscape-with-tank.jpg")));
        label_4->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(310, 50, 183, 80));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditVelocity = new QLineEdit(widget);
        lineEditVelocity->setObjectName("lineEditVelocity");
        lineEditVelocity->setFrame(true);

        gridLayout->addWidget(lineEditVelocity, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditAngle = new QLineEdit(widget);
        lineEditAngle->setObjectName("lineEditAngle");

        gridLayout->addWidget(lineEditAngle, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditAltitude = new QLineEdit(widget);
        lineEditAltitude->setObjectName("lineEditAltitude");

        gridLayout->addWidget(lineEditAltitude, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        widget->raise();
        widget->raise();
        widget->raise();
        lineEditVelocity->raise();
        lineEditAltitude->raise();
        lineEditAngle->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        labelMaxHeight->raise();
        labelTimeOfFlight->raise();
        labelRange->raise();
        calculateButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelMaxHeight->setText(QCoreApplication::translate("MainWindow", "Max height", nullptr));
        labelTimeOfFlight->setText(QCoreApplication::translate("MainWindow", "Time of flight", nullptr));
        labelRange->setText(QCoreApplication::translate("MainWindow", "Range", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Altitude", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
