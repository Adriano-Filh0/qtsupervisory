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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_status;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QLineEdit *lineEdit_servidor;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSlider *horizontalSlider_min;
    QLCDNumber *lcdNumber_min;
    QLabel *label_max;
    QSlider *horizontalSlider_max;
    QLCDNumber *lcdNumber_max;
    QSplitter *splitter_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_timings;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(583, 421);
        QPalette palette;
        QBrush brush(QColor(61, 56, 70, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        label_status = new QLabel(centralWidget);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(10, 290, 91, 17));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(270, 0, 281, 341));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 251, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName("pushButton_connect");

        gridLayout->addWidget(pushButton_connect, 1, 0, 1, 1);

        pushButton_disconnect = new QPushButton(layoutWidget);
        pushButton_disconnect->setObjectName("pushButton_disconnect");

        gridLayout->addWidget(pushButton_disconnect, 1, 1, 1, 1);

        lineEdit_servidor = new QLineEdit(layoutWidget);
        lineEdit_servidor->setObjectName("lineEdit_servidor");

        gridLayout->addWidget(lineEdit_servidor, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalSlider_min = new QSlider(layoutWidget);
        horizontalSlider_min->setObjectName("horizontalSlider_min");
        horizontalSlider_min->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_min, 1, 0, 1, 1);

        lcdNumber_min = new QLCDNumber(layoutWidget);
        lcdNumber_min->setObjectName("lcdNumber_min");
        lcdNumber_min->setAutoFillBackground(false);
        lcdNumber_min->setSmallDecimalPoint(false);

        gridLayout_2->addWidget(lcdNumber_min, 1, 1, 1, 1);

        label_max = new QLabel(layoutWidget);
        label_max->setObjectName("label_max");

        gridLayout_2->addWidget(label_max, 2, 0, 1, 1);

        horizontalSlider_max = new QSlider(layoutWidget);
        horizontalSlider_max->setObjectName("horizontalSlider_max");
        horizontalSlider_max->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_max, 3, 0, 1, 1);

        lcdNumber_max = new QLCDNumber(layoutWidget);
        lcdNumber_max->setObjectName("lcdNumber_max");

        gridLayout_2->addWidget(lcdNumber_max, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName("layoutWidget1");
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_timings = new QLabel(layoutWidget1);
        label_timings->setObjectName("label_timings");

        gridLayout_3->addWidget(label_timings, 0, 0, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 2, 1, 1);

        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 0, 1, 1, 1);

        splitter_2->addWidget(layoutWidget1);

        verticalLayout_2->addWidget(splitter_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_start = new QPushButton(layoutWidget);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(layoutWidget);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_2->addWidget(pushButton_stop);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 583, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_min, &QSlider::valueChanged, lcdNumber_min, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider_max, &QSlider::valueChanged, lcdNumber_max, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider, &QSlider::valueChanged, label, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        lineEdit_servidor->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_max->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_timings->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
