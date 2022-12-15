#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include "sculptor.h"

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
    void putBox();
    void setColor();
    void putSphere();
    void putEllipsoid();
    void setPlane();

private:
    Ui::MainWindow *ui;
    Sculptor* s;
};
#endif // MAINWINDOW_H
