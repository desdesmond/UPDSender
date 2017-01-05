#include <QCoreApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>

#include "myudp.h"


int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QScopedPointer<MyUDP> sendMessage(new MyUDP);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    engine.rootContext()->setContextProperty("sendMessage",sendMessage.data());

//    MyUDP Server;
//    MyUDP client;

//    client.SayHello();

    return app.exec();
}
