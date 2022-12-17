/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    CanvasPlane *canvasplane;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_13;
    QTabWidget *tabWidgetShapes;
    QWidget *boxTab;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBoxBoxWidth;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBoxBoxWidth;
    QSlider *horizontalSliderBoxWidth;
    QGroupBox *groupBoxBoxHeight;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBoxBoxHeight;
    QSlider *horizontalSliderBoxHeight;
    QGroupBox *groupBoxBoxDepth;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBoxBoxDepth;
    QSlider *horizontalSliderBoxDepth;
    QSpacerItem *verticalSpacer;
    QWidget *sphereTab;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinBoxSphereRadius;
    QSlider *horizontalSliderSphereRadius;
    QSpacerItem *verticalSpacer_2;
    QWidget *ellipsoidTab;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxEllipsoidWidth;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBoxEllipsoidWidth;
    QSlider *horizontalSliderEllipsoidWidth;
    QGroupBox *groupBoxEllipsoidHeight;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *spinBoxEllipsoidHeight;
    QSlider *horizontalSliderEllipsoidHeight;
    QGroupBox *groupBoxEllipsoidDepth;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBoxEllipsoidDepth;
    QSlider *horizontalSliderEllipsoidDepth;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBoxSetColor;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSlider *horizontalSliderSetRed;
    QSpinBox *spinBoxSetRed;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QSlider *horizontalSliderSetGreen;
    QSpinBox *spinBoxSetGreen;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSlider *horizontalSliderSetBlue;
    QSpinBox *spinBoxSetBlue;
    QGroupBox *groupBoxSetPlane;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderSetPlane;
    QSpinBox *spinBoxSetPlane;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1232, 963);
        MainWindow->setMinimumSize(QSize(0, 0));
        actionExportOFF = new QAction(MainWindow);
        actionExportOFF->setObjectName("actionExportOFF");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionNewPlane = new QAction(MainWindow);
        actionNewPlane->setObjectName("actionNewPlane");
        actiondrawVoxel = new QAction(MainWindow);
        actiondrawVoxel->setObjectName("actiondrawVoxel");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/recursos/voxel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawVoxel->setIcon(icon);
        actiondrawBox = new QAction(MainWindow);
        actiondrawBox->setObjectName("actiondrawBox");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/recursos/box.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawBox->setIcon(icon1);
        actiondrawSphere = new QAction(MainWindow);
        actiondrawSphere->setObjectName("actiondrawSphere");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/recursos/esfera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawSphere->setIcon(icon2);
        actiondrawEllipsoid = new QAction(MainWindow);
        actiondrawEllipsoid->setObjectName("actiondrawEllipsoid");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/recursos/elipsoide.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiondrawEllipsoid->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_13 = new QHBoxLayout(centralwidget);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        canvasplane = new CanvasPlane(centralwidget);
        canvasplane->setObjectName("canvasplane");
        canvasplane->setEnabled(true);
        canvasplane->setMinimumSize(QSize(200, 200));
        canvasplane->setMaximumSize(QSize(900, 900));
        canvasplane->setLayoutDirection(Qt::LeftToRight);
        canvasplane->setAutoFillBackground(true);

        verticalLayout_2->addWidget(canvasplane);


        horizontalLayout_13->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        tabWidgetShapes = new QTabWidget(centralwidget);
        tabWidgetShapes->setObjectName("tabWidgetShapes");
        tabWidgetShapes->setMinimumSize(QSize(200, 0));
        tabWidgetShapes->setMaximumSize(QSize(200, 300));
        boxTab = new QWidget();
        boxTab->setObjectName("boxTab");
        boxTab->setEnabled(true);
        verticalLayout_18 = new QVBoxLayout(boxTab);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBoxBoxWidth = new QGroupBox(boxTab);
        groupBoxBoxWidth->setObjectName("groupBoxBoxWidth");
        groupBoxBoxWidth->setMinimumSize(QSize(0, 60));
        groupBoxBoxWidth->setMaximumSize(QSize(16777215, 60));
        verticalLayout_3 = new QVBoxLayout(groupBoxBoxWidth);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        spinBoxBoxWidth = new QSpinBox(groupBoxBoxWidth);
        spinBoxBoxWidth->setObjectName("spinBoxBoxWidth");

        horizontalLayout_3->addWidget(spinBoxBoxWidth);

        horizontalSliderBoxWidth = new QSlider(groupBoxBoxWidth);
        horizontalSliderBoxWidth->setObjectName("horizontalSliderBoxWidth");
        horizontalSliderBoxWidth->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderBoxWidth);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_7->addWidget(groupBoxBoxWidth);

        groupBoxBoxHeight = new QGroupBox(boxTab);
        groupBoxBoxHeight->setObjectName("groupBoxBoxHeight");
        groupBoxBoxHeight->setMinimumSize(QSize(0, 60));
        groupBoxBoxHeight->setMaximumSize(QSize(16777215, 60));
        verticalLayout_5 = new QVBoxLayout(groupBoxBoxHeight);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spinBoxBoxHeight = new QSpinBox(groupBoxBoxHeight);
        spinBoxBoxHeight->setObjectName("spinBoxBoxHeight");

        horizontalLayout_2->addWidget(spinBoxBoxHeight);

        horizontalSliderBoxHeight = new QSlider(groupBoxBoxHeight);
        horizontalSliderBoxHeight->setObjectName("horizontalSliderBoxHeight");
        horizontalSliderBoxHeight->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderBoxHeight);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(groupBoxBoxHeight);

        groupBoxBoxDepth = new QGroupBox(boxTab);
        groupBoxBoxDepth->setObjectName("groupBoxBoxDepth");
        groupBoxBoxDepth->setMinimumSize(QSize(0, 60));
        groupBoxBoxDepth->setMaximumSize(QSize(16777215, 60));
        verticalLayout_6 = new QVBoxLayout(groupBoxBoxDepth);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        spinBoxBoxDepth = new QSpinBox(groupBoxBoxDepth);
        spinBoxBoxDepth->setObjectName("spinBoxBoxDepth");

        horizontalLayout_4->addWidget(spinBoxBoxDepth);

        horizontalSliderBoxDepth = new QSlider(groupBoxBoxDepth);
        horizontalSliderBoxDepth->setObjectName("horizontalSliderBoxDepth");
        horizontalSliderBoxDepth->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderBoxDepth);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addWidget(groupBoxBoxDepth);


        verticalLayout_12->addLayout(verticalLayout_7);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);


        verticalLayout_18->addLayout(verticalLayout_12);

        tabWidgetShapes->addTab(boxTab, QString());
        sphereTab = new QWidget();
        sphereTab->setObjectName("sphereTab");
        verticalLayout_17 = new QVBoxLayout(sphereTab);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_5 = new QGroupBox(sphereTab);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(0, 0));
        horizontalLayout_8 = new QHBoxLayout(groupBox_5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        spinBoxSphereRadius = new QSpinBox(groupBox_5);
        spinBoxSphereRadius->setObjectName("spinBoxSphereRadius");

        horizontalLayout_6->addWidget(spinBoxSphereRadius);

        horizontalSliderSphereRadius = new QSlider(groupBox_5);
        horizontalSliderSphereRadius->setObjectName("horizontalSliderSphereRadius");
        horizontalSliderSphereRadius->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderSphereRadius);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_8->addWidget(groupBox_5);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        verticalLayout_17->addLayout(verticalLayout_8);

        tabWidgetShapes->addTab(sphereTab, QString());
        ellipsoidTab = new QWidget();
        ellipsoidTab->setObjectName("ellipsoidTab");
        verticalLayout_14 = new QVBoxLayout(ellipsoidTab);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBoxEllipsoidWidth = new QGroupBox(ellipsoidTab);
        groupBoxEllipsoidWidth->setObjectName("groupBoxEllipsoidWidth");
        groupBoxEllipsoidWidth->setMinimumSize(QSize(0, 60));
        groupBoxEllipsoidWidth->setMaximumSize(QSize(16777215, 60));
        verticalLayout_9 = new QVBoxLayout(groupBoxEllipsoidWidth);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        spinBoxEllipsoidWidth = new QSpinBox(groupBoxEllipsoidWidth);
        spinBoxEllipsoidWidth->setObjectName("spinBoxEllipsoidWidth");

        horizontalLayout_7->addWidget(spinBoxEllipsoidWidth);

        horizontalSliderEllipsoidWidth = new QSlider(groupBoxEllipsoidWidth);
        horizontalSliderEllipsoidWidth->setObjectName("horizontalSliderEllipsoidWidth");
        horizontalSliderEllipsoidWidth->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSliderEllipsoidWidth);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(groupBoxEllipsoidWidth);

        groupBoxEllipsoidHeight = new QGroupBox(ellipsoidTab);
        groupBoxEllipsoidHeight->setObjectName("groupBoxEllipsoidHeight");
        groupBoxEllipsoidHeight->setMinimumSize(QSize(0, 60));
        groupBoxEllipsoidHeight->setMaximumSize(QSize(16777215, 60));
        verticalLayout_11 = new QVBoxLayout(groupBoxEllipsoidHeight);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        spinBoxEllipsoidHeight = new QSpinBox(groupBoxEllipsoidHeight);
        spinBoxEllipsoidHeight->setObjectName("spinBoxEllipsoidHeight");

        horizontalLayout_10->addWidget(spinBoxEllipsoidHeight);

        horizontalSliderEllipsoidHeight = new QSlider(groupBoxEllipsoidHeight);
        horizontalSliderEllipsoidHeight->setObjectName("horizontalSliderEllipsoidHeight");
        horizontalSliderEllipsoidHeight->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSliderEllipsoidHeight);


        verticalLayout_11->addLayout(horizontalLayout_10);


        verticalLayout_4->addWidget(groupBoxEllipsoidHeight);

        groupBoxEllipsoidDepth = new QGroupBox(ellipsoidTab);
        groupBoxEllipsoidDepth->setObjectName("groupBoxEllipsoidDepth");
        groupBoxEllipsoidDepth->setMinimumSize(QSize(0, 60));
        groupBoxEllipsoidDepth->setMaximumSize(QSize(16777215, 60));
        verticalLayout_10 = new QVBoxLayout(groupBoxEllipsoidDepth);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        spinBoxEllipsoidDepth = new QSpinBox(groupBoxEllipsoidDepth);
        spinBoxEllipsoidDepth->setObjectName("spinBoxEllipsoidDepth");

        horizontalLayout_9->addWidget(spinBoxEllipsoidDepth);

        horizontalSliderEllipsoidDepth = new QSlider(groupBoxEllipsoidDepth);
        horizontalSliderEllipsoidDepth->setObjectName("horizontalSliderEllipsoidDepth");
        horizontalSliderEllipsoidDepth->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSliderEllipsoidDepth);


        verticalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_4->addWidget(groupBoxEllipsoidDepth);

        verticalSpacer_3 = new QSpacerItem(18, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout_14->addLayout(verticalLayout_4);

        tabWidgetShapes->addTab(ellipsoidTab, QString());

        verticalLayout_13->addWidget(tabWidgetShapes);

        groupBoxSetColor = new QGroupBox(centralwidget);
        groupBoxSetColor->setObjectName("groupBoxSetColor");
        groupBoxSetColor->setMinimumSize(QSize(0, 0));
        groupBoxSetColor->setMaximumSize(QSize(200, 16777215));
        groupBoxSetColor->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(groupBoxSetColor);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(groupBoxSetColor);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSliderSetRed = new QSlider(groupBoxSetColor);
        horizontalSliderSetRed->setObjectName("horizontalSliderSetRed");
        horizontalSliderSetRed->setMaximum(255);
        horizontalSliderSetRed->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderSetRed);

        spinBoxSetRed = new QSpinBox(groupBoxSetColor);
        spinBoxSetRed->setObjectName("spinBoxSetRed");
        spinBoxSetRed->setMaximum(255);

        horizontalLayout_5->addWidget(spinBoxSetRed);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_2 = new QLabel(groupBoxSetColor);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_11->addWidget(label_2);

        horizontalSliderSetGreen = new QSlider(groupBoxSetColor);
        horizontalSliderSetGreen->setObjectName("horizontalSliderSetGreen");
        horizontalSliderSetGreen->setMaximum(255);
        horizontalSliderSetGreen->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSliderSetGreen);

        spinBoxSetGreen = new QSpinBox(groupBoxSetColor);
        spinBoxSetGreen->setObjectName("spinBoxSetGreen");
        spinBoxSetGreen->setMaximum(255);

        horizontalLayout_11->addWidget(spinBoxSetGreen);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_3 = new QLabel(groupBoxSetColor);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_12->addWidget(label_3);

        horizontalSliderSetBlue = new QSlider(groupBoxSetColor);
        horizontalSliderSetBlue->setObjectName("horizontalSliderSetBlue");
        horizontalSliderSetBlue->setMaximum(255);
        horizontalSliderSetBlue->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSliderSetBlue);

        spinBoxSetBlue = new QSpinBox(groupBoxSetColor);
        spinBoxSetBlue->setObjectName("spinBoxSetBlue");
        spinBoxSetBlue->setMaximum(255);

        horizontalLayout_12->addWidget(spinBoxSetBlue);


        verticalLayout->addLayout(horizontalLayout_12);


        verticalLayout_13->addWidget(groupBoxSetColor);

        groupBoxSetPlane = new QGroupBox(centralwidget);
        groupBoxSetPlane->setObjectName("groupBoxSetPlane");
        groupBoxSetPlane->setEnabled(true);
        groupBoxSetPlane->setMinimumSize(QSize(0, 50));
        groupBoxSetPlane->setMaximumSize(QSize(200, 60));
        verticalLayout_16 = new QVBoxLayout(groupBoxSetPlane);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSliderSetPlane = new QSlider(groupBoxSetPlane);
        horizontalSliderSetPlane->setObjectName("horizontalSliderSetPlane");
        horizontalSliderSetPlane->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderSetPlane);

        spinBoxSetPlane = new QSpinBox(groupBoxSetPlane);
        spinBoxSetPlane->setObjectName("spinBoxSetPlane");

        horizontalLayout->addWidget(spinBoxSetPlane);


        verticalLayout_16->addLayout(horizontalLayout);


        verticalLayout_13->addWidget(groupBoxSetPlane);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_4);


        horizontalLayout_13->addLayout(verticalLayout_13);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1232, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
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

        retranslateUi(MainWindow);

        tabWidgetShapes->setCurrentIndex(0);


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
        groupBoxBoxWidth->setTitle(QCoreApplication::translate("MainWindow", "Largura", nullptr));
        groupBoxBoxHeight->setTitle(QCoreApplication::translate("MainWindow", "Altura", nullptr));
        groupBoxBoxDepth->setTitle(QCoreApplication::translate("MainWindow", "Profundidade", nullptr));
        tabWidgetShapes->setTabText(tabWidgetShapes->indexOf(boxTab), QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        tabWidgetShapes->setTabText(tabWidgetShapes->indexOf(sphereTab), QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        groupBoxEllipsoidWidth->setTitle(QCoreApplication::translate("MainWindow", "Largura", nullptr));
        groupBoxEllipsoidHeight->setTitle(QCoreApplication::translate("MainWindow", "Altura", nullptr));
        groupBoxEllipsoidDepth->setTitle(QCoreApplication::translate("MainWindow", "Profundidade", nullptr));
        tabWidgetShapes->setTabText(tabWidgetShapes->indexOf(ellipsoidTab), QCoreApplication::translate("MainWindow", "Elips\303\263ide", nullptr));
        groupBoxSetColor->setTitle(QCoreApplication::translate("MainWindow", "Selecionar cor", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        groupBoxSetPlane->setTitle(QCoreApplication::translate("MainWindow", "N\302\260 Plano de visualiza\303\247\303\243o", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
