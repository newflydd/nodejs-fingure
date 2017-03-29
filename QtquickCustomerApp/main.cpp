#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>
#include <QQmlContext>

#include "fingermodual.h"
#include "finger.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/images/finger.png"));


    qmlRegisterType<Finger>("com.newflypig.Finger", 1, 0, "Finger");
    qmlRegisterType<FingerModual>("com.newflypig.FingerModual", 1, 0, "FingerModual");

    QQmlApplicationEngine engine;
    FingerModual fingerModual;
    engine.rootContext()->setContextProperty("fingerModual", &fingerModual);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
