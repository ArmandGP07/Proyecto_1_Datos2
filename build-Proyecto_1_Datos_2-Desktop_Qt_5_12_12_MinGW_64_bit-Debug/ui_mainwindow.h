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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *instrucciones;
    QLabel *cronometro;
    QLabel *puntuacion;
    QLabel *lblPuntaje;
    QFrame *frame;
    QPushButton *tarjeta10;
    QPushButton *tarjeta05;
    QPushButton *tarjeta06;
    QPushButton *tarjeta09;
    QPushButton *tarjeta07;
    QPushButton *tarjeta03;
    QPushButton *tarjeta11;
    QPushButton *tarjeta01;
    QPushButton *tarjeta04;
    QPushButton *tarjeta12;
    QPushButton *tarjeta02;
    QPushButton *tarjeta08;
    QPushButton *conectar;
    QPushButton *desconectar;
    QLineEdit *nombreServidor;
    QLabel *labelServidor;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(802, 674);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"background-image: url(://fondo.png);\n"
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
"#puntuacion {\n"
"color: white;\n"
"}\n"
"\n"
"#lblPuntaje {\n"
"qproperty-alignment: AlignCenter;\n"
"color: white;\n"
"background: teal;\n"
"border: 3px solid silver;\n"
"border-radius: 7px;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        instrucciones = new QLabel(centralWidget);
        instrucciones->setObjectName(QString::fromUtf8("instrucciones"));
        instrucciones->setGeometry(QRect(160, 40, 471, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        instrucciones->setFont(font);
        cronometro = new QLabel(centralWidget);
        cronometro->setObjectName(QString::fromUtf8("cronometro"));
        cronometro->setGeometry(QRect(690, 20, 81, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        cronometro->setFont(font1);
        puntuacion = new QLabel(centralWidget);
        puntuacion->setObjectName(QString::fromUtf8("puntuacion"));
        puntuacion->setGeometry(QRect(330, 520, 71, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        puntuacion->setFont(font2);
        lblPuntaje = new QLabel(centralWidget);
        lblPuntaje->setObjectName(QString::fromUtf8("lblPuntaje"));
        lblPuntaje->setGeometry(QRect(410, 510, 41, 31));
        lblPuntaje->setFont(font);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 80, 661, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tarjeta10 = new QPushButton(frame);
        tarjeta10->setObjectName(QString::fromUtf8("tarjeta10"));
        tarjeta10->setGeometry(QRect(180, 300, 131, 111));
        tarjeta05 = new QPushButton(frame);
        tarjeta05->setObjectName(QString::fromUtf8("tarjeta05"));
        tarjeta05->setGeometry(QRect(20, 160, 131, 111));
        tarjeta06 = new QPushButton(frame);
        tarjeta06->setObjectName(QString::fromUtf8("tarjeta06"));
        tarjeta06->setGeometry(QRect(180, 160, 131, 111));
        tarjeta09 = new QPushButton(frame);
        tarjeta09->setObjectName(QString::fromUtf8("tarjeta09"));
        tarjeta09->setGeometry(QRect(20, 300, 131, 111));
        tarjeta07 = new QPushButton(frame);
        tarjeta07->setObjectName(QString::fromUtf8("tarjeta07"));
        tarjeta07->setGeometry(QRect(340, 160, 131, 111));
        tarjeta03 = new QPushButton(frame);
        tarjeta03->setObjectName(QString::fromUtf8("tarjeta03"));
        tarjeta03->setGeometry(QRect(340, 20, 131, 111));
        tarjeta11 = new QPushButton(frame);
        tarjeta11->setObjectName(QString::fromUtf8("tarjeta11"));
        tarjeta11->setGeometry(QRect(340, 300, 131, 111));
        tarjeta01 = new QPushButton(frame);
        tarjeta01->setObjectName(QString::fromUtf8("tarjeta01"));
        tarjeta01->setGeometry(QRect(20, 20, 130, 110));
        tarjeta04 = new QPushButton(frame);
        tarjeta04->setObjectName(QString::fromUtf8("tarjeta04"));
        tarjeta04->setGeometry(QRect(500, 20, 131, 111));
        tarjeta12 = new QPushButton(frame);
        tarjeta12->setObjectName(QString::fromUtf8("tarjeta12"));
        tarjeta12->setGeometry(QRect(500, 300, 131, 111));
        tarjeta02 = new QPushButton(frame);
        tarjeta02->setObjectName(QString::fromUtf8("tarjeta02"));
        tarjeta02->setGeometry(QRect(180, 20, 131, 111));
        tarjeta08 = new QPushButton(frame);
        tarjeta08->setObjectName(QString::fromUtf8("tarjeta08"));
        tarjeta08->setGeometry(QRect(500, 160, 131, 111));
        conectar = new QPushButton(centralWidget);
        conectar->setObjectName(QString::fromUtf8("conectar"));
        conectar->setGeometry(QRect(304, 610, 80, 21));
        desconectar = new QPushButton(centralWidget);
        desconectar->setObjectName(QString::fromUtf8("desconectar"));
        desconectar->setGeometry(QRect(394, 610, 80, 21));
        nombreServidor = new QLineEdit(centralWidget);
        nombreServidor->setObjectName(QString::fromUtf8("nombreServidor"));
        nombreServidor->setGeometry(QRect(334, 580, 113, 21));
        labelServidor = new QLabel(centralWidget);
        labelServidor->setObjectName(QString::fromUtf8("labelServidor"));
        labelServidor->setGeometry(QRect(340, 550, 101, 20));
        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        instrucciones->raise();
        cronometro->raise();
        puntuacion->raise();
        lblPuntaje->raise();
        conectar->raise();
        desconectar->raise();
        nombreServidor->raise();
        labelServidor->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Emparejados", nullptr));
        instrucciones->setText(QApplication::translate("MainWindow", "Click en dos tarjetas para intentar que coincidan", nullptr));
        cronometro->setText(QApplication::translate("MainWindow", "cron\303\263metro", nullptr));
        puntuacion->setText(QApplication::translate("MainWindow", "Puntos:", nullptr));
        lblPuntaje->setText(QApplication::translate("MainWindow", "0", nullptr));
        tarjeta10->setText(QString());
        tarjeta05->setText(QString());
        tarjeta06->setText(QString());
        tarjeta09->setText(QString());
        tarjeta07->setText(QString());
        tarjeta03->setText(QString());
        tarjeta11->setText(QString());
        tarjeta01->setText(QString());
        tarjeta04->setText(QString());
        tarjeta12->setText(QString());
        tarjeta02->setText(QString());
        tarjeta08->setText(QString());
        conectar->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        desconectar->setText(QApplication::translate("MainWindow", "Desconectar", nullptr));
        labelServidor->setText(QApplication::translate("MainWindow", "Nombre del servidor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
