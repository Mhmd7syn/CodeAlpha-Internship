#include "data.h"
#include "user.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QMap>

QFile Data::userFile("Files/Users.txt");
QMap<QString, User> Data::users;
QString Data::currentUserEmail = "";

Data::Data() {}

void Data::readFiles()
{
    if (userFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&userFile);

        while (!stream.atEnd()) {
            QString line = stream.readLine();
            QStringList userData = line.split(',');
            User newUser(userData[0], userData[1], userData[2], User::stringToGender(userData[3]), userData[4].toInt(), userData[5].toInt(), userData[6]);
            Data::users.insert(newUser.email, newUser);
        }
        userFile.close();
        qDebug() << "userFile read successfully.";
    } else {
        qDebug() << "Failed to open the userFile for reading.";
    }

}

void Data::WriteFiles()
{
    if (userFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream stream(&userFile);
        QString content;
        for(auto& user : users){
            content.clear();

            content.append(user.userName + ',');
            content.append(user.email + ',');
            content.append(user.password + ',');
            content.append(User::genderToString(user.gender) + ',');
            content.append(QString::number(user.age) + ',');
            content.append(QString::number(user.rate) + ',');
            content.append(user.photoPath);
            stream << content << '\n';
        }
        userFile.close();
        qDebug() << "userFile written successfully.";
    } else {
        qDebug() << "Failed to open the userFile for writing.";
    }
}
