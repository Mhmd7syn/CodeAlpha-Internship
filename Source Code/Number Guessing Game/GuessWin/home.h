#ifndef HOME_H
#define HOME_H
#include "Play.h"
#include <QMainWindow>

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private:
    Ui::Home *ui;

private slots:
    void profile();
    void logOut();
    void single();
    void multi();
    void rules();
};

#endif // HOME_H
