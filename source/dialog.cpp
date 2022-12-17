#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->pushButtonReset,
            SIGNAL(triggered(bool)),
            this,
            SLOT(resetDialog()));
}

Dialog::~Dialog()
{
    delete ui;
}

int Dialog::getSpinDialogX()
{
    return ui->spinBoxX->value();
}

int Dialog::getSpinDialogY()
{
    return ui->spinBoxY->value();
}

int Dialog::getSpinDialogZ()
{
    return ui->spinBoxZ->value();
}

void Dialog::resetDialog()
{
    ui->spinBoxX->setValue(0);
    ui->spinBoxY->setValue(0);
    ui->spinBoxZ->setValue(0);
}
