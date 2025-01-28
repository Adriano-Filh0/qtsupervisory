#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow), timer(new QTimer(this)){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  //tcpConnect();

  connect(timer, &QTimer::timeout, this, &MainWindow::putData);
}

void MainWindow::tcpConnect(){
  socket->connectToHost("127.0.0.1",1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->label_status->setText("Connected");
  }
  else{
    qDebug() << "Disconnected";
    ui->label_status->setText("Disconnected");
  }
}

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    qDebug() << "Disconnected";
    ui->label_status->setText("Disconnected");

}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
          QString::number(static_cast<float>(this->valor_min) + (rand() / (static_cast<float>(RAND_MAX) + 1)) * (this->valor_max - this->valor_min))+"\r\n";
    qDebug() << this->valor_min;
    qDebug() << this->valor_max;

      qDebug() << str;
    ui->textBrowser->append(str);
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}

void MainWindow::on_pushButton_connect_clicked()
{
    tcpConnect();
}


void MainWindow::on_pushButton_disconnect_clicked()
{
    tcpDisconnect();
}


void MainWindow::on_horizontalSlider_min_valueChanged(int value)
{
    this->valor_min = value;
}


void MainWindow::on_horizontalSlider_max_valueChanged(int value)
{
    this->valor_max = value;
}


void MainWindow::on_pushButton_start_clicked()
{
    timer->start(this->intervalo);

}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    intervalo = 1000/value;
}


void MainWindow::on_pushButton_stop_clicked()
{
    timer->stop();
}

