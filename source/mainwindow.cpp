#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <cmath>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Load MainWindows

    ui->setupUi(this);

    ui->tabWidgetShapes->setTabVisible(0,false);
    ui->tabWidgetShapes->setTabVisible(1,false);
    ui->tabWidgetShapes->setTabVisible(2,false);

    // Set up default Sculpture

    s = new Sculptor(
        ui->canvasplane->getDimH(),
        ui->canvasplane->getDimV(),
        ui->canvasplane->getDimZ()
    );

    // Set up default grid color

    s->setColor(1.0,1.0,1.0,1.0);

    // Set up default plane (z = 0)

    std::vector<std::vector<Voxel>> v = s->getPlane();
    ui->canvasplane->loadPlane(v);

    changeToVoxelMode();

    newPlaneDialog();

    // Box SIGNALS-SLOTS

    connect(
        ui->horizontalSliderBoxWidth,
        SIGNAL(valueChanged(int)),
        ui->spinBoxBoxWidth,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderBoxHeight,
        SIGNAL(valueChanged(int)),
        ui->spinBoxBoxHeight,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderBoxDepth,
        SIGNAL(valueChanged(int)),
        ui->spinBoxBoxDepth,
        SLOT(setValue(int))
    );

    // Sphere SIGNALS->Slots

    connect(
        ui->horizontalSliderSphereRadius,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSphereRadius,
        SLOT(setValue(int))
    );

    // Ellipsoid SIGNALS->Slots

    connect(
        ui->horizontalSliderEllipsoidWidth,
        SIGNAL(valueChanged(int)),
        ui->spinBoxEllipsoidWidth,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderEllipsoidHeight,
        SIGNAL(valueChanged(int)),
        ui->spinBoxEllipsoidHeight,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderEllipsoidDepth,
        SIGNAL(valueChanged(int)),
        ui->spinBoxEllipsoidDepth,
        SLOT(setValue(int))
    );

    // Set current color with slider

    connect(
        ui->horizontalSliderSetRed,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSetRed,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderSetGreen,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSetGreen,
        SLOT(setValue(int))
    );

    connect(
        ui->horizontalSliderSetBlue,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSetBlue,
        SLOT(setValue(int))
    );

    // Get color from spin box

    connect(
        ui->spinBoxSetRed,
        SIGNAL(valueChanged(int)),
        this,
        SLOT(setColor())
    );

    connect(
        ui->spinBoxSetGreen,
        SIGNAL(valueChanged(int)),
        this,
        SLOT(setColor())
    );

    connect(
        ui->spinBoxSetBlue,
        SIGNAL(valueChanged(int)),
        this,
        SLOT(setColor())
    );

    // Set plane number with slider SIGNALS->SLOTS

    connect(
        ui->horizontalSliderSetPlane,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSetPlane,
        SLOT(setValue(int))
    );

    // Get current plane from spin box

    connect(
        ui->spinBoxSetPlane,
        SIGNAL(valueChanged(int)),
        this,
        SLOT(setPlane())
    );

    // Draw the chosen shape

    connect(
        ui->canvasplane,
        SIGNAL(trigCurrPosition(int,int)),
        this,
        SLOT(drawChosenShape())
    );

    // Change drawing mode

    connect(ui->actiondrawVoxel,
            SIGNAL(triggered(bool)),
            this,
            SLOT(changeToVoxelMode()));

    connect(ui->actiondrawBox,
            SIGNAL(triggered(bool)),
            this,
            SLOT(changeToBoxMode()));

    connect(ui->actiondrawSphere,
            SIGNAL(triggered(bool)),
            this,
            SLOT(changeToSphereMode()));

    connect(ui->actiondrawEllipsoid,
            SIGNAL(triggered(bool)),
            this,
            SLOT(changeToEllipsoidMode()));


    // Save OFF

    connect(ui->actionExportOFF,
            SIGNAL(triggered(bool)),
            this,
            SLOT(saveOFF()));

    // New Plane

    connect(ui->actionNewPlane,
            SIGNAL(triggered(bool)),
            this,
            SLOT(newPlaneDialog()));

    // Exit

    connect(ui->actionQuit,
            SIGNAL(triggered(bool)),
            this,
            SLOT(exit_()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::drawChosenShape()
{
    switch(drawingMode)
    {
    case 0: // voxel
        if (ui->canvasplane->getLPressed()) putVoxel(); else cutVoxel();
        break;

    case 1: // box
        if (ui->canvasplane->getLPressed()) putBox(); else cutBox();
        break;

    case 2: // sphere
        if (ui->canvasplane->getLPressed()) putSphere(); else cutSphere();
        break;

    case 3: // ellipsoid
        if (ui->canvasplane->getLPressed()) putEllipsoid(); else cutEllipsoid();
        break;

    default:
        drawingMode = 0;
        break;
    }
}

void MainWindow::saveOFF()
{
    QMessageBox msgbox;
    QString filename = QFileDialog::getSaveFileName(this, "Salvar","/","OFF (*.off)");

    const char* fname = filename.toLocal8Bit().constData(); // casting go char*

    s->writeOFF(fname);
}

// void MainWindow::newPlane() { newPlaneDialog(); }

void MainWindow::exit_() {
    exit(0);
}

void MainWindow::newPlaneDialog()
{
    Dialog *d;
    d = new Dialog();
    d->exec();

    if (d->result() == QDialog::Accepted){

        ui->canvasplane->changeDimH(d->getSpinDialogX());
        ui->canvasplane->changeDimV(d->getSpinDialogY());
        ui->canvasplane->changeDimZ(d->getSpinDialogZ());

        Sculptor* temp = new Sculptor(ui->canvasplane->getDimH(),ui->canvasplane->getDimV(),ui->canvasplane->getDimZ());
        delete s;
        s = temp;

        fixInputsBoundaries();
        ui->canvasplane->loadPlane(s->getPlane(0));
    }

    delete d;
}

void MainWindow::changeToVoxelMode() {
    drawingMode = 0;
    ui->tabWidgetShapes->setTabVisible(0,false);
    ui->tabWidgetShapes->setTabVisible(1,false);
    ui->tabWidgetShapes->setTabVisible(2,false);
}
void MainWindow::changeToBoxMode() {
    drawingMode = 1;
    ui->tabWidgetShapes->setCurrentWidget(ui->boxTab);
    ui->tabWidgetShapes->setTabVisible(0,true);
    ui->tabWidgetShapes->setTabVisible(1,false);
    ui->tabWidgetShapes->setTabVisible(2,false);
}
void MainWindow::changeToSphereMode() {
    drawingMode = 2;
    ui->tabWidgetShapes->setCurrentWidget(ui->sphereTab);
    ui->tabWidgetShapes->setTabVisible(0,false);
    ui->tabWidgetShapes->setTabVisible(1,true);
    ui->tabWidgetShapes->setTabVisible(2,false);
}
void MainWindow::changeToEllipsoidMode() {
    drawingMode = 3;
    ui->tabWidgetShapes->setCurrentWidget(ui->ellipsoidTab);
    ui->tabWidgetShapes->setTabVisible(0,false);
    ui->tabWidgetShapes->setTabVisible(1,false);
    ui->tabWidgetShapes->setTabVisible(2,true);
}

void MainWindow::putVoxel() {

    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);

    s->putVoxel(ui->canvasplane->getCurrX(),
                ui->canvasplane->getCurrY(),
                ui->spinBoxSetPlane->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::cutVoxel()
{
    s->cutVoxel(ui->canvasplane->getCurrX(),
                ui->canvasplane->getCurrY(),
                ui->spinBoxSetPlane->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::putBox()
{
    int bw = ui->spinBoxBoxWidth->value();
    int bh = ui->spinBoxBoxHeight->value();
    int bd = ui->spinBoxBoxDepth->value();
    int xc = ui->canvasplane->getCurrX();
    int yc = ui->canvasplane->getCurrY();
    int zc = ui->spinBoxSetPlane->value();

    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);

    s->putBox(xc - bw/2, xc + bw/2,
              yc - bh/2, yc + bh/2,
              zc - bd/2, zc + bd/2);

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::cutBox()
{
    int bw = ui->spinBoxBoxWidth->value();
    int bh = ui->spinBoxBoxHeight->value();
    int bd = ui->spinBoxBoxDepth->value();
    int xc = ui->canvasplane->getCurrX();
    int yc = ui->canvasplane->getCurrY();
    int zc = ui->spinBoxSetPlane->value();

    s->cutBox(xc - bw/2, xc + bw/2,
              yc - bh/2, yc + bh/2,
              zc - bd/2, zc + bd/2);

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::putSphere()
{
    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);

    s->putSphere(ui->canvasplane->getCurrX(),
                 ui->canvasplane->getCurrY(),
                 ui->spinBoxSetPlane->value(),
                 ui->spinBoxSphereRadius->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::cutSphere()
{
    s->cutSphere(ui->canvasplane->getCurrX(),
                 ui->canvasplane->getCurrY(),
                 ui->spinBoxSetPlane->value(),
                 ui->spinBoxSphereRadius->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::putEllipsoid()
{
    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);

    s->putEllipsoid(ui->canvasplane->getCurrX(),
                 ui->canvasplane->getCurrY(),
                 ui->spinBoxSetPlane->value(),
                 ui->spinBoxEllipsoidWidth->value(),
                 ui->spinBoxEllipsoidHeight->value(),
                 ui->spinBoxEllipsoidDepth->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::cutEllipsoid()
{
    s->cutEllipsoid(ui->canvasplane->getCurrX(),
                 ui->canvasplane->getCurrY(),
                 ui->spinBoxSetPlane->value(),
                 ui->spinBoxEllipsoidWidth->value(),
                 ui->spinBoxEllipsoidHeight->value(),
                 ui->spinBoxEllipsoidDepth->value());

    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}

void MainWindow::setColor()
{
    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);
}

void MainWindow::fixInputsBoundaries()
{
    // Sphere and Ellipsoid maximum radius

    int maxradius = std::min((ui->canvasplane->getDimH() - 1)/2,
                        std::min((ui->canvasplane->getDimV() - 1)/2,(ui->canvasplane->getDimZ() - 1)/2));

    ui->spinBoxSphereRadius->setMaximum(maxradius);
    ui->horizontalSliderSphereRadius->setMaximum(maxradius);

    ui->spinBoxEllipsoidDepth->setMaximum(maxradius);
    ui->horizontalSliderEllipsoidDepth->setMaximum(maxradius);

    ui->spinBoxEllipsoidHeight->setMaximum(maxradius);
    ui->horizontalSliderEllipsoidHeight->setMaximum(maxradius);

    ui->spinBoxEllipsoidWidth->setMaximum(maxradius);
    ui->horizontalSliderEllipsoidWidth->setMaximum(maxradius);

    // Box boundaries

    ui->horizontalSliderBoxDepth->setMaximum(ui->canvasplane->getDimZ() - 1);
    ui->spinBoxBoxDepth->setMaximum(ui->canvasplane->getDimZ() - 1);

    ui->horizontalSliderBoxWidth->setMaximum(ui->canvasplane->getDimH() - 1);
    ui->spinBoxBoxWidth->setMaximum(ui->canvasplane->getDimH() - 1);

    ui->horizontalSliderBoxHeight->setMaximum(ui->canvasplane->getDimV() - 1);
    ui->spinBoxBoxHeight->setMaximum(ui->canvasplane->getDimV() - 1);

    // Maximum depth

    ui->horizontalSliderSetPlane->setMaximum(ui->canvasplane->getDimZ() - 1);
    ui->spinBoxSetPlane->setMaximum(ui->canvasplane->getDimZ() - 1);

    ui->horizontalSliderSetPlane->setValue(ui->canvasplane->getDimZ()/2);
    ui->spinBoxSetPlane->setValue(ui->canvasplane->getDimZ()/2);

}


void MainWindow::setPlane() {
    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}



