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

    // Tamanho do plano

    unsigned int dimh;
    unsigned int dimv;

    // Altura e largura dos pixels do plano

    unsigned int pixelh;
    unsigned int pixelw;

    // Coordenadas horizontal e vertical atuais

    int currX;
    int currY;

public:
    explicit CanvasPlane(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
};

#endif // CANVASPLANE_H
