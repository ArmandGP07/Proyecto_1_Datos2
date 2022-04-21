#include "servermain.h"

ServerMain::ServerMain(QObject *parent) : QObject(parent)
{
    servidor = new QTcpServer(this);

    connect(servidor,SIGNAL(newConnection),this,SLOT(newConnection()));

    if(!servidor->listen(QHostAddress::Any,1234))
    {
        qDebug() << "Servidor no pudo iniciar";
    }
    else
    {
        qDebug() << "Servidor iniciado";

    }
}

void ServerMain::newConnection()
{
    QTcpSocket *socket = servidor->nextPendingConnection();

    socket->write("hello world\r\n");
    socket->flush();

    socket->waitForBytesWritten(3000);

    socket->close();
}
