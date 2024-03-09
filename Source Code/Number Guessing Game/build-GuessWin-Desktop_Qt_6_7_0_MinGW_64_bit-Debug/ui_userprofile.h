/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QAction *actionHome;
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *userNameLabel;
    QLineEdit *emailLineEdit;
    QLineEdit *ageLineEdit;
    QLabel *emailLabel;
    QLineEdit *rateLineEdit;
    QLabel *rateLabel;
    QLabel *ageLabel;
    QLineEdit *userNameLineEdit;
    QLabel *genderLabel;
    QLineEdit *genderLineEdit;
    QPushButton *backBtn;
    QLabel *photoLabel;
    QPushButton *photoBtn;
    QPushButton *changeInfoBtn;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName("UserProfile");
        UserProfile->setEnabled(true);
        UserProfile->resize(800, 600);
        UserProfile->setMinimumSize(QSize(800, 600));
        UserProfile->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        UserProfile->setFont(font);
        actionHome = new QAction(UserProfile);
        actionHome->setObjectName("actionHome");
        actionLog_Out = new QAction(UserProfile);
        actionLog_Out->setObjectName("actionLog_Out");
        centralwidget = new QWidget(UserProfile);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, -1, -1, 185);
        userNameLabel = new QLabel(centralwidget);
        userNameLabel->setObjectName("userNameLabel");
        userNameLabel->setFont(font);

        gridLayout->addWidget(userNameLabel, 0, 0, 1, 1, Qt::AlignHCenter);

        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emailLineEdit->sizePolicy().hasHeightForWidth());
        emailLineEdit->setSizePolicy(sizePolicy);
        emailLineEdit->setFont(font);
        emailLineEdit->setFrame(true);
        emailLineEdit->setAlignment(Qt::AlignCenter);
        emailLineEdit->setDragEnabled(false);
        emailLineEdit->setReadOnly(false);

        gridLayout->addWidget(emailLineEdit, 1, 1, 1, 1);

        ageLineEdit = new QLineEdit(centralwidget);
        ageLineEdit->setObjectName("ageLineEdit");
        ageLineEdit->setEnabled(false);
        ageLineEdit->setFont(font);
        ageLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ageLineEdit, 3, 1, 1, 1);

        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setFont(font);

        gridLayout->addWidget(emailLabel, 1, 0, 1, 1);

        rateLineEdit = new QLineEdit(centralwidget);
        rateLineEdit->setObjectName("rateLineEdit");
        rateLineEdit->setEnabled(false);
        rateLineEdit->setFont(font);
        rateLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rateLineEdit, 4, 1, 1, 1);

        rateLabel = new QLabel(centralwidget);
        rateLabel->setObjectName("rateLabel");
        rateLabel->setFont(font);

        gridLayout->addWidget(rateLabel, 4, 0, 1, 1);

        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setFont(font);

        gridLayout->addWidget(ageLabel, 3, 0, 1, 1, Qt::AlignVCenter);

        userNameLineEdit = new QLineEdit(centralwidget);
        userNameLineEdit->setObjectName("userNameLineEdit");
        userNameLineEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(userNameLineEdit->sizePolicy().hasHeightForWidth());
        userNameLineEdit->setSizePolicy(sizePolicy);
        userNameLineEdit->setFont(font);
        userNameLineEdit->setAlignment(Qt::AlignCenter);
        userNameLineEdit->setDragEnabled(false);
        userNameLineEdit->setReadOnly(false);

        gridLayout->addWidget(userNameLineEdit, 0, 1, 1, 1);

        genderLabel = new QLabel(centralwidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setFont(font);

        gridLayout->addWidget(genderLabel, 2, 0, 1, 1);

        genderLineEdit = new QLineEdit(centralwidget);
        genderLineEdit->setObjectName("genderLineEdit");
        genderLineEdit->setEnabled(false);
        genderLineEdit->setFont(font);
        genderLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(genderLineEdit, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setFont(font);

        gridLayout_2->addWidget(backBtn, 0, 0, 1, 1, Qt::AlignLeft);

        photoLabel = new QLabel(centralwidget);
        photoLabel->setObjectName("photoLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(photoLabel->sizePolicy().hasHeightForWidth());
        photoLabel->setSizePolicy(sizePolicy1);
        photoLabel->setMaximumSize(QSize(400, 500));
        photoLabel->setFont(font);
        photoLabel->setPixmap(QPixmap(QString::fromUtf8("../../../Practice_QT/Practice_QT/Icons/Male Icon.png")));
        photoLabel->setScaledContents(true);

        gridLayout_2->addWidget(photoLabel, 1, 0, 1, 1);

        photoBtn = new QPushButton(centralwidget);
        photoBtn->setObjectName("photoBtn");
        photoBtn->setFont(font);

        gridLayout_2->addWidget(photoBtn, 2, 0, 1, 1);

        changeInfoBtn = new QPushButton(centralwidget);
        changeInfoBtn->setObjectName("changeInfoBtn");
        changeInfoBtn->setFont(font);

        gridLayout_2->addWidget(changeInfoBtn, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        UserProfile->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserProfile);
        statusbar->setObjectName("statusbar");
        UserProfile->setStatusBar(statusbar);
        menubar = new QMenuBar(UserProfile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        UserProfile->setMenuBar(menubar);

        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QMainWindow *UserProfile)
    {
        UserProfile->setWindowTitle(QCoreApplication::translate("UserProfile", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("UserProfile", "Home", nullptr));
        actionLog_Out->setText(QCoreApplication::translate("UserProfile", "Log Out", nullptr));
        userNameLabel->setText(QCoreApplication::translate("UserProfile", "User Name:", nullptr));
        emailLineEdit->setText(QCoreApplication::translate("UserProfile", "mohamedh2910@gmail.com", nullptr));
        emailLabel->setText(QCoreApplication::translate("UserProfile", "Email:", nullptr));
        rateLabel->setText(QCoreApplication::translate("UserProfile", "Rate:", nullptr));
        ageLabel->setText(QCoreApplication::translate("UserProfile", "Age:", nullptr));
        genderLabel->setText(QCoreApplication::translate("UserProfile", "Gender:", nullptr));
        backBtn->setText(QCoreApplication::translate("UserProfile", "Back", nullptr));
        photoLabel->setText(QString());
        photoBtn->setText(QCoreApplication::translate("UserProfile", "Edit Profile Photo", nullptr));
        changeInfoBtn->setText(QCoreApplication::translate("UserProfile", "Change Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
