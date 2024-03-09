/********************************************************************************
** Form generated from reading UI file 'changeinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEINFO_H
#define UI_CHANGEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeInfo
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *genderComboBox;
    QLineEdit *currPasswordLineEdit;
    QLabel *userLabel;
    QPushButton *updateBtn;
    QLineEdit *confirmPasswordLineEdit;
    QSpinBox *ageSpinBox;
    QLabel *currPasswordLabel;
    QLabel *confirmPasswordLabel;
    QLabel *genderLabel;
    QLabel *ageLabel;
    QLineEdit *userLineEdit;
    QLineEdit *newPasswordLineEdit;
    QLabel *newPasswordLabel;
    QPushButton *backBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChangeInfo)
    {
        if (ChangeInfo->objectName().isEmpty())
            ChangeInfo->setObjectName("ChangeInfo");
        ChangeInfo->resize(800, 600);
        ChangeInfo->setMinimumSize(QSize(800, 600));
        ChangeInfo->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        ChangeInfo->setFont(font);
        centralwidget = new QWidget(ChangeInfo);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(100, 100, 100, 100);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        genderComboBox = new QComboBox(centralwidget);
        genderComboBox->setObjectName("genderComboBox");
        genderComboBox->setFont(font);

        gridLayout->addWidget(genderComboBox, 6, 1, 1, 1);

        currPasswordLineEdit = new QLineEdit(centralwidget);
        currPasswordLineEdit->setObjectName("currPasswordLineEdit");
        currPasswordLineEdit->setFont(font);
        currPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(currPasswordLineEdit, 2, 1, 1, 1);

        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName("userLabel");
        userLabel->setFont(font);
        userLabel->setAlignment(Qt::AlignCenter);
        userLabel->setWordWrap(false);

        gridLayout->addWidget(userLabel, 1, 0, 1, 1);

        updateBtn = new QPushButton(centralwidget);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setFont(font);

        gridLayout->addWidget(updateBtn, 7, 1, 1, 1);

        confirmPasswordLineEdit = new QLineEdit(centralwidget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setFont(font);
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confirmPasswordLineEdit, 4, 1, 1, 1);

        ageSpinBox = new QSpinBox(centralwidget);
        ageSpinBox->setObjectName("ageSpinBox");
        ageSpinBox->setFont(font);
        ageSpinBox->setAlignment(Qt::AlignCenter);
        ageSpinBox->setMinimum(10);
        ageSpinBox->setMaximum(150);

        gridLayout->addWidget(ageSpinBox, 5, 1, 1, 1);

        currPasswordLabel = new QLabel(centralwidget);
        currPasswordLabel->setObjectName("currPasswordLabel");
        currPasswordLabel->setFont(font);
        currPasswordLabel->setAlignment(Qt::AlignCenter);
        currPasswordLabel->setWordWrap(false);

        gridLayout->addWidget(currPasswordLabel, 2, 0, 1, 1);

        confirmPasswordLabel = new QLabel(centralwidget);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setFont(font);
        confirmPasswordLabel->setAlignment(Qt::AlignCenter);
        confirmPasswordLabel->setWordWrap(false);

        gridLayout->addWidget(confirmPasswordLabel, 4, 0, 1, 1);

        genderLabel = new QLabel(centralwidget);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setFont(font);
        genderLabel->setAlignment(Qt::AlignCenter);
        genderLabel->setWordWrap(false);

        gridLayout->addWidget(genderLabel, 6, 0, 1, 1);

        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setFont(font);
        ageLabel->setAlignment(Qt::AlignCenter);
        ageLabel->setWordWrap(false);

        gridLayout->addWidget(ageLabel, 5, 0, 1, 1);

        userLineEdit = new QLineEdit(centralwidget);
        userLineEdit->setObjectName("userLineEdit");
        userLineEdit->setFont(font);

        gridLayout->addWidget(userLineEdit, 1, 1, 1, 1);

        newPasswordLineEdit = new QLineEdit(centralwidget);
        newPasswordLineEdit->setObjectName("newPasswordLineEdit");
        newPasswordLineEdit->setFont(font);
        newPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newPasswordLineEdit, 3, 1, 1, 1);

        newPasswordLabel = new QLabel(centralwidget);
        newPasswordLabel->setObjectName("newPasswordLabel");
        newPasswordLabel->setFont(font);
        newPasswordLabel->setAlignment(Qt::AlignCenter);
        newPasswordLabel->setWordWrap(false);

        gridLayout->addWidget(newPasswordLabel, 3, 0, 1, 1);

        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setFont(font);

        gridLayout->addWidget(backBtn, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        ChangeInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChangeInfo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ChangeInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(ChangeInfo);
        statusbar->setObjectName("statusbar");
        ChangeInfo->setStatusBar(statusbar);

        retranslateUi(ChangeInfo);

        QMetaObject::connectSlotsByName(ChangeInfo);
    } // setupUi

    void retranslateUi(QMainWindow *ChangeInfo)
    {
        ChangeInfo->setWindowTitle(QCoreApplication::translate("ChangeInfo", "MainWindow", nullptr));
        userLabel->setText(QCoreApplication::translate("ChangeInfo", "User Name:", nullptr));
        updateBtn->setText(QCoreApplication::translate("ChangeInfo", "Update", nullptr));
        ageSpinBox->setSuffix(QCoreApplication::translate("ChangeInfo", " Yrs", nullptr));
        ageSpinBox->setPrefix(QString());
        currPasswordLabel->setText(QCoreApplication::translate("ChangeInfo", "Current Password:", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("ChangeInfo", "Confirm Password:", nullptr));
        genderLabel->setText(QCoreApplication::translate("ChangeInfo", "Gender: ", nullptr));
        ageLabel->setText(QCoreApplication::translate("ChangeInfo", "Age:", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("ChangeInfo", "New Password:", nullptr));
        backBtn->setText(QCoreApplication::translate("ChangeInfo", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeInfo: public Ui_ChangeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEINFO_H
