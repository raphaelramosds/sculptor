#ifndef CANVASPLANE_H
#define CANVASPLANE_H

#include "Voxel.h"
#include <vector>

#include <QWidget>
#include <QSpinBox>

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
     * @brief Dimensions of the plane to be drown (horizontal, vertica and z dimensions)
     * */

    int dimh;
    int dimv;
    int dimz;

    /**
     * @brief Dimensions of each pixel of the plane to be drown (pixel's height and width)
     * */

    int pixelh;
    int pixelw;
    int fat;

    /**
     * @brief Current horizontal e vertical coordinates in the plane
     * */

    int currX;
    int currY;

    /**
     * @brief Straight properties for update right and left clicks states
     * */

    bool rPressed;
    bool lPressed;

public:

    explicit CanvasPlane(QWidget *parent = nullptr);

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

    int getDimH();
    int getDimV();
    int getDimZ();

    int changeDimH(int x);
    int changeDimV(int y);
    int changeDimZ(int z);

    int getCurrX();
    int getCurrY();

    bool getRPressed();
    bool getLPressed();

public slots:
    void loadPlane(std::vector<std::vector<Voxel>> plane);

signals:
    void trigCurrPosition(int, int);
};

#endif // CANVASPLANE_H
