#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSpinBox>>

namespace Ui {
class Dialog;
}

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
