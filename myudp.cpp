#include "myudp.h"

MyUDP::MyUDP(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::Broadcast,1234);

}

void MyUDP::SayHello()
{
    QByteArray Data;
    Data.append("Hi there, this is your iPhone!");
    socket->writeDatagram(Data, QHostAddress::LocalHost, 1234);
    qDebug() << "Message sent!";

}
