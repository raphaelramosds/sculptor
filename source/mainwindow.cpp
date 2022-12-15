#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Load MainWindows

    ui->setupUi(this);

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

    // Fixing shapes inputs according to the 3d matrix dimensions

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

    // Conexão para testar os metodos da classe Sculptor.
    // Ponha o nome do método implementado dentro de SLOT()

    connect(
        ui->canvasplane,
        SIGNAL(trigCurrPosition(int,int)),
        this,
        SLOT(putEllipsoid())
    );
}

MainWindow::~MainWindow() {
    delete ui;
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

void MainWindow::setColor()
{
    s->setColor((float) ui->spinBoxSetRed->value()/255,
                (float) ui->spinBoxSetGreen->value()/255,
                (float) ui->spinBoxSetBlue->value()/255,
                1.0);
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

void MainWindow::setPlane() {
    ui->canvasplane->loadPlane(s->getPlane(ui->spinBoxSetPlane->value()));
}
