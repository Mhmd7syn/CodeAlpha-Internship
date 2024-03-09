/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QAction *actionRegister;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *backBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginBtn;
    QMenuBar *menubar;
    QMenu *menuTabs;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        Login->setMinimumSize(QSize(800, 600));
        Login->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Login->setFont(font);
        actionRegister = new QAction(Login);
        actionRegister->setObjectName("actionRegister");
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(100, 100, 100, 100);
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setFont(font);

        verticalLayout->addWidget(backBtn, 0, Qt::AlignLeft);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setEnabled(true);
        emailLabel->setFont(font);
        emailLabel->setAlignment(Qt::AlignCenter);
        emailLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(emailLabel, 0, Qt::AlignHCenter);

        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setMinimumSize(QSize(300, 0));
        emailLineEdit->setFont(font);

        horizontalLayout_2->addWidget(emailLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);
        passwordLabel->setAlignment(Qt::AlignCenter);
        passwordLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(passwordLabel, 0, Qt::AlignHCenter);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setMinimumSize(QSize(300, 0));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setFont(font);

        verticalLayout->addWidget(loginBtn);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuTabs = new QMenu(menubar);
        menuTabs->setObjectName("menuTabs");
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        menubar->addAction(menuTabs->menuAction());
        menuTabs->addAction(actionRegister);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "MainWindow", nullptr));
        actionRegister->setText(QCoreApplication::translate("Login", "Register", nullptr));
        backBtn->setText(QCoreApplication::translate("Login", "Back", nullptr));
        emailLabel->setText(QCoreApplication::translate("Login", "Email:       ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        loginBtn->setText(QCoreApplication::translate("Login", "Login", nullptr));
        menuTabs->setTitle(QCoreApplication::translate("Login", "Tabs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
