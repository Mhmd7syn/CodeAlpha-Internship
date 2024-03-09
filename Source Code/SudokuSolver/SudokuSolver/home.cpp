#include "home.h"
#include "ui_home.h"
#include <QMessageBox>

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    connect(ui->clearBtn, SIGNAL(clicked(bool)), ui->gridWidget, SLOT(clear()));
    connect(ui->solveBtn, SIGNAL(clicked(bool)), this, SLOT(solve()));
}

Home::~Home()
{
    delete ui;
}

bool Home::checkItem()
{
    memset(grid, 0, sizeof(grid));
    memset(box, 0, sizeof(box));
    memset(row, 0, sizeof(row));
    memset(column, 0, sizeof(column));
    for(int y = 0; y < 9; y++) for(int x = 0; x < 9; x++){
            if(!ui->gridWidget->item(y, x) || ui->gridWidget->item(y, x)->text().isEmpty()) continue;
            QString txt = ui->gridWidget->item(y, x)->text();
            if(txt.size() > 1 || !(txt[0] >= '1' && txt[0] <= '9')){
                QMessageBox::warning(this, "Wrong Input", "The input should be number from 1 to 9 (Inclusive)\n"
                                    "Check the item in Row " + QString::number(y + 1) + " And Column " + QString::number(x + 1));
                return false;
            }
            grid[y][x] = txt.toInt();
            if(box[y / 3][x/3][grid[y][x]] || row[y][grid[y][x]] || column[x][grid[y][x]]){
                QMessageBox::warning(this, "Wrong Input", "The Puzzle is not correct");
                return false;
            }
            box[y / 3][x/3][grid[y][x]] = true;
            row[y][grid[y][x]] = true;
            column[x][grid[y][x]] = true;
        }
    return true;
}

bool Home::solveFunc(int y, int x)
{
    if(x == 9) return solveFunc(y + 1, 0);
    if(y == 9) return true;
    if(grid[y][x] != 0) return solveFunc(y, x + 1);
    int st = rand() % 10;
    if(!st) st++;
    for(int i = st; i < 10; i++){
        if(box[y / 3][x/3][i] || row[y][i] || column[x][i]) continue;
        grid[y][x] = i;
        box[y / 3][x/3][i] = true;
        row[y][i] = true;
        column[x][i] = true;
        if(solveFunc(y , x + 1)) return true;
        grid[y][x] = 0;
        box[y / 3][x/3][i] = false;
        row[y][i] = false;
        column[x][i] = false;
    }
    for(int i = 1; i < st; i++){
        if(box[y / 3][x/3][i] || row[y][i] || column[x][i]) continue;
        grid[y][x] = i;
        box[y / 3][x/3][i] = true;
        row[y][i] = true;
        column[x][i] = true;
        if(solveFunc(y , x + 1)) return true;
        grid[y][x] = 0;
        box[y / 3][x/3][i] = false;
        row[y][i] = false;
        column[x][i] = false;
    }
    return false;
}

void Home::solve()
{
    if(checkItem()){
        if(solveFunc(0, 0)){
            for(int y = 0; y < 9; y++) for(int x = 0; x < 9; x++){
                    QTableWidgetItem *item =  new QTableWidgetItem(QString::number(grid[y][x]));
                    item->setFont(QFont("Segoe UI", 12));
                    item->setTextAlignment(Qt::AlignCenter);
                    ui->gridWidget->setItem(y, x, item);
                }
            QMessageBox::information(this, "Sucess", "The Puzzle Has been Solved");
        } else
            QMessageBox::warning(this, "Failure", "Can't be solved\nCheck that your puzzle is valid");
    }
}
