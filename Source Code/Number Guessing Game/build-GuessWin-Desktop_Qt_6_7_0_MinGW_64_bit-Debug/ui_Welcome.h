/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QPushButton *exitBtn;
    QLabel *welcomeLabel;
    QPushButton *loginBtn;
    QPushButton *newUserBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(800, 600);
        Welcome->setMinimumSize(QSize(800, 600));
        Welcome->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Welcome->setFont(font);
        Welcome->setAutoFillBackground(true);
        centralwidget = new QWidget(Welcome);
        centralwidget->setObjectName("centralwidget");
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 800, 600));
        background->setPixmap(QPixmap(QString::fromUtf8("../build-GuessWin-Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Files/Background.jpg")));
        background->setScaledContents(true);
        exitBtn = new QPushButton(centralwidget);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(10, 10, 80, 29));
        exitBtn->setFont(font);
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(180, 10, 456, 63));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Curlz MT")});
        font1.setPointSize(36);
        font1.setBold(true);
        welcomeLabel->setFont(font1);
        welcomeLabel->setStyleSheet(QString::fromUtf8(""));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setGeometry(QRect(120, 460, 121, 41));
        loginBtn->setFont(font);
        newUserBtn = new QPushButton(centralwidget);
        newUserBtn->setObjectName("newUserBtn");
        newUserBtn->setGeometry(QRect(510, 460, 121, 41));
        newUserBtn->setFont(font);
        Welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Welcome);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Welcome->setMenuBar(menubar);
        statusbar = new QStatusBar(Welcome);
        statusbar->setObjectName("statusbar");
        Welcome->setStatusBar(statusbar);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "MainWindow", nullptr));
        background->setText(QString());
        exitBtn->setText(QCoreApplication::translate("Welcome", "Exit", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Welcome", "Welcome to GuessWin!!", nullptr));
        loginBtn->setText(QCoreApplication::translate("Welcome", "Login", nullptr));
        newUserBtn->setText(QCoreApplication::translate("Welcome", "New User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
