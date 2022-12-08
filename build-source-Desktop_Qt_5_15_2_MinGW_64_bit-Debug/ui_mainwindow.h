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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    CanvasPlane *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QFrame *frame_3;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(524, 452);
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QString::fromUtf8("actionExportar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(2000, 16777215));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new CanvasPlane(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setMinimumSize(QSize(400, 400));
        widget->setMaximumSize(QSize(2000, 2000));

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 60));
        pushButton->setMaximumSize(QSize(100, 60));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 60));
        pushButton_3->setMaximumSize(QSize(100, 60));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 60));
        pushButton_2->setMaximumSize(QSize(100, 60));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 60));
        pushButton_5->setMaximumSize(QSize(100, 60));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(100, 60));
        pushButton_6->setMaximumSize(QSize(100, 60));

        verticalLayout->addWidget(pushButton_6);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_3);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 524, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionExportar);
        menuArquivo->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExportar->setText(QCoreApplication::translate("MainWindow", "Exportar", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Elips\303\263ide", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Selecionar cor", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
