#include "newuser.h"
#include "ui_newuser.h"
#include "user.h"
#include "data.h"
#include "login.h"
#include "home.h"
#include "welcome.h"
#include <QString>
#include <QMessageBox>
#include <QAudioOutput>

NewUser::NewUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NewUser)
{
    ui->setupUi(this);
    ui->genderComboBox->setPlaceholderText("Choose Gender...");
    ui->genderComboBox->addItem(QIcon("Icons/Male Icon.png"), "Male");
    ui->genderComboBox->addItem(QIcon("Icons/Female Icon.png"), "Female");
    ui->genderComboBox->addItem("Other");



    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
    connect(ui->registerBtn, SIGNAL(clicked(bool)), this, SLOT(reg()));
    connect(ui->actionLogin, SIGNAL(triggered(bool)), this, SLOT(login()));
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::reg()
{
    Welcome w;
    w.clickSound->play();

    QString userName = ui->userLineEdit->text();
    QString email = ui->emailLineEdit->text().toLower();
    QString password = ui->passwordLineEdit->text();
    QString confirmPassword = ui->confirmPasswordLineEdit->text();
    Gender gender = User::stringToGender(ui->genderComboBox->currentText());
    int age = ui->ageSpinBox->value();

    auto user = Data::users.find(email);
    if(user != Data::users.end())
    {
        QMessageBox::warning(this, "Error", "Email is Already Exist");
        Login *login = new Login(this);
        this->close();
        login->show();
    }
    else if(email.isEmpty() || userName.isEmpty())
    {
        QMessageBox::warning(this, "Error", "The userName and email can not be empty");
    }
    else if(password.size() < 8)
    {
        QMessageBox::warning(this, "Error", "Hello " + userName + "\nPlease, Choose a password with 8 or more characters");
    }
    else if(password == confirmPassword)
    {
        User newUser(userName, email, password, gender, age, 0, User::defaultPhoto);
        Data::users.insert(newUser.email, newUser);
        Data::currentUserEmail = newUser.email;
        QMessageBox::information(this, "Success", "Hello " + userName + "\nLet's Play 🥳");
        Home *home = new Home(this);
        this->close();
        home->show();
    } else
        QMessageBox::warning(this, "Error", "Hello " + userName + "\nPlease, Check that the password is the same as the confirmation");

}

void NewUser::login()
{
    Welcome w;
    w.clickSound->play();
    Login *login = new Login(this);
    this->close();
    login->show();
}

void NewUser::back()
{
    Welcome *welcome = new Welcome();
    welcome->clickSound->play();
    this->close();
    welcome->show();
}
