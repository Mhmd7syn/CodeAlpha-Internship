#ifndef NEWUSER_H
#define NEWUSER_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class NewUser;
}

class NewUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewUser(QWidget *parent = nullptr);
    ~NewUser();

private:
    Ui::NewUser *ui;

private slots:
    void reg();
    void login();
    void back();

};

#endif // NEWUSER_H
