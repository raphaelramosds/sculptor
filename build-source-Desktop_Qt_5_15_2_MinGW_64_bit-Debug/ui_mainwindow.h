/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <canvasplane.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportar;
    QAction *actionSair;
    QAction *actionNovo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonVoxel;
    QPushButton *pushButtonBox;
    QPushButton *pushButtonSphere;
    QPushButton *pushButtonEllipsoid;
    QPushButton *pushButtonSetColor;
    QSpacerItem *horizontalSpacer;
    CanvasPlane *widget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(762, 354);
        MainWindow->setMinimumSize(QSize(0, 0));
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QString::fromUtf8("actionExportar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(200, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonVoxel = new QPushButton(centralwidget);
        pushButtonVoxel->setObjectName(QString::fromUtf8("pushButtonVoxel"));
        pushButtonVoxel->setMinimumSize(QSize(60, 60));
        pushButtonVoxel->setMaximumSize(QSize(100, 60));
        pushButtonVoxel->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/recursos/voxel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonVoxel->setIcon(icon);
        pushButtonVoxel->setIconSize(QSize(70, 70));

        horizontalLayout_2->addWidget(pushButtonVoxel);

        pushButtonBox = new QPushButton(centralwidget);
        pushButtonBox->setObjectName(QString::fromUtf8("pushButtonBox"));
        pushButtonBox->setMinimumSize(QSize(60, 60));
        pushButtonBox->setMaximumSize(QSize(100, 60));
        pushButtonBox->setAutoFillBackground(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/recursos/box.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBox->setIcon(icon1);
        pushButtonBox->setIconSize(QSize(70, 70));

        horizontalLayout_2->addWidget(pushButtonBox);

        pushButtonSphere = new QPushButton(centralwidget);
        pushButtonSphere->setObjectName(QString::fromUtf8("pushButtonSphere"));
        pushButtonSphere->setMinimumSize(QSize(60, 60));
        pushButtonSphere->setMaximumSize(QSize(100, 60));
        pushButtonSphere->setAutoFillBackground(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/recursos/esfera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSphere->setIcon(icon2);
        pushButtonSphere->setIconSize(QSize(70, 70));

        horizontalLayout_2->addWidget(pushButtonSphere);

        pushButtonEllipsoid = new QPushButton(centralwidget);
        pushButtonEllipsoid->setObjectName(QString::fromUtf8("pushButtonEllipsoid"));
        pushButtonEllipsoid->setMinimumSize(QSize(60, 60));
        pushButtonEllipsoid->setMaximumSize(QSize(100, 60));
        pushButtonEllipsoid->setAutoFillBackground(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/recursos/elipsoide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEllipsoid->setIcon(icon3);
        pushButtonEllipsoid->setIconSize(QSize(70, 70));

        horizontalLayout_2->addWidget(pushButtonEllipsoid);

        pushButtonSetColor = new QPushButton(centralwidget);
        pushButtonSetColor->setObjectName(QString::fromUtf8("pushButtonSetColor"));
        pushButtonSetColor->setMinimumSize(QSize(60, 60));
        pushButtonSetColor->setMaximumSize(QSize(100, 60));
        pushButtonSetColor->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonSetColor->setAutoFillBackground(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/recursos/setcolor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSetColor->setIcon(icon4);
        pushButtonSetColor->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(pushButtonSetColor);

        horizontalSpacer = new QSpacerItem(228, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        widget = new CanvasPlane(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setAutoFillBackground(true);

        gridLayout->addWidget(widget, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 762, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionExportar);
        menuArquivo->addAction(actionSair);

        retranslateUi(MainWindow);

        pushButtonVoxel->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExportar->setText(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "N\302\260 Plano de visualiza\303\247\303\243o", nullptr));
        pushButtonVoxel->setText(QString());
        pushButtonBox->setText(QString());
        pushButtonSphere->setText(QString());
        pushButtonEllipsoid->setText(QString());
        pushButtonSetColor->setText(QString());
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
