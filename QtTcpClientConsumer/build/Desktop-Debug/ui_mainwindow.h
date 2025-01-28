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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    Plotter *widget;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_timings;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QLineEdit *lineEdit_servidor;
    QSlider *horizontalSlider;
    QPushButton *pushButtonGet;
    QLabel *label_timings_2;
    QLabel *label;
    QTextBrowser *textBrowser_ip_list;
    QPushButton *pushButton_update;
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
        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 10, 341, 281));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(1, 1, 273, 368));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_timings = new QLabel(widget1);
        label_timings->setObjectName("label_timings");

        gridLayout->addWidget(label_timings, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_connect = new QPushButton(widget1);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(widget1);
        pushButton_disconnect->setObjectName("pushButton_disconnect");

        horizontalLayout->addWidget(pushButton_disconnect);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_start = new QPushButton(widget1);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(widget1);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_2->addWidget(pushButton_stop);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 3);

        lineEdit_servidor = new QLineEdit(widget1);
        lineEdit_servidor->setObjectName("lineEdit_servidor");

        gridLayout->addWidget(lineEdit_servidor, 1, 0, 1, 3);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 6, 1, 1, 2);

        pushButtonGet = new QPushButton(widget1);
        pushButtonGet->setObjectName("pushButtonGet");

        gridLayout->addWidget(pushButtonGet, 8, 0, 1, 2);

        label_timings_2 = new QLabel(widget1);
        label_timings_2->setObjectName("label_timings_2");

        gridLayout->addWidget(label_timings_2, 0, 0, 1, 2);

        label = new QLabel(widget1);
        label->setObjectName("label");

        gridLayout->addWidget(label, 6, 3, 1, 1);

        textBrowser_ip_list = new QTextBrowser(widget1);
        textBrowser_ip_list->setObjectName("textBrowser_ip_list");

        gridLayout->addWidget(textBrowser_ip_list, 3, 0, 2, 3);

        pushButton_update = new QPushButton(widget1);
        pushButton_update->setObjectName("pushButton_update");

        gridLayout->addWidget(pushButton_update, 5, 2, 1, 1);

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
        label_timings->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        lineEdit_servidor->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonGet->setText(QCoreApplication::translate("MainWindow", "getData", nullptr));
        label_timings_2->setText(QCoreApplication::translate("MainWindow", "ip do servidor", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", nullptr));
        pushButton_update->setText(QCoreApplication::translate("MainWindow", "update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
