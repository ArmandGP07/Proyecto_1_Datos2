#ifndef SERVERMAIN_H
#define SERVERMAIN_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class ServerMain : public QObject
{
    Q_OBJECT
public:
    explicit ServerMain(QObject *parent = nullptr);

signals:

public slots:
    void newConnection();

private:
    QTcpServer *servidor;

};

#endif // SERVERMAIN_H
