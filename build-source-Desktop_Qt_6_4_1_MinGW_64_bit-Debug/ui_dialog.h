/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxX;
    QSpinBox *spinBoxY;
    QSpinBox *spinBoxZ;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonReset;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(480, 300);
        Dialog->setMinimumSize(QSize(480, 300));
        Dialog->setMaximumSize(QSize(480, 300));
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBoxX = new QSpinBox(Dialog);
        spinBoxX->setObjectName("spinBoxX");
        spinBoxX->setMinimum(1);
        spinBoxX->setMaximum(99);
        spinBoxX->setValue(40);

        horizontalLayout->addWidget(spinBoxX);

        spinBoxY = new QSpinBox(Dialog);
        spinBoxY->setObjectName("spinBoxY");
        spinBoxY->setMinimum(1);
        spinBoxY->setMaximum(99);
        spinBoxY->setValue(40);

        horizontalLayout->addWidget(spinBoxY);

        spinBoxZ = new QSpinBox(Dialog);
        spinBoxZ->setObjectName("spinBoxZ");
        spinBoxZ->setMinimum(1);
        spinBoxZ->setValue(40);

        horizontalLayout->addWidget(spinBoxZ);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);

        pushButtonReset = new QPushButton(Dialog);
        pushButtonReset->setObjectName("pushButtonReset");
        pushButtonReset->setMaximumSize(QSize(105, 24));
        pushButtonReset->setLayoutDirection(Qt::RightToLeft);
        pushButtonReset->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButtonReset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("Dialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
