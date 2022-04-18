#include "mainwindow.h"
#include "ui_mainwindow.h"


//Constructor implementado//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(timer, SIGNAL (timeout ()), this, SLOT(actualizarEstado()));
    connect(ui->tarjeta01, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta02, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta03, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta04, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta05, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta06, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta07, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta08, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta09, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta10, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta11, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    connect(ui->tarjeta12, SIGNAL(clicked), this, SLOT(tarjetaDescubierta()));
    inicializarJuego();
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

    //Situación donde no hay parejas restantes por juntar//
    if (parejasRestantes==0){
        timer->stop();
        msgBox.setText("Ganaste. ¿Volver a jugar?");
        if(QMessageBox::Yes == msgBox.exec()){
            inicializarJuego();
        }\
        else{
            QCoreApplication::quit();
        }
    }
    else{
        if (time.toString()=="00:00:00"){
            timer->stop();
            msgBox.setText("Perdiste. ¿Volver a jugar?");
            if (QMessageBox::Yes == msgBox.exec()){
                inicializarJuego();
            }
            else{
                QCoreApplication::quit();
            }
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

//Mezclar elementos del vector//
void MainWindow::mezclar(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle(tarjetas.begin(), tarjetas.end(), std::default_random_engine(seed));
}

//Reparte las cartas en posiciones aleatorias del display//
void MainWindow::repartir(){
    auto iterador=tarjetas.begin();
    for (int i=1;1<=6;i++){
        QString file_name="0"+QString::number(i)+" .png";
        reparto[(*iterador)]=file_name;
        iterador++;
        reparto[(*iterador)]=file_name;
        iterador++;
    }
}

//Destructor implementado//
MainWindow::~MainWindow()
{
    delete ui;
}

