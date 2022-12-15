#ifndef CANVASPLANE_H
#define CANVASPLANE_H

#include "Voxel.h"
#include <vector>

#include <QWidget>

class CanvasPlane : public QWidget
{
    Q_OBJECT

private:

    /**
     * @brief p is the intersection plane
     * @details this matrix isn't dinamically allocated
     * */

    std::vector<std::vector<Voxel>> p;

    /**
     * @brief Dimensions of the plane to be drown
     * */

    int dimh;
    int dimv;
    int dimz;

    /**
     * @brief Dimensions of each pixel of the plane to be drown
     * */

    int pixelh;
    int pixelw;
    int fat;

    /**
     * @brief Current horizontal e vertical coordinates in the plane
     * */

    int currX;
    int currY;

public:
    explicit CanvasPlane(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    int getDimH();
    int getDimV();
    int getDimZ();
    void loadPlane(std::vector<std::vector<Voxel>> plane);
signals:
    void posicao(int, int);
};

#endif // CANVASPLANE_H
