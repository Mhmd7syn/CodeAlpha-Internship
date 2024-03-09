#include "user.h"
#include <QString>

QString User::defaultPhoto = "Icons/Male Icon.png";

User::User()
{
    this->userName = this->email = this->password = "";
    this->gender = Gender::OTHER;
    this->age = this->rate = 0;
    this->photoPath = "Icons/Male Icon.png";
}

User::User(QString userName, QString email, QString password, Gender gender, int age, int rate, QString photoPath)
{
    this->userName = userName;
    this->email = email;
    this->password = password;
    this->gender = gender;
    this->age = age;
    this->rate = rate;
    this->photoPath = photoPath;
}

// Function to convert Gender enum to QString
QString User::genderToString(Gender gender) {
    switch (gender) {
    case Gender::MALE:
        return "Male";
    case Gender::FEMALE:
        return "Female";
    default:
        return "Other";
    }
}

// Function to convert Gender enum to QString
Gender User::stringToGender(QString gender) {
    if(gender == "Male") return Gender::MALE;
    else if(gender == "Female") return Gender::FEMALE;
    else return Gender::OTHER;
}
