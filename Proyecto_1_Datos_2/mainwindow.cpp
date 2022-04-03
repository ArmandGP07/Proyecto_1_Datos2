#include "mainwindow.h"
#include "ui_mainwindow.h"


//Constructor implementado//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(timer, SIGNAL (timeout ()), this, SLOT(actualizarEstado()));

}

void MainWindow::actualizarEstado(){
    actualizarCronometro ();
    definirResultadoFinal();
}

//Destructor implementado//
MainWindow::~MainWindow()
{
    delete ui;
}

