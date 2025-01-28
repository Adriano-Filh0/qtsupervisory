#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>


Plotter::Plotter(QWidget *parent) : QWidget{parent}{

}

void Plotter::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // brush amarelo
    brush.setColor(QColor(255, 255, 100));
    brush.setStyle(Qt::SolidPattern);

    // caneta vermelha
    pen.setColor(QColor(255, 0, 0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0, 0, width(), height());

    // desnhar x
    pen.setColor(QColor(255, 180, 0));
    painter.setPen(pen);

    //painter.drawLine(MainWindow::str);
}

