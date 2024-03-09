#include "play.h"
#include "ui_play.h"
#include "guessednumber.h"
#include "data.h"
#include "home.h"
#include "welcome.h"
#include <QInputDialog>
#include <QDialog>
#include <QMessageBox>
#include <QLCDNumber>
#include <QLabel>
#include <QAudioOutput>

Play::Play(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Play)
{
    ui->setupUi(this);
    ui->background->setPixmap(QPixmap("Files/Background.jpg"));

    QAudioOutput *audioWinMessage = new QAudioOutput;
    audioWinMessage->setVolume(50);
    winSound = new QMediaPlayer(this);
    winSound->setAudioOutput(audioWinMessage);
    winSound->setSource(QUrl("Sounds/achive-sound-132273.mp3"));

    QAudioOutput *audioLoseMessage = new QAudioOutput;
    audioLoseMessage->setVolume(50);
    loseSound = new QMediaPlayer(this);
    loseSound->setAudioOutput(audioLoseMessage);
    loseSound->setSource(QUrl("Sounds/wrong-answer-129254.mp3"));

    QAudioOutput *audioUpRate = new QAudioOutput;
    audioUpRate->setVolume(50);
    upSound = new QMediaPlayer(this);
    upSound->setAudioOutput(audioUpRate);
    upSound->setSource(QUrl("Sounds/cute-level-up-2-189851.mp3"));

    QAudioOutput *audioDownRate = new QAudioOutput;
    audioDownRate->setVolume(50);
    downSound = new QMediaPlayer(this);
    downSound->setAudioOutput(audioDownRate);
    downSound->setSource(QUrl("Sounds/power-down-7103.mp3"));

    QAudioOutput *audioWrong = new QAudioOutput;
    audioWrong->setVolume(50);
    notifySound = new QMediaPlayer(this);
    notifySound->setAudioOutput(audioWrong);
    notifySound->setSource(QUrl("Sounds/error-call-to-attention-129258.mp3"));


    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
    connect(ui->checkBtn, SIGNAL(clicked(bool)), this, SLOT(check()));
    connect(ui->hintBtn, SIGNAL(clicked(bool)), this, SLOT(getHint()));
}

Play::~Play()
{
    delete ui;
}

bool Play::generateNumbers()
{
    bool btn;
    int min = 0, max = 1000;
    if(mode == 1){
        QInputDialog dialog = QInputDialog(this);
        min = dialog.getInt(this, "Easy Mode", "*(maximum - minimum) should be between (50, 200)\nChoose the minimum boundary", 0, -2147483647, 2147483647, 1, &btn);
        if(!btn) return false;
        max = dialog.getInt(this, "Easy Mode", "*(maximum - minimum) should be between (50, 200)\nChoose the maximum boundary", min + 50, min + 50, min + 200, 1, &btn);
        if(!btn) return false;
    }
    else if(mode == 2){
        QInputDialog dialog = QInputDialog(this);
        min = dialog.getInt(this, "Normal Mode", "*(maximum - minimum) should be between (200, 500)\nChoose the minimum boundary", 0, -2147483647, 2147483647, 1, &btn);
        if(!btn) return false;
        max = dialog.getInt(this, "Normal Mode", "*(maximum - minimum) should be between (200, 500)\nChoose the maximum boundary", min + 200, min + 200, min + 500, 1, &btn);
        if(!btn) return false;
    }
    for(int i = 0; i < noPlayers; i++){
        numbers.insert(i, *(new GuessedNumber(min, max)));
    }
    currPlayer = -1;
    nextPlay();
    return true;
}

void Play::check()
{
    Welcome w;
    w.clickSound->play();

    auto number = *numbers.find(currPlayer);
    if(ui->enterSpinBox->value() == number.value){
        winSound->play();
        QMessageBox::information(this, "Success", "Correct Answer");
        numbers.remove(currPlayer);
        if(singleGame){
            auto user = &Data::users[Data::currentUserEmail];
            int newrate = user->rate + (15 - number.attempts - number.usedHints) * mode;
            rateChange(1, user->rate - 1);
            user->rate = newrate;
        } else{
            winners[number.usedHints + number.attempts].push_back(playerNames[currPlayer]);
            nextPlay();
        }
        return;
    } else if(ui->enterSpinBox->value() < number.value){
         loseSound->play();
        if(ui->enterSpinBox->value() < (number.value - number.min) / 2 + number.min) QMessageBox::information(this, "Failed", "Too low");
        else QMessageBox::information(this, "Failed", "Low");
    }
    else if(ui->enterSpinBox->value() > number.value){
         loseSound->play();
        if(ui->enterSpinBox->value() > (number.max - number.value) / 2 + number.value) QMessageBox::information(this, "Failed", "Too High");
        else QMessageBox::information(this, "Failed", "High");
    }
    numbers.find(currPlayer)->attempts++;
    if(numbers.find(currPlayer)->attempts == 10){
        loseSound->play();
        QMessageBox::warning(this, "Game Over", "You consumed All 10 attempts");
        numbers.remove(currPlayer);
        if(singleGame){
            auto user = &Data::users[Data::currentUserEmail];
            int newrate = user->rate - (10 + number.usedHints) * (4 - mode);
            rateChange(0, user->rate + 1);
            user->rate = newrate;
            return;
        }
    } else{
        QMessageBox::warning(this, "Wrong Answer", "Try Again\nYou still have " + QString::number(10 - numbers.find(currPlayer)->attempts) + " attempts\nGood Luck");
    }
    nextPlay();
}

