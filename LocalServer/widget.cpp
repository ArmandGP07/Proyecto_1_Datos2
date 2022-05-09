#include "widget.h"
#include "ui_widget.h"
#include "localserver.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mLocalServer = new LocalServer(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_iniciar_clicked()
{
    if (!mLocalServer->listen(ui->nombreServidor2->text()))
        QMessageBox::critical(this, "Error", mLocalServer ->errorString());
    else {
        QMessageBox::information(this, "Servidor", "Iniciado...");
    }
}

void Widget::on_enviar_clicked()
{

}
void Widget::on_quitar_clicked()
{
    close();
}


