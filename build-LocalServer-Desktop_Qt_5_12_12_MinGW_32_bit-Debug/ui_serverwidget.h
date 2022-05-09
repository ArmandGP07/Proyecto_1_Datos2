/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocalServer
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *iniciar;
    QPushButton *enviar;
    QPushButton *quitar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *msj;

    void setupUi(QWidget *LocalServer)
    {
        if (LocalServer->objectName().isEmpty())
            LocalServer->setObjectName(QString::fromUtf8("LocalServer"));
        LocalServer->resize(379, 118);
        gridLayout = new QGridLayout(LocalServer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iniciar = new QPushButton(LocalServer);
        iniciar->setObjectName(QString::fromUtf8("iniciar"));

        horizontalLayout->addWidget(iniciar);

        enviar = new QPushButton(LocalServer);
        enviar->setObjectName(QString::fromUtf8("enviar"));

        horizontalLayout->addWidget(enviar);

        quitar = new QPushButton(LocalServer);
        quitar->setObjectName(QString::fromUtf8("quitar"));

        horizontalLayout->addWidget(quitar);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(LocalServer);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        msj = new QLineEdit(LocalServer);
        msj->setObjectName(QString::fromUtf8("msj"));

        horizontalLayout_2->addWidget(msj);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(LocalServer);

        QMetaObject::connectSlotsByName(LocalServer);
    } // setupUi

    void retranslateUi(QWidget *LocalServer)
    {
        LocalServer->setWindowTitle(QApplication::translate("LocalServer", "LocalServer", nullptr));
        iniciar->setText(QApplication::translate("LocalServer", "Iniciar", nullptr));
        enviar->setText(QApplication::translate("LocalServer", "Enviar", nullptr));
        quitar->setText(QApplication::translate("LocalServer", "Quitar", nullptr));
        label->setText(QApplication::translate("LocalServer", "Mensaje:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocalServer: public Ui_LocalServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
