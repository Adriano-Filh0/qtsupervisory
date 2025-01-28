#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();
  void tcpDisconnect();
  int valor_min;
  int valor_max;
  int intervalo;
public slots:
  void putData();
private slots:
    void on_pushButton_connect_clicked();

    void on_pushButton_disconnect_clicked();

    void on_horizontalSlider_min_valueChanged(int value);

    void on_horizontalSlider_max_valueChanged(int value);

    void on_pushButton_start_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_stop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *timer;
};

#endif // MAINWINDOW_H
