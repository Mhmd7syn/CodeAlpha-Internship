/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUser
{
public:
    QAction *actionLogin;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *backBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *userLabel;
    QLineEdit *userLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPasswordLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *genderLabel;
    QComboBox *genderComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ageLabel;
    QSpinBox *ageSpinBox;
    QPushButton *registerBtn;
    QMenuBar *menubar;
    QMenu *menuTabs;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewUser)
    {
        if (NewUser->objectName().isEmpty())
            NewUser->setObjectName("NewUser");
        NewUser->resize(800, 600);
        NewUser->setMinimumSize(QSize(800, 600));
        NewUser->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        NewUser->setFont(font);
        actionLogin = new QAction(NewUser);
        actionLogin->setObjectName("actionLogin");
        centralwidget = new QWidget(NewUser);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(100, 100, 100, 100);
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setFont(font);

        verticalLayout->addWidget(backBtn, 0, Qt::AlignLeft);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName("userLabel");
        userLabel->setFont(font);
        userLabel->setAlignment(Qt::AlignCenter);
        userLabel->setWordWrap(false);

        horizontalLayout->addWidget(userLabel);

        userLineEdit = new QLineEdit(centralwidget);
        userLineEdit->setObjectName("userLineEdit");
        userLineEdit->setFont(font);

        horizontalLayout->addWidget(userLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setFont(font);
        emailLabel->setAlignment(Qt::AlignCenter);
        emailLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");
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

        horizontalLayout_3->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setFont(font);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        confirmPasswordLabel = new QLabel(centralwidget);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setFont(font);
        confirmPasswordLabel->setAlignment(Qt::AlignCenter);
        confirmPasswordLabel->setWordWrap(false);

        horizontalLayout_5->addWidget(confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(centralwidget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setFont(font);
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(confirmPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        genderLabel = new QLabel(centralwidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setFont(font);
        genderLabel->setAlignment(Qt::AlignCenter);
        genderLabel->setWordWrap(false);

        horizontalLayout_6->addWidget(genderLabel);

        genderComboBox = new QComboBox(centralwidget);
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setFont(font);

        horizontalLayout_6->addWidget(genderComboBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setFont(font);
        ageLabel->setAlignment(Qt::AlignCenter);
        ageLabel->setWordWrap(false);

        horizontalLayout_4->addWidget(ageLabel);

        ageSpinBox = new QSpinBox(centralwidget);
        ageSpinBox->setObjectName("ageSpinBox");
        ageSpinBox->setFont(font);
        ageSpinBox->setAlignment(Qt::AlignCenter);
        ageSpinBox->setMinimum(10);
        ageSpinBox->setMaximum(150);

        horizontalLayout_4->addWidget(ageSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        registerBtn = new QPushButton(centralwidget);
        registerBtn->setObjectName("registerBtn");
        registerBtn->setFont(font);

        verticalLayout->addWidget(registerBtn);

        NewUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuTabs = new QMenu(menubar);
        menuTabs->setObjectName("menuTabs");
        NewUser->setMenuBar(menubar);
        statusbar = new QStatusBar(NewUser);
        statusbar->setObjectName("statusbar");
        NewUser->setStatusBar(statusbar);

        menubar->addAction(menuTabs->menuAction());
        menuTabs->addAction(actionLogin);

        retranslateUi(NewUser);

        QMetaObject::connectSlotsByName(NewUser);
    } // setupUi

    void retranslateUi(QMainWindow *NewUser)
    {
        NewUser->setWindowTitle(QCoreApplication::translate("NewUser", "MainWindow", nullptr));
        actionLogin->setText(QCoreApplication::translate("NewUser", "Login", nullptr));
        backBtn->setText(QCoreApplication::translate("NewUser", "Back", nullptr));
        userLabel->setText(QCoreApplication::translate("NewUser", "User Name:            ", nullptr));
        emailLabel->setText(QCoreApplication::translate("NewUser", "Email:                      ", nullptr));
        passwordLabel->setText(QCoreApplication::translate("NewUser", "Password:               ", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("NewUser", "Confirm Password:", nullptr));
        genderLabel->setText(QCoreApplication::translate("NewUser", "Gender: ", nullptr));
        ageLabel->setText(QCoreApplication::translate("NewUser", "Age:", nullptr));
        ageSpinBox->setSuffix(QCoreApplication::translate("NewUser", " Yrs", nullptr));
        ageSpinBox->setPrefix(QString());
        registerBtn->setText(QCoreApplication::translate("NewUser", "Register", nullptr));
        menuTabs->setTitle(QCoreApplication::translate("NewUser", "Tabs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewUser: public Ui_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
