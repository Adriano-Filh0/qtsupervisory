/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonGet;
    Plotter *widget;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_servidor;
    QLabel *label_timings;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QLabel *label_timings_2;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QLabel *label;
    QPushButton *pushButton_update;
    QListWidget *listWidget_servidores;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(605, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pushButtonGet = new QPushButton(centralWidget);
        pushButtonGet->setObjectName("pushButtonGet");
        pushButtonGet->setGeometry(QRect(10, 300, 101, 29));
        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 0, 341, 281));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 0, 258, 291));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_servidor = new QLineEdit(widget1);
        lineEdit_servidor->setObjectName("lineEdit_servidor");

        gridLayout->addWidget(lineEdit_servidor, 1, 0, 1, 3);

        label_timings = new QLabel(widget1);
        label_timings->setObjectName("label_timings");

        gridLayout->addWidget(label_timings, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_connect = new QPushButton(widget1);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(widget1);
        pushButton_disconnect->setObjectName("pushButton_disconnect");

        horizontalLayout->addWidget(pushButton_disconnect);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 4);

        label_timings_2 = new QLabel(widget1);
        label_timings_2->setObjectName("label_timings_2");

        gridLayout->addWidget(label_timings_2, 0, 0, 1, 2);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 5, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_start = new QPushButton(widget1);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(widget1);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_2->addWidget(pushButton_stop);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 4);

        label = new QLabel(widget1);
        label->setObjectName("label");

        gridLayout->addWidget(label, 5, 3, 1, 1);

        pushButton_update = new QPushButton(widget1);
        pushButton_update->setObjectName("pushButton_update");

        gridLayout->addWidget(pushButton_update, 4, 2, 1, 2);

        listWidget_servidores = new QListWidget(widget1);
        listWidget_servidores->setObjectName("listWidget_servidores");

        gridLayout->addWidget(listWidget_servidores, 3, 0, 1, 4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 605, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonGet->setText(QCoreApplication::translate("MainWindow", "getData", nullptr));
        lineEdit_servidor->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_timings->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_timings_2->setText(QCoreApplication::translate("MainWindow", "ip do servidor", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", nullptr));
        pushButton_update->setText(QCoreApplication::translate("MainWindow", "update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
