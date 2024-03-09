#ifndef USER_H
#define USER_H
#include <QString>
#include <QFile>
// Enum for representing gender
enum class Gender {
    MALE,
    FEMALE,
    OTHER
};

class User
{
public:
    User();
    User(QString userName, QString email, QString password, Gender gender, int age, int rate, QString photoPath);
    QString userName, email, password;
    Gender gender;
    int age, rate;
    QString photoPath;
    static QString defaultPhoto;
    static QString genderToString(Gender gender);
    static Gender stringToGender(QString gender);
};

#endif // USER_H
