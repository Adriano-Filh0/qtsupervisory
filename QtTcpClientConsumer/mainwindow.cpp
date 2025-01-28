#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  //tcpConnect();

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost("127.0.0.1",1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
    }
    else{
        qDebug() << "Disconnected";
    }
}

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    qDebug() << "Disconnected";

}

QStringList MainWindow::getServerList()
{
    QStringList serverList;
    socket->connectToHost("127.0.0.1", 1234);
    if (!socket->waitForConnected(3000)) {
        qDebug() << "Disconnected";
        return serverList;// Retorna uma lista vazia se não conectar
    }
    // Enviar o pedido para obter a lista de servidores
    socket->write("GET_SERVER_LIST\r\n");
    socket->waitForBytesWritten();

    // Espera a resposta do servidor
    socket->waitForReadyRead();

    // Lê a resposta do servidor
    QByteArray response = socket->readAll();
    qDebug() << "Resposta do servidor:" << response;

    // Processar a resposta (assumindo que seja uma lista de servidores separada por vírgulas ou espaços)
    serverList = QString(response).split(",");  // Se for por vírgula, separa os servidores
    for (int i = 0; i < serverList.size(); ++i) {
        serverList[i] = serverList[i].trimmed();  // Remove espaços em excesso
    }

    socket->disconnectFromHost();  // Desconecta do servidor após a comunicação
    return serverList;
}
void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
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


void MainWindow::on_pushButton_update_clicked()
{
    ui->listWidget_servidores->addItems(getServerList());

}

