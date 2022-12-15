#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Carrega a interface

    ui->setupUi(this);

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

    // Set color groupbox SIGNALS->SLOTS

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

    // Set plane groupbox SIGNALS->SLOTS

    connect(
        ui->horizontalSliderSetPlane,
        SIGNAL(valueChanged(int)),
        ui->spinBoxSetPlane,
        SLOT(setValue(int))
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}
