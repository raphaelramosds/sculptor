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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void putVoxel();
    void cutVoxel();

    void putBox();
    void cutBox();

    void setColor();

    void putSphere();
    void cutSphere();

    void putEllipsoid();
    void cutEllipsoid();

    void fixInputsBoundaries();
    void resetBoundaries();
    void setPlane();
    void drawChosenShape();
    void saveOFF();
    void newPlane();
    void exit_();
    void newPlaneDialog();

    void changeToVoxelMode();
    void changeToBoxMode();
    void changeToSphereMode();
    void changeToEllipsoidMode();

private:
    Ui::MainWindow *ui;
    Sculptor* s;
    int drawingMode;
};
#endif // MAINWINDOW_H
