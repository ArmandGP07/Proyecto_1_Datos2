/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *instrucciones;
    QFrame *frame;
    QPushButton *tarjeta01;
    QPushButton *tarjeta05;
    QPushButton *tarjeta09;
    QPushButton *tarjeta02;
    QPushButton *tarjeta06;
    QPushButton *tarjeta10;
    QPushButton *tarjeta03;
    QPushButton *tarjeta04;
    QPushButton *tarjeta08;
    QPushButton *tarjeta12;
    QPushButton *tarjeta07;
    QPushButton *tarjeta11;
    QLabel *cronometro;
    QLabel *puntuacion;
    QLabel *lblPuntaje;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(510, 730);
        QFont font;
        font.setFamily(QString::fromUtf8("8514oem"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background-image: url(:/Fondo/Fondo.jpg);\n"
"border-image: url(:/Fondo/Fondo.jpg);\n"
"}\n"
"\n"
"#instrucciones {\n"
"color: white;\n"
"}\n"
"\n"
"#cronometro {\n"
"color: white;\n"
"}\n"
"\n"
"#puntiacion {\n"
"color: white;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        instrucciones = new QLabel(centralwidget);
        instrucciones->setObjectName(QString::fromUtf8("instrucciones"));
        instrucciones->setGeometry(QRect(0, -10, 511, 71));
        instrucciones->setFont(font);
        instrucciones->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 90, 451, 461));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tarjeta01 = new QPushButton(frame);
        tarjeta01->setObjectName(QString::fromUtf8("tarjeta01"));
        tarjeta01->setGeometry(QRect(10, 10, 100, 140));
        tarjeta05 = new QPushButton(frame);
        tarjeta05->setObjectName(QString::fromUtf8("tarjeta05"));
        tarjeta05->setGeometry(QRect(10, 160, 100, 140));
        tarjeta09 = new QPushButton(frame);
        tarjeta09->setObjectName(QString::fromUtf8("tarjeta09"));
        tarjeta09->setGeometry(QRect(10, 310, 100, 140));
        tarjeta02 = new QPushButton(frame);
        tarjeta02->setObjectName(QString::fromUtf8("tarjeta02"));
        tarjeta02->setGeometry(QRect(120, 10, 100, 140));
        tarjeta06 = new QPushButton(frame);
        tarjeta06->setObjectName(QString::fromUtf8("tarjeta06"));
        tarjeta06->setGeometry(QRect(120, 160, 100, 140));
        tarjeta10 = new QPushButton(frame);
        tarjeta10->setObjectName(QString::fromUtf8("tarjeta10"));
        tarjeta10->setGeometry(QRect(120, 310, 100, 140));
        tarjeta03 = new QPushButton(frame);
        tarjeta03->setObjectName(QString::fromUtf8("tarjeta03"));
        tarjeta03->setGeometry(QRect(230, 10, 100, 140));
        tarjeta04 = new QPushButton(frame);
        tarjeta04->setObjectName(QString::fromUtf8("tarjeta04"));
        tarjeta04->setGeometry(QRect(340, 9, 100, 140));
        tarjeta08 = new QPushButton(frame);
        tarjeta08->setObjectName(QString::fromUtf8("tarjeta08"));
        tarjeta08->setGeometry(QRect(340, 160, 100, 140));
        tarjeta12 = new QPushButton(frame);
        tarjeta12->setObjectName(QString::fromUtf8("tarjeta12"));
        tarjeta12->setGeometry(QRect(340, 310, 100, 140));
        tarjeta07 = new QPushButton(frame);
        tarjeta07->setObjectName(QString::fromUtf8("tarjeta07"));
        tarjeta07->setGeometry(QRect(230, 160, 100, 140));
        tarjeta11 = new QPushButton(frame);
        tarjeta11->setObjectName(QString::fromUtf8("tarjeta11"));
        tarjeta11->setGeometry(QRect(230, 310, 100, 141));
        cronometro = new QLabel(centralwidget);
        cronometro->setObjectName(QString::fromUtf8("cronometro"));
        cronometro->setGeometry(QRect(0, 40, 261, 51));
        cronometro->setFont(font);
        cronometro->setAlignment(Qt::AlignCenter);
        puntuacion = new QLabel(centralwidget);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setGeometry(QRect(250, 40, 261, 51));
        puntuacion->setFont(font);
        puntuacion->setAlignment(Qt::AlignCenter);
        lblPuntaje = new QLabel(centralwidget);
        lblPuntaje->setObjectName(QString::fromUtf8("lblPuntaje"));
        lblPuntaje->setGeometry(QRect(420, 40, 91, 51));
        lblPuntaje->setFont(font);
        lblPuntaje->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        instrucciones->setText(QApplication::translate("MainWindow", "HAS CLICK EN DOS TARJETAS PARA QUE COINCIDAN", nullptr));
        tarjeta01->setText(QString());
        tarjeta05->setText(QString());
        tarjeta09->setText(QString());
        tarjeta02->setText(QString());
        tarjeta06->setText(QString());
        tarjeta10->setText(QString());
        tarjeta03->setText(QString());
        tarjeta04->setText(QString());
        tarjeta08->setText(QString());
        tarjeta12->setText(QString());
        tarjeta07->setText(QString());
        tarjeta11->setText(QString());
        cronometro->setText(QApplication::translate("MainWindow", "CRONOMETRO", nullptr));
        puntuacion->setText(QApplication::translate("MainWindow", "PUNTUACION", nullptr));
        lblPuntaje->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
