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

    dimh = 31; // obs: put '19x19'
    dimv = 31;
}

void CanvasPlane::mousePressEvent(QMouseEvent *event)
{


    qDebug() << width() << " " << height();


    currX = event->x()/pixelw;
    currY = event->y()/pixelh;
    emit posicao(currX,currY);
    qDebug() << currX << " " << currY;
}

void CanvasPlane::paintEvent(QPaintEvent *event)
{
    QColor white = QColor(255,255,255);
    QColor gray = QColor(220,220,220);

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // Altura e largura dos pixels do plano

    pixelh = (height()/dimh);
    pixelw = (width()/dimv);

    // ternary conditional operator

    (pixelh>pixelw) ? fat = pixelh : fat = pixelw; // quare matrix = 'smaller dim'

    // Canvas border and fill

    brush.setColor(white);
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(gray);
    pen.setWidth(2); // default = '2'

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

    // Canvas' cols and lines

    for(unsigned int l=0; l < dimv; l++){
        for(unsigned int c=0; c < dimh; c++){
            painter.drawRect(l*pixelh, c*pixelw, pixelh , pixelw);
        }
    }
}
