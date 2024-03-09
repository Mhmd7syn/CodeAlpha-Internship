#ifndef Welcome_H
#define Welcome_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Welcome;
}
QT_END_NAMESPACE

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    Welcome(QWidget *parent = nullptr);
    ~Welcome();
    QMediaPlayer *clickSound;
    QMediaPlayer *backGroundSound;

private:
    Ui::Welcome *ui;

private slots:
    void newUser();
    void login();
    void onMediaStateChanged(QMediaPlayer::PlaybackState state);
    void exitMsg();

};
#endif // MAINWINDOW_H
