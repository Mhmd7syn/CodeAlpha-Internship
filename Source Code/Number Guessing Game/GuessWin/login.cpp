#include "login.h"
#include "ui_login.h"
#include "data.h"
#include "newuser.h"
#include "home.h"
#include "welcome.h"
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("GuessWin");
    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
    connect(ui->loginBtn, SIGNAL(clicked(bool)), this, SLOT(login()));
    connect(ui->actionRegister, SIGNAL(triggered(bool)), this, SLOT(reg()));
}

Login::~Login()
{
    delete ui;
}

void Login::login()
{
    Welcome w;
    w.clickSound->play();

    QString email = ui->emailLineEdit->text().toLower();
    QString password = ui->passwordLineEdit->text();
    auto user = Data::users.find(email);
    if(user == Data::users.end())
    {
        QMessageBox::warning(this, "Error", "Wrong Email");
    }
    else if(user->password == password)
    {
        Data::currentUserEmail = email;
        QMessageBox::information(this, "Success", "Welcome Back " + user->userName + "\nLet's Play 🥳");
        Home *home = new Home();
        home->show();
        this->close();
    }
    else
        QMessageBox::warning(this, "Error", "Wrong Password");
}

void Login::reg()
{
    Welcome w;
    w.clickSound->play();

    NewUser *newUser = new NewUser();
    newUser->show();
    this->close();
}

void Login::back()
{
    Welcome *welcome = new Welcome();
    welcome->clickSound->play();
    this->close();
    welcome->show();
}
