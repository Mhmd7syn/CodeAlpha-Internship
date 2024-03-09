#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class Home;
}
QT_END_NAMESPACE

class Home : public QMainWindow
{
    Q_OBJECT

public:
    Home(QWidget *parent = nullptr);
    ~Home();

private:
    Ui::Home *ui;
    int grid[9][9];
    bool box[3][3][10], row[9][10], column[9][10];
    bool checkItem();
    bool solveFunc(int y, int x);

private slots:
    void solve();
};
#endif // HOME_H
