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

//Permite saber si el cronómetro llegó a los 0s o si las parejas fueron juntadas//
void MainWindow::definirResultadoFinal(){
    msgBox.setWindowTitle("Juego Terminado");
    msgBox.setIcon(QMessageBox::Information);
    //Botones de Sí y No//
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);\
    msgBox.setEscapeButton(QMessageBox::No);

    if (parejasRestantes==0){
        timer->stop();
        msgBox.setText("Ganaste. ¿Volver a jugar?");
        if(QMessageBox::Yes == msgBox.exec()){

        }
    }
    else{
        if (time.toString()=="00:00:00"){

        }
    }
}

//Esta función le resta 1s al contador//
void MainWindow::actualizarCronometro(){
    time = time.addSecs(-1);
    //Para acceder a los widgets y que cambien en timepo real//
    ui->cronometro->setText(time.toString("m:ss"));
}

//Métodos para el cronómetro//
void MainWindow::actualizarEstado(){
    actualizarCronometro();
    definirResultadoFinal();
}

//Destructor implementado//
MainWindow::~MainWindow()
{
    delete ui;
}

