#ifndef DATA_H
#define DATA_H
#include "user.h"
#include <QMap>
#include <QString>
#include <QFile>
class Data
{
public:
    Data();
    static void readFiles();
    static void WriteFiles();
    static QMap<QString, User> users;
    static QFile userFile;
    static QString currentUserEmail;
};

#endif // DATA_H
