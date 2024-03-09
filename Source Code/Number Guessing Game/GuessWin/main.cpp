#include "welcome.h"
#include "data.h"
#include <QApplication>
#include <QMessageBox>
#include <QLabel>
#include <QAudioOutput>


void write()
{
    Welcome w;
    w.backGroundSound->stop();
    Data::WriteFiles();
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Data::readFiles();

    QFile styleFile("Files/dark_theme.qss");

    if (styleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QString style = styleFile.readAll();
        a.setStyleSheet(style);
        styleFile.close();
    } else {
        qDebug() << "StyleSheet File Can't be opened.\n";
    }

    a.setWindowIcon(QIcon("Files/Background.jpg"));

    Welcome w;
    w.show();

    QObject::connect(&a, &QCoreApplication::aboutToQuit, write);

    return a.exec();
}
