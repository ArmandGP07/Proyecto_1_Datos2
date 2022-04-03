#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

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

//Modificador de acceso para cronómetro funcional//
private slots:
   void actualizarEstado();
   void actualizarCronometro();
   void definirResultadoFinal();

private:
    //Objeto que controla la interfaz gráfica//
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
