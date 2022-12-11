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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <canvasplane.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportOFF;
    QAction *actionQuit;
    QAction *actionNewPlane;
    QAction *actiondrawVoxel;
    QAction *actiondrawBox;
    QAction *actiondrawSphere;
    QAction *actiondrawEllipsoid;
    QAction *actionsetColor;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    CanvasPlane *widget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(434, 354);
        MainWindow->setMinimumSize(QSize(0, 0));
        actionExportOFF = new QAction(MainWindow);
        actionExportOFF->setObjectName(QString::fromUtf8("actionExportOFF"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionNewPlane = new QAction(MainWindow);
        actionNewPlane->setObjectName(QString::fromUtf8("actionNewPlane"));
        actiondrawVoxel = new QAction(MainWindow);
        actiondrawVoxel->setObjectName(QString::fromUtf8("actiondrawVoxel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/recursos/voxel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawVoxel->setIcon(icon);
        actiondrawBox = new QAction(MainWindow);
        actiondrawBox->setObjectName(QString::fromUtf8("actiondrawBox"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/recursos/box.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawBox->setIcon(icon1);
        actiondrawSphere = new QAction(MainWindow);
        actiondrawSphere->setObjectName(QString::fromUtf8("actiondrawSphere"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/recursos/esfera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawSphere->setIcon(icon2);
        actiondrawEllipsoid = new QAction(MainWindow);
        actiondrawEllipsoid->setObjectName(QString::fromUtf8("actiondrawEllipsoid"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/recursos/elipsoide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawEllipsoid->setIcon(icon3);
        actionsetColor = new QAction(MainWindow);
        actionsetColor->setObjectName(QString::fromUtf8("actionsetColor"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/recursos/setcolor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsetColor->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new CanvasPlane(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setMinimumSize(QSize(0, 0));
        widget->setAutoFillBackground(true);

        verticalLayout_2->addWidget(widget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 60));
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

        horizontalSpacer = new QSpacerItem(228, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 434, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(64, 64));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionNewPlane);
        menuArquivo->addAction(actionExportOFF);
        menuArquivo->addAction(actionQuit);
        toolBar->addSeparator();
        toolBar->addAction(actiondrawVoxel);
        toolBar->addAction(actiondrawBox);
        toolBar->addAction(actiondrawSphere);
        toolBar->addAction(actiondrawEllipsoid);
        toolBar->addAction(actionsetColor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExportOFF->setText(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionNewPlane->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actiondrawVoxel->setText(QCoreApplication::translate("MainWindow", "drawVoxel", nullptr));
        actiondrawBox->setText(QCoreApplication::translate("MainWindow", "drawBox", nullptr));
        actiondrawSphere->setText(QCoreApplication::translate("MainWindow", "drawSphere", nullptr));
        actiondrawEllipsoid->setText(QCoreApplication::translate("MainWindow", "drawEllipsoid", nullptr));
        actionsetColor->setText(QCoreApplication::translate("MainWindow", "setColor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "N\302\260 Plano de visualiza\303\247\303\243o", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
