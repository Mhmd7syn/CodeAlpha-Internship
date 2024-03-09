#include "changeinfo.h"
#include "ui_changeinfo.h"
#include "userprofile.h"
#include "data.h"
#include "welcome.h"
#include <QMessageBox>

ChangeInfo::ChangeInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChangeInfo)
{
    ui->setupUi(this);
    setWindowTitle("GuessWin");
    ui->genderComboBox->setPlaceholderText("Choose Gender...");
    ui->genderComboBox->addItem(QIcon("Icons/Male Icon.png"), "Male");
    ui->genderComboBox->addItem(QIcon("Icons/Female Icon.png"), "Female");
    ui->genderComboBox->addItem("Other");

    auto user = Data::users[Data::currentUserEmail];
    ui->userLineEdit->setText(user.userName);
    ui->genderComboBox->setCurrentText(User::genderToString(user.gender));
    ui->ageSpinBox->setValue(user.age);

    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
    connect(ui->updateBtn, SIGNAL(clicked(bool)), this, SLOT(update()));
}

ChangeInfo::~ChangeInfo()
{
    delete ui;
}

void ChangeInfo::update()
{
    Welcome w;
    w.clickSound->play();

    QString userName = ui->userLineEdit->text();
    QString currPassword = ui->currPasswordLineEdit->text();
    QString newPassword = ui->newPasswordLineEdit->text();
    QString confirmPassword = ui->confirmPasswordLineEdit->text();
    Gender gender = User::stringToGender(ui->genderComboBox->currentText());
    int age = ui->ageSpinBox->value();

    auto user = Data::users[Data::currentUserEmail];
    if(currPassword != user.password){
        QMessageBox::warning(this, "Error", "Wrong Password");
    }
   else if(newPassword.size() < 8 && !newPassword.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Hello " + userName + "\nPlease, Choose a password with 8 or more characters");
    }
    else if(newPassword == confirmPassword || newPassword.isEmpty())
    {
        if(newPassword.isEmpty()) newPassword = user.password;
        User newUser(userName, user.email, newPassword, gender, age, user.rate, user.photoPath);
        Data::users.insert(newUser.email, newUser);
        Data::currentUserEmail = newUser.email;
        QMessageBox::information(this, "Success", "Hello " + userName + "\nLet's Play 🥳");
        back();
    } else
        QMessageBox::warning(this, "Error", "Hello " + userName + "\nPlease, Check that the password is the same as the confirmation");
}

void ChangeInfo::back()
{
    Welcome w;
    w.clickSound->play();

    UserProfile *userProfile = new UserProfile();
    userProfile->show();
    this->close();
}
