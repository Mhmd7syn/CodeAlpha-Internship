#include "Welcome.h"
#include "ui_Welcome.h"
#include "newuser.h"
#include "login.h"
#include "data.h"
#include <QMessageBox>
#include <QMediaPlayer>
#include <QAudioOutput>

Welcome::Welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);

    setWindowTitle("GuessWin");
    ui->background->setPixmap(QPixmap("Files/Background.jpg"));


    QAudioOutput *audioBackGround = new QAudioOutput;
    audioBackGround->setVolume(10);
    backGroundSound = new QMediaPlayer(this);
    backGroundSound->setAudioOutput(audioBackGround);
    backGroundSound->setSource(QUrl("Sounds/night-city-knight-127028.mp3"));
    backGroundSound->play();

    QAudioOutput *audioOutput = new QAudioOutput;
    audioOutput->setVolume(50);
    clickSound = new QMediaPlayer(this);
    clickSound->setAudioOutput(audioOutput);
    clickSound->setSource(QUrl("Sounds/button-124476.mp3"));

    connect(backGroundSound, SIGNAL(playbackStateChanged(QMediaPlayer::PlaybackState)), this, SLOT(onMediaStateChanged(QMediaPlayer::PlaybackState)));
    connect(ui->newUserBtn, SIGNAL(clicked(bool)), this, SLOT(newUser()));
    connect(ui->loginBtn, SIGNAL(clicked(bool)), this, SLOT(login()));
    connect(ui->exitBtn, SIGNAL(clicked(bool)), this, SLOT(exitMsg()));
}
Welcome::~Welcome()
{
    delete ui;
}

void Welcome::exitMsg()
{
    clickSound->play();
    QMessageBox msg(QMessageBox::Warning, "Don't Leave", "Are You Sure you want to leave?", QMessageBox::Yes | QMessageBox::Cancel, this);
    int btn = msg.exec();
    if(btn == QMessageBox::Yes){
        this->close();
    }
}

void Welcome::newUser()
{
    clickSound->play();
    NewUser *newUser = new NewUser();
    newUser->show();
    this->close();
}

void Welcome::login()
{
    clickSound->play();
    Login *window = new Login();
    window->show();
    this->close();
}

void Welcome::onMediaStateChanged(QMediaPlayer::PlaybackState state)
{
    if (state == QMediaPlayer::StoppedState)
    {
        backGroundSound->play();
    }
}
