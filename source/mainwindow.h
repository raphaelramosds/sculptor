#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

#include <vector>

#include "sculptor.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


/**
* @brief Main component responsible for loading the software Sculptor interface
* @details This component shows all the interface elements needed to built and re-built any 3D sculpture with voxels
* */

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    /**
    * @brief Puts a voxel on a specific index of drawing area
    * */

    void putVoxel();

    /**
    * @brief Removes a voxel out of a specific index from the drawing area
    * */

    void cutVoxel();

    /**
    * @brief Puts a box on the drawing area according to preset ranges `x0` to `x1` (width), `y0` to `y1` (height) and `z0` to `z1` (depth)
    * */

    void putBox();

    /**
    * @brief Removes a box of the drawing area according to preset ranges `x0` to `x1` (width), `y0` to `y1` (height) and `z0` to `z1` (depth)
    * */

    void cutBox();

    /**
    * @brief Sets the current color in RGB
    * */

    void setColor();

    /**
    * @brief Puts a sphere whose center is defined by the coordinate that the user clicked on the drawing area
    * */

    void putSphere();

    /**
    * @brief Removes a sphere whose center is defined by the coordinate that the user clicked on the drawing area
    * */

    void cutSphere();

    /**
    * @brief Puts an ellipsoid whose center is defined by the coordinate that the user clicked on the drawing area
    * */

    void putEllipsoid();

    /**
    * @brief Removes an ellipsoid whose center is defined by the coordinate that the user clicked on the drawing area
    * */

    void cutEllipsoid();

    /**
    * @brief Once the sculpture dimensions are set, one must called this method for fix the inputs of the available shapes 
    * */

    void fixInputsBoundaries();

    /**
    * @brief Method triggered everytime user sets the # of the plane he wants to see on the spin box   
    * */

    void setPlane();

    /**
    * @brief Acoording to the drawing mode preset, this routine opens a tab on the left side of the interface which contains the properties of the selected shape (sphere, box and ellipsoid)
    * */

    void drawChosenShape();

    /**
    * @brief Exports an OFF file of the sculpture
    * */

    void saveOFF();

    /**
    * @brief Finish application
    * */

    void exit_();

    /**
    * @brief Allows user to rebuilt a sculpture with new dimensions
    * */

    void newPlaneDialog();

    /**
    * @brief Allows the user to draw a voxel on a specific index of the drawing area
    * */

    void changeToVoxelMode();

     /**
    * @brief Allows the user to draw a box on the drawing area
    * */

    void changeToBoxMode();

    /**
    * @brief Allows the user to draw a sphere on the drawing area
    * */

    void changeToSphereMode();

    /**
    * @brief Allows the user to draw an ellipsoid on the drawing area
    * */

    void changeToEllipsoidMode();

private:
    Ui::MainWindow *ui;
    Sculptor* s;
    int drawingMode;
};
#endif // MAINWINDOW_H
