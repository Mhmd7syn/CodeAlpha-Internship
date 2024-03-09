#include "userprofile.h"
#include "ui_userprofile.h"
#include "data.h"
#include "user.h"
#include "changeinfo.h"
#include "home.h"
#include "welcome.h"
#include <QFileDialog>
#include <QPixmap>
UserProfile::UserProfile(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserProfile)
{
    ui->setupUi(this);
    User user = Data::users[Data::currentUserEmail];
    ui->photoLabel->setPixmap(QPixmap(user.photoPath));
    ui->userNameLineEdit->setText(user.userName);
    ui->emailLineEdit->setText(user.email);
    ui->genderLineEdit->setText(User::genderToString(user.gender));
    ui->ageLineEdit->setText(QString::number(user.age));
    ui->rateLineEdit->setText(QString::number(user.rate));

    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
    connect(ui->changeInfoBtn, SIGNAL(clicked(bool)), this, SLOT(changeInfo()));
    connect(ui->photoBtn, SIGNAL(clicked(bool)), this, SLOT(changePhoto()));
}

UserProfile::~UserProfile()
{
    delete ui;
}

void UserProfile::changeInfo()
{
    Welcome w;
    w.clickSound->play();

    ChangeInfo *changeInfo = new ChangeInfo(this);
    this->close();
    changeInfo->show();
}

void UserProfile::changePhoto()
{
    Welcome w;
    w.clickSound->play();

    QString filePath = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath(), "Image Files (*.png *.jpg *.jpeg *.bmp *.gif *.tiff)");
    if (!filePath.isEmpty()) {
        Data::users[Data::currentUserEmail].photoPath = filePath;
        ui->photoLabel->setPixmap(QPixmap(filePath));
    }
}

void UserProfile::back()
{
    Welcome w;
    w.clickSound->play();

    Home *home = new Home();
    this->close();
    home->show();
}
