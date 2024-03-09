#ifndef PLAY_H
#define PLAY_H

#include <QMainWindow>
#include <guessednumber.h>
#include <QMap>
#include <QVector>
#include <QString>
#include <QLCDNumber>
#include <QTimer>
#include <QMediaPlayer>

namespace Ui {
class Play;
}

class Play : public QMainWindow
{
    Q_OBJECT

public:
    explicit Play(QWidget *parent = nullptr);
    ~Play();
    int currPlayer, noPlayers, mode;
    bool singleGame;
    QMap<int, GuessedNumber> numbers;
    QVector<QString> playerNames = QVector<QString>(10);
    bool generateNumbers();
    void nextPlay();

private:
    Ui::Play *ui;
    QDialog *dialog;
    QLCDNumber *rateLcd;
    QTimer *timer;
    QMap<int, QVector<QString>> winners;
    QMediaPlayer *winSound;
    QMediaPlayer *loseSound;
    QMediaPlayer *upSound;
    QMediaPlayer *downSound;
    QMediaPlayer *notifySound;


private slots:
    void check();
    void getHint();
    void rateChange(bool win, int start);
    void updateRate();
    void showRank();
    void back();
    bool modeMsg();

public slots:
    void single();
    void multi();
};

#endif // PLAY_H
