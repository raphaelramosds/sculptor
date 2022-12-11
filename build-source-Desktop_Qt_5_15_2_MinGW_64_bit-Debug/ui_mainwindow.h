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
    QAction *actionsetColor;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    CanvasPlane *widget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *boxTab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_3;
    QSlider *horizontalSlider_3;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBox_4;
    QSlider *horizontalSlider_4;
    QSpacerItem *verticalSpacer;
    QWidget *sphereTab;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinBox_5;
    QSlider *horizontalSlider_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *ellipsoidTab;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_4;
    QSpinBox *spinBox_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QSpinBox *spinBox_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QSpinBox *spinBox_7;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(775, 416);
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
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget = new CanvasPlane(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setMinimumSize(QSize(450, 225));
        widget->setAutoFillBackground(true);

        horizontalLayout_5->addWidget(widget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(200, 16777215));
        boxTab = new QWidget();
        boxTab->setObjectName(QString::fromUtf8("boxTab"));
        verticalLayout_4 = new QVBoxLayout(boxTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(boxTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 60));
        groupBox_2->setMaximumSize(QSize(16777215, 60));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 27, 241, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_2);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(boxTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 60));
        groupBox_3->setMaximumSize(QSize(16777215, 60));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 21, 241, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_3 = new QSpinBox(layoutWidget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_3->addWidget(spinBox_3);

        horizontalSlider_3 = new QSlider(layoutWidget1);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_3);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(boxTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 60));
        groupBox_4->setMaximumSize(QSize(16777215, 60));
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 21, 241, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBox_4 = new QSpinBox(layoutWidget2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_4->addWidget(spinBox_4);

        horizontalSlider_4 = new QSlider(layoutWidget2);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_4);


        verticalLayout_3->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(boxTab, QString());
        sphereTab = new QWidget();
        sphereTab->setObjectName(QString::fromUtf8("sphereTab"));
        layoutWidget3 = new QWidget(sphereTab);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 181, 314));
        verticalLayout_8 = new QVBoxLayout(layoutWidget3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        horizontalLayout_8 = new QHBoxLayout(groupBox_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        spinBox_5 = new QSpinBox(groupBox_5);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        horizontalLayout_6->addWidget(spinBox_5);

        horizontalSlider_5 = new QSlider(groupBox_5);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_5);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_8->addWidget(groupBox_5);

        verticalSpacer_2 = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        tabWidget->addTab(sphereTab, QString());
        ellipsoidTab = new QWidget();
        ellipsoidTab->setObjectName(QString::fromUtf8("ellipsoidTab"));
        layoutWidget4 = new QWidget(ellipsoidTab);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 10, 181, 241));
        verticalLayout_16 = new QVBoxLayout(layoutWidget4);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        groupBox_7 = new QGroupBox(layoutWidget4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout_11->addWidget(label_4);

        spinBox_10 = new QSpinBox(groupBox_7);
        spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));

        verticalLayout_11->addWidget(spinBox_10);


        horizontalLayout_10->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_10->addWidget(label_5);

        spinBox_11 = new QSpinBox(groupBox_7);
        spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));

        verticalLayout_10->addWidget(spinBox_11);


        horizontalLayout_10->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(groupBox_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_9->addWidget(label_6);

        spinBox_7 = new QSpinBox(groupBox_7);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));

        verticalLayout_9->addWidget(spinBox_7);


        horizontalLayout_10->addLayout(verticalLayout_9);


        verticalLayout_15->addWidget(groupBox_7);


        verticalLayout_16->addLayout(verticalLayout_15);

        verticalSpacer_3 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_3);

        tabWidget->addTab(ellipsoidTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMaximumSize(QSize(200, 60));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_5->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 775, 22));
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

        tabWidget->setCurrentIndex(1);


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
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Largura", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Altura", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Profundidade", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(boxTab), QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sphereTab), QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ellipsoidTab), QCoreApplication::translate("MainWindow", "Elips\303\263ide", nullptr));
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
