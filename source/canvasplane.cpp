#include "canvasplane.h"

#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QPen>

CanvasPlane::CanvasPlane(QWidget *parent)
    : QWidget{parent}
{
    dimh = 31;
    dimv = 31;
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

}
