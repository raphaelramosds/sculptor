#ifndef CANVASPLANE_H
#define CANVASPLANE_H

#include "voxel.h"

#include <vector>

#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QPen>

class CanvasPlane : public QWidget
{
    Q_OBJECT

private:

    /**
     * @brief p is the intersection plane
     * @details this matrix isn't dinamically allocated
     * */

    std::vector<std::vector<Voxel>> p;
    unsigned int dimh;
    unsigned int dimv;

public:
    explicit CanvasPlane(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:

};

#endif // CANVASPLANE_H
