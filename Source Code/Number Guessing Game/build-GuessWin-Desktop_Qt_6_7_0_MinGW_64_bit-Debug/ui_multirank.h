/********************************************************************************
** Form generated from reading UI file 'multirank.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIRANK_H
#define UI_MULTIRANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiRank
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MultiRank)
    {
        if (MultiRank->objectName().isEmpty())
            MultiRank->setObjectName("MultiRank");
        MultiRank->resize(800, 600);
        centralwidget = new QWidget(MultiRank);
        centralwidget->setObjectName("centralwidget");
        MultiRank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MultiRank);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MultiRank->setMenuBar(menubar);
        statusbar = new QStatusBar(MultiRank);
        statusbar->setObjectName("statusbar");
        MultiRank->setStatusBar(statusbar);

        retranslateUi(MultiRank);

        QMetaObject::connectSlotsByName(MultiRank);
    } // setupUi

    void retranslateUi(QMainWindow *MultiRank)
    {
        MultiRank->setWindowTitle(QCoreApplication::translate("MultiRank", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiRank: public Ui_MultiRank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIRANK_H
