#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSpinBox>>

namespace Ui {
class Dialog;
}


/**
* @brief Tiny menu where the user may want to set the dimensions X (lines), Y (cols) and Z (planes) of his sculpture
* */

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    int getSpinDialogX();
    int getSpinDialogY();
    int getSpinDialogZ();

public slots:
    void resetDialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
