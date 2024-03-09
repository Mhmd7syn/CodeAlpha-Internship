#include "home.h"
#include "ui_home.h"
#include "data.h"
#include "userprofile.h"
#include "Play.h"
#include "welcome.h"
#include "rules.h"
#include <QMessageBox>
#include <QInputDialog>

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    setWindowTitle("GuessWin");
    ui->background->setPixmap(QPixmap("Files/Background.jpg"));
    ui->userNameLineEdit->setText(Data::users[Data::currentUserEmail].userName);
    ui->rateLineEdit->setText(QString::number(Data::users[Data::currentUserEmail].rate));

    connect(ui->singleBtn, SIGNAL(clicked(bool)), this, SLOT(single()));
    connect(ui->multiBtn, SIGNAL(clicked(bool)), this, SLOT(multi()));
    connect(ui->actionLog_Out, SIGNAL(triggered(bool)), this, SLOT(logOut()));
    connect(ui->actionUser_Profile, SIGNAL(triggered(bool)), this, SLOT(profile()));
    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(logOut()));
    connect(ui->rulesBtn, SIGNAL(clicked(bool)), this,SLOT(rules()));
}

Home::~Home()
{
    delete ui;
}

void Home::profile()
{
    Welcome w;
    w.clickSound->play();

    UserProfile *userProfile = new UserProfile();
    userProfile->show();
    this->close();
}

void Home::logOut()
{
    Welcome w;
    w.clickSound->play();

    Data::currentUserEmail = "";
    Welcome *welcome = new Welcome();
    welcome->show();
    this->close();
}

void Home::single(){
    Welcome w;
    w.clickSound->play();

    Play *play = new Play();
    play->single();
    this->close();
}
void Home::multi(){
    Welcome w;
    w.clickSound->play();

    Play *play = new Play();
    play->multi();
    this->close();
}

void Home::rules()
{
    Welcome w;
    w.clickSound->play();

    Rules *rules = new Rules();
    rules->show();
    this->close();
}
