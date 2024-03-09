/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QAction *actionUser_Profile;
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QPushButton *backBtn;
    QLabel *guessWinLabel;
    QLabel *background;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *rateLineEdit;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QLabel *rateLabel;
    QPushButton *singleBtn;
    QPushButton *multiBtn;
    QPushButton *rulesBtn;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(800, 600);
        Home->setMinimumSize(QSize(800, 600));
        Home->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Home->setFont(font);
        actionUser_Profile = new QAction(Home);
        actionUser_Profile->setObjectName("actionUser_Profile");
        actionLog_Out = new QAction(Home);
        actionLog_Out->setObjectName("actionLog_Out");
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName("centralwidget");
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(10, 10, 80, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        backBtn->setFont(font1);
        guessWinLabel = new QLabel(centralwidget);
        guessWinLabel->setObjectName("guessWinLabel");
        guessWinLabel->setGeometry(QRect(220, 240, 361, 111));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Curlz MT")});
        font2.setPointSize(72);
        font2.setBold(true);
        guessWinLabel->setFont(font2);
        guessWinLabel->setAlignment(Qt::AlignCenter);
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 800, 600));
        background->setMinimumSize(QSize(800, 600));
        background->setMaximumSize(QSize(800, 600));
        background->setFont(font1);
        background->setPixmap(QPixmap(QString::fromUtf8("../build-GuessWin-Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Files/Background.jpg")));
        background->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(520, 10, 271, 109));
        layoutWidget->setFont(font1);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rateLineEdit = new QLineEdit(layoutWidget);
        rateLineEdit->setObjectName("rateLineEdit");
        rateLineEdit->setEnabled(false);
        rateLineEdit->setFont(font1);
        rateLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rateLineEdit, 1, 1, 1, 1);

        userNameLabel = new QLabel(layoutWidget);
        userNameLabel->setObjectName("userNameLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy);
        userNameLabel->setFont(font1);
        userNameLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(userNameLabel, 0, 0, 1, 1);

        userNameLineEdit = new QLineEdit(layoutWidget);
        userNameLineEdit->setObjectName("userNameLineEdit");
        userNameLineEdit->setEnabled(false);
        userNameLineEdit->setFont(font1);
        userNameLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(userNameLineEdit, 0, 1, 1, 1);

        rateLabel = new QLabel(layoutWidget);
        rateLabel->setObjectName("rateLabel");
        sizePolicy.setHeightForWidth(rateLabel->sizePolicy().hasHeightForWidth());
        rateLabel->setSizePolicy(sizePolicy);
        rateLabel->setFont(font1);
        rateLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rateLabel, 1, 0, 1, 1);

        singleBtn = new QPushButton(centralwidget);
        singleBtn->setObjectName("singleBtn");
        singleBtn->setGeometry(QRect(290, 391, 229, 42));
        singleBtn->setFont(font1);
        multiBtn = new QPushButton(centralwidget);
        multiBtn->setObjectName("multiBtn");
        multiBtn->setGeometry(QRect(291, 440, 229, 40));
        multiBtn->setFont(font1);
        rulesBtn = new QPushButton(centralwidget);
        rulesBtn->setObjectName("rulesBtn");
        rulesBtn->setGeometry(QRect(291, 490, 229, 40));
        rulesBtn->setFont(font1);
        Home->setCentralWidget(centralwidget);
        background->raise();
        guessWinLabel->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        backBtn->raise();
        singleBtn->raise();
        multiBtn->raise();
        rulesBtn->raise();
        menubar = new QMenuBar(Home);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        Home->setMenuBar(menubar);
        statusbar = new QStatusBar(Home);
        statusbar->setObjectName("statusbar");
        Home->setStatusBar(statusbar);
        QWidget::setTabOrder(multiBtn, rulesBtn);
        QWidget::setTabOrder(rulesBtn, backBtn);
        QWidget::setTabOrder(backBtn, userNameLineEdit);
        QWidget::setTabOrder(userNameLineEdit, rateLineEdit);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionUser_Profile);
        menuMenu->addAction(actionLog_Out);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "MainWindow", nullptr));
        actionUser_Profile->setText(QCoreApplication::translate("Home", "User Profile", nullptr));
        actionLog_Out->setText(QCoreApplication::translate("Home", "Log Out", nullptr));
        backBtn->setText(QCoreApplication::translate("Home", "Back", nullptr));
        guessWinLabel->setText(QCoreApplication::translate("Home", "GuessWin", nullptr));
        background->setText(QString());
        userNameLabel->setText(QCoreApplication::translate("Home", "User Name: ", nullptr));
        rateLabel->setText(QCoreApplication::translate("Home", "Rate: ", nullptr));
        singleBtn->setText(QCoreApplication::translate("Home", "Single Player", nullptr));
        multiBtn->setText(QCoreApplication::translate("Home", "Multi Player", nullptr));
        rulesBtn->setText(QCoreApplication::translate("Home", "Rules", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Home", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
