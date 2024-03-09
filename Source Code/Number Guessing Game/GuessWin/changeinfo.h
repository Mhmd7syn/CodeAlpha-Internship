#ifndef CHANGEINFO_H
#define CHANGEINFO_H

#include <QMainWindow>

namespace Ui {
class ChangeInfo;
}

class ChangeInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChangeInfo(QWidget *parent = nullptr);
    ~ChangeInfo();

private:
    Ui::ChangeInfo *ui;

private slots:
    void update();
    void back();

};

#endif // CHANGEINFO_H
