#ifndef CANVASPLANE_H
#define CANVASPLANE_H

#include "Voxel.h"
#include <vector>

#include <QWidget>
#include <QSpinBox>

/**
    * @brief Widget that shows the 2D drawing area which represents an intersection plane of the sculpture
    * @details Widget responsible for creating a `dimh x dimv` matrix on which user can draw any 3D sculpture with Sculptor's main methods
    * */

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
     * @param dimh # of lines
     * @param dimv # of cols
     * @param dimz # of planes
     * */

    int dimh;
    int dimv;
    int dimz;

    /**
     * @brief Dimensions of each pixel of the plane to be drown (pixel's height and width).
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
     * @brief Straight boolean properties used for update right and left clicks states
     * */

    bool rPressed;
    bool lPressed;

public:

    explicit CanvasPlane(QWidget *parent = nullptr);

    /**
     * @brief Triggered everytime user clicks any button of the mouse
     * */

    void mousePressEvent(QMouseEvent *event);

    /**
     * @brief Triggered everytime user releases any button of the mouse
     * */

    void mouseReleaseEvent(QMouseEvent *event);

    /**
     * @brief Triggered everytime user moves the mouse
     * */

    void mouseMoveEvent(QMouseEvent *event);

    /**
     * @brief paintEvent is called everytime user interacts with the drawing area
     * */

    void paintEvent(QPaintEvent *event);
    /**
     * @brief Get the # of cols presented on the drawing area
     * */

    int getDimH();

    /**
     * @brief Get the # of lines presented on the drawing area
     * */

    int getDimV();

    /**
     * @brief Get the # of planes presented on the drawing area
     * */

    int getDimZ();

    /**
     * @brief Straight integer function used for set the # of lines of the drawing plane
     * */

    int changeDimH(int x);
    
    /**
     * @brief Straight integer function used for set the # of cols of the drawing plane
     * */

    int changeDimV(int y);

    /**
     * @brief Straight integer function used for set the # of planes of the drawing plane
     * */

    int changeDimZ(int z);

    /**
     * @brief Straight integer function used for catch X coordinate of the drawing plane
     * */

    int getCurrX();

    /**
     * @brief Straight integer function used for catch Y coordinate of the drawing plane
     * */

    int getCurrY();

    /**
     * @brief Straight boolean function used for catch if the mouse right button was pressed
     * */

    bool getRPressed();

    
    /**
     * @brief Straight boolean function used for catch if the mouse left button was pressed
     * */

    bool getLPressed();

public slots:
    /**
     * @brief Most important routine of this class. It is in charge for repainting a Sculptor's intersection plane on the drawing area each time a drawing method (puvoxel, putsphere, etc) is called
     * */
    void loadPlane(std::vector<std::vector<Voxel>> plane);

signals:
    void trigCurrPosition(int, int);
};

#endif // CANVASPLANE_H
