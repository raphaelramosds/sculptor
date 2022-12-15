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
    dimh = dimv = dimz = 40;
}

void CanvasPlane::mousePressEvent(QMouseEvent *event)
{
    qDebug() << width() << " " << height();

    currX = event->x()/pixelw;
    currY = event->y()/pixelh;

    emit trigCurrPosition(currX,currY);

    qDebug() << currX << " " << currY;
}

void CanvasPlane::paintEvent(QPaintEvent *event)
{
    QColor white = QColor(255,255,255);
    QColor gray = QColor(220,220,220);

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // Plane height and width

    pixelh = (height()/dimh);
    pixelw = (width()/dimv);

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

    for(int l=0; l < dimh; l++)
    {
        for(int c=0; c < dimv; c++)
        {
            // If voxel is on, get its properties

            if (p[l][c].isOn) {
                brush.setColor(QColor(p[l][c].r * 255,p[l][c].g * 255, p[l][c].b * 255));
            }

            // Else, draw a default white box

            else {
                brush.setColor(white);
            }

            // Update brush and draw the box

            painter.setBrush(brush);
            painter.drawRect(l*pixelh, c*pixelw, pixelh , pixelw);
        }
    }
}

int CanvasPlane::getDimH() { return dimh; }
int CanvasPlane::getDimV() { return dimv; }
int CanvasPlane::getDimZ() { return dimz; }

int CanvasPlane::getCurrX() { return currX; }
int CanvasPlane::getCurrY() { return currY; }

void CanvasPlane::loadPlane(std::vector<std::vector<Voxel> > plane) {
    p = plane;
    repaint(); // rebuilt plane each time loadPlane is called
}
