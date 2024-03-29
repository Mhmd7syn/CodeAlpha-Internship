#include "rules.h"
#include "ui_rules.h"
#include "home.h"
#include "welcome.h"

Rules::Rules(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Rules)
{
    ui->setupUi(this);
    setWindowTitle("GuessWin");
    connect(ui->backBtn, SIGNAL(clicked(bool)), this, SLOT(back()));
}

Rules::~Rules()
{
    delete ui;
}

void Rules::back()
{
    Welcome w;
    w.clickSound->play();

    Home *home = new Home();
    home->show();
    this->close();
}
