/*Sender*/

#ifndef MYUDP_H
#define MYUDP_H

#include <QObject>
#include <QUdpSocket>
#include <QDebug>
#include <QPoint>

class MyUDP : public QObject
{
    Q_OBJECT
public:
    explicit MyUDP(QObject *parent = 0);

    Q_INVOKABLE void SayHello();

signals:


public slots:

private:
    QUdpSocket *socket;

};

#endif // MYUDP_H
