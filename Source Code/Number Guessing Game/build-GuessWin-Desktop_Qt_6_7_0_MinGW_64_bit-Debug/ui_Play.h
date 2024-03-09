/********************************************************************************
** Form generated from reading UI file 'Play.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Play
{
public:
    QWidget *centralwidget;
    QPushButton *backBtn;
    QLabel *guessLabel;
    QPushButton *checkBtn;
    QLabel *background;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *playerNamelabel;
    QPushButton *hintBtn;
    QLabel *enterLabel;
    QSpinBox *enterSpinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Play)
    {
        if (Play->objectName().isEmpty())
            Play->setObjectName("Play");
        Play->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Play->sizePolicy().hasHeightForWidth());
        Play->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Play->setFont(font);
        centralwidget = new QWidget(Play);
        centralwidget->setObjectName("centralwidget");
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(10, 10, 80, 29));
        backBtn->setFont(font);
        guessLabel = new QLabel(centralwidget);
        guessLabel->setObjectName("guessLabel");
        guessLabel->setGeometry(QRect(170, 20, 481, 85));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Curlz MT")});
        font1.setPointSize(48);
        font1.setBold(true);
        guessLabel->setFont(font1);
        guessLabel->setAlignment(Qt::AlignCenter);
        checkBtn = new QPushButton(centralwidget);
        checkBtn->setObjectName("checkBtn");
        checkBtn->setGeometry(QRect(360, 490, 121, 41));
        checkBtn->setFont(font);
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 800, 600));
        background->setMinimumSize(QSize(800, 600));
        background->setMaximumSize(QSize(800, 600));
        background->setPixmap(QPixmap(QString::fromUtf8("../build-GuessWin-Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Files/Background.jpg")));
        background->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 350, 691, 69));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        playerNamelabel = new QLabel(layoutWidget);
        playerNamelabel->setObjectName("playerNamelabel");
        playerNamelabel->setFont(font);

        horizontalLayout_2->addWidget(playerNamelabel);

        hintBtn = new QPushButton(layoutWidget);
        hintBtn->setObjectName("hintBtn");
        hintBtn->setFont(font);

        horizontalLayout_2->addWidget(hintBtn, 0, Qt::AlignRight);

        enterLabel = new QLabel(centralwidget);
        enterLabel->setObjectName("enterLabel");
        enterLabel->setGeometry(QRect(60, 391, 49, 68));
        enterLabel->setFont(font);
        enterSpinBox = new QSpinBox(centralwidget);
        enterSpinBox->setObjectName("enterSpinBox");
        enterSpinBox->setGeometry(QRect(115, 410, 634, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enterSpinBox->sizePolicy().hasHeightForWidth());
        enterSpinBox->setSizePolicy(sizePolicy1);
        enterSpinBox->setFont(font);
        enterSpinBox->setMinimum(0);
        enterSpinBox->setMaximum(1000);
        Play->setCentralWidget(centralwidget);
        background->raise();
        layoutWidget->raise();
        backBtn->raise();
        guessLabel->raise();
        checkBtn->raise();
        enterLabel->raise();
        enterSpinBox->raise();
        enterLabel->raise();
        enterSpinBox->raise();
        menubar = new QMenuBar(Play);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Play->setMenuBar(menubar);
        statusbar = new QStatusBar(Play);
        statusbar->setObjectName("statusbar");
        Play->setStatusBar(statusbar);

        retranslateUi(Play);

        QMetaObject::connectSlotsByName(Play);
    } // setupUi

    void retranslateUi(QMainWindow *Play)
    {
        Play->setWindowTitle(QCoreApplication::translate("Play", "MainWindow", nullptr));
        backBtn->setText(QCoreApplication::translate("Play", "Back", nullptr));
        guessLabel->setText(QCoreApplication::translate("Play", "Guess The Number", nullptr));
        checkBtn->setText(QCoreApplication::translate("Play", "Check", nullptr));
        background->setText(QString());
        playerNamelabel->setText(QCoreApplication::translate("Play", "Player No: ", nullptr));
        hintBtn->setText(QCoreApplication::translate("Play", "Hint", nullptr));
        enterLabel->setText(QCoreApplication::translate("Play", "Enter: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Play: public Ui_Play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