void Play::getHint()
{
    Welcome w;
    w.clickSound->play();

    auto number = numbers.find(currPlayer);
    if(mode == 3){
        notifySound->play();
        QMessageBox::information(this, "Hint", "No hints for Hard Mode");
    }
    else if(number->usedHints == 3 && mode == 2){
        notifySound->play();
        QMessageBox::information(this, "Hint", "You consumed the three hints");
    } else if(number->usedHints == 5 && mode == 1){
        notifySound->play();
        QMessageBox::information(this, "Hint", "You consumed the five hints");
    } else{
        number->generateHint(mode);
        if(number->hints.isEmpty()){
            notifySound->play();
            QMessageBox::information(this, "Hint", "No available hints");
        }
        else{
            QMessageBox::information(this, "Hint", number->hints.front());
            number->hints.pop_front();
            number->usedHints++;
        }
    }
}

void Play::rateChange(bool win, int start)
{
    dialog = new QDialog(this);
    dialog->setWindowTitle("New Rate");
    dialog->resize(100, 100);

    rateLcd = new QLCDNumber(dialog);
    rateLcd->display(start);
    if(win) rateLcd->setStyleSheet("QLCDNumber { color: green;}");
    else rateLcd->setStyleSheet("QLCDNumber { color: red;}");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(rateLcd);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateRate()));
    timer->start(200);

    dialog->setLayout(layout);
    dialog->show();
}

void Play::updateRate()
{
    if(rateLcd->value() == Data::users[Data::currentUserEmail].rate){
        timer->stop();
        dialog->close();
        nextPlay();
    }
    else if(rateLcd->value() < Data::users[Data::currentUserEmail].rate){
        upSound->play();
        rateLcd->display(rateLcd->value() + 1);
    }
    else{
        downSound->play();
        rateLcd->display(rateLcd->value() - 1);
    }
}

void Play::showRank()
{
    QDialog *dialog = new QDialog(this);
    dialog->setWindowTitle("Ranks");
    dialog->resize(100, 100);

    QVBoxLayout *layout = new QVBoxLayout;

    int rank = 0;

    for(auto &it : winners) for(auto &name : it){
        QLabel *label = new QLabel();
        label->setText(QString::number(++rank) + ". " + name);
        label->setFont(QFont("Segoe UI", 12));
        layout->addWidget(label);
    }

    dialog->setLayout(layout);

    QAudioOutput *audioOutput = new QAudioOutput;
    audioOutput->setVolume(50);
    QMediaPlayer *sound = new QMediaPlayer(this);
    sound->setAudioOutput(audioOutput);
    sound->setSource(QUrl("Sounds/new-level-142995.mp3"));
    sound->play();

    dialog->show();
}

void Play::nextPlay()
{
    if(numbers.isEmpty()){
        back();
        if(!singleGame) showRank();
        return;
    }
    for(int i = currPlayer + 1; true; i++){
        auto no = numbers.find(i % noPlayers);
        if(no != numbers.end()){
            if(i % noPlayers != currPlayer) QMessageBox::information(this, "Let's Play 🥳", "Player Name: " + playerNames[i % noPlayers]);
            ui->playerNamelabel->setText("Player Name: " + playerNames[i % noPlayers]);
            ui->enterSpinBox->setValue(0);
            currPlayer = i % noPlayers;
            qDebug() <<"The Number is " << numbers.find(currPlayer)->value;
            this->show();
            break;
        }
    }
}

void Play::back()
{
    Welcome w;
    w.clickSound->play();

    Home *home = new Home();
    this->close();
    home->show();
}

bool Play::modeMsg()
{
    QMessageBox msg;
    msg.setWindowTitle("Let's Play 🥳");
    msg.setText("Choose the difficulty");

    QPushButton *easyBtn = msg.addButton("Easy", QMessageBox::ActionRole);
    QPushButton *normalBtn = msg.addButton("Normal", QMessageBox::ActionRole);
    QPushButton *hardBtn = msg.addButton("Hard", QMessageBox::ActionRole);
    QPushButton *cancelBtn = msg.addButton("Cancel", QMessageBox::ActionRole);

    msg.exec();
    if(msg.clickedButton() == easyBtn)
    {
        this->mode = 1;
    }
    else if(msg.clickedButton() == normalBtn)
    {
        this->mode = 2;
    }
    else if(msg.clickedButton() == hardBtn)
    {
        this->mode = 3;
    }

    if(msg.clickedButton() == cancelBtn){
        return true;
    }

    return false;
}

void Play::single()
{
    bool cancel = modeMsg();
    if(!cancel){
        this->singleGame = true;
        this->noPlayers = 1;
        this->playerNames[0] = Data::users[Data::currentUserEmail].userName;
        if(!this->generateNumbers()) back();
    } else back();
}

void Play::multi()
{
    bool cancel = modeMsg();
    if(!cancel){
        this->singleGame = false;
        bool btn;
        QInputDialog dialog = QInputDialog();
        this->noPlayers = dialog.getInt(this, "Choose The number of players", "Enter", 2, 2, 10, 1, &btn);
        if(!btn){
            back();
            return;
        }
        for(int i = 1; i <= this->noPlayers; i++){
            QString label = "Player " + QString::number(i) + " :";
            this->playerNames[i - 1] = dialog.getText(this, "The player's name", label, QLineEdit::Normal, "", &btn);
            if(!btn){
                back();
                return;
            }
        }
        if(!this->generateNumbers()) back();
    } else back();
}
