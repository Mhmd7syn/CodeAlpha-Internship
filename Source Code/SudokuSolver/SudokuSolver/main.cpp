#include "home.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile("Files/dark_theme.qss");

    if (styleFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QString style = styleFile.readAll();
        a.setStyleSheet(style);
        styleFile.close();
    } else {
        qDebug() << "StyleSheet File Can't be opened.\n";
    }

    a.setWindowIcon(QIcon("Files/2.jpg"));

    Home w;
    w.setWindowTitle("SudokuSolver");
    w.show();
    return a.exec();
}
