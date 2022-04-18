#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QMessageBox>
#include <QVector>
#include <QHash>
#include <QString>
#include <random>

//Clase de la ventana principal //
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor//
    MainWindow(QWidget *parent = nullptr);
    //Destructor//
    ~MainWindow();
    //Temporizador//
    QTimer *timer = new QTimer();
    //Reloj//
    QTime time;
    //Cantidad de parejas restantes//
    int parejasRestantes;
    //Mensaje por si el usuario pierde el juego//
    QMessageBox msgBox;
    //Vector para búsqueda de imagenes de cartas//
    QVector<QString> tarjetas{"tarjeta01", "tarjeta02","tarjeta03", "tarjeta04",
                              "tarjeta05", "tarjeta06","tarjeta07", "tarjeta08",
                              "tarjeta09", "tarjeta10","tarjeta11", "tarjeta12",};
    //Mapa que servirá para repartir las cartas aleatoriamente//
    QHash<QString, QString> reparto;

    //Variable para determinar el puntaje final//

private slots:
    //Modificador de acceso para cronómetro funcional//
   void actualizarEstado();
   void actualizarCronometro();
   void definirResultadoFinal();
   void inicializarJuego();
   //Modificador para ver que sucede cuando la tarjeta es descubierta//
   void tarjetaDescubierta();
   //Mezclar y repartir cartas//
   void mezclar();
   void repartir();

private:
    //Objeto que controla la interfaz gráfica//
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
