#include "canvasplane.h"

#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>

#include <QDebug>

CanvasPlane::CanvasPlane(QWidget *parent)
    : QWidget{parent}
{
    // Dimensão horizontal e vertical da matriz

    dimh = 51;
    dimv = 51;

    // Fatores de escala para X e Y na malha

    unsigned int scalex = height()/2;
    unsigned int scaley = scalex * 4;

    // Altura e largura dos pixels do plano

    pixelh = scaley * height()/dimh;
    pixelw = scalex * width()/dimv;
}

void CanvasPlane::mousePressEvent(QMouseEvent *event)
{
    currX = event->x()/pixelw;
    currY = event->y()/pixelh;

    qDebug() << currX << " " << currY;
}

void CanvasPlane::paintEvent(QPaintEvent *event)
{
    QColor white = QColor(239,241,237);
    QColor gray = QColor(220,220,220);

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // Canvas border and fill

    brush.setColor(white);
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(gray);
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

    // Canvas' cols and lines

    for (unsigned int c = 1; c < dimh; c++)
        painter.drawLine(c*pixelw, 0, c*pixelw, height());

    for (unsigned int l = 1; l < dimv; l++)
        painter.drawLine(0, l*pixelh, width(), l*pixelh);
}
