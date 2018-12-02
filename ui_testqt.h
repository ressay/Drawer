/********************************************************************************
** Form generated from reading UI file 'testqt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQT_H
#define UI_TESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QCheckBox>
QT_BEGIN_NAMESPACE

class Ui_testQTClass
{
    int selfX = 200, selfY = 200, drawX = 640, drawY = 480;
public:
    QWidget *centralWidget;
//    QWidget *centralWidget2;
    QLabel *selfImg;
    QPushButton *b1;
    QLabel *image_lbl;
//    QMenuBar *menuBar;
//    QToolBar *mainToolBar;
//    QStatusBar *statusBar;
    QCheckBox *debug_checkbox;
    QCheckBox *grouping_checkbox;


    void setupUi(QMainWindow *testQTClass)
    {
        if (testQTClass->objectName().isEmpty())
            testQTClass->setObjectName(QStringLiteral("testQTClass"));
        testQTClass->resize(900, 600);
        centralWidget = new QWidget(testQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
//        centralWidget2 = new QWidget(testQTClass);
//        centralWidget2->setObjectName(QStringLiteral("centralWidget"));
        b1 = new QPushButton(centralWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(10, 15, 251, 28));
        image_lbl = new QLabel(centralWidget);
        image_lbl->setObjectName(QStringLiteral("image_lbl"));
        image_lbl->setGeometry(QRect(10, 60, drawX, drawY));
        selfImg = new QLabel(centralWidget);
        selfImg->setObjectName(QStringLiteral("selfImg"));
        selfImg->setGeometry(QRect(675, 60, selfX, selfY));

        debug_checkbox = new QCheckBox(centralWidget);
        debug_checkbox->setGeometry(300,20,70,20);
        debug_checkbox->setText("Debug");

        grouping_checkbox = new QCheckBox(centralWidget);
        grouping_checkbox->setGeometry(300+70+10,20,100,20);
        grouping_checkbox->setText("Grouping");

        QFont font;
        font.setBold(false);
        font.setWeight(50);
        image_lbl->setFont(font);
        image_lbl->setFrameShape(QFrame::Box);
        image_lbl->setMargin(0);
        selfImg->setFont(font);
        selfImg->setFrameShape(QFrame::Box);
        selfImg->setMargin(0);
        testQTClass->setCentralWidget(centralWidget);
//        menuBar = new QMenuBar(testQTClass);
//        menuBar->setObjectName(QStringLiteral("menuBar"));
//        menuBar->setGeometry(QRect(0, 0, 600, 26));
//        testQTClass->setMenuBar(menuBar);
//        mainToolBar = new QToolBar(testQTClass);
//        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
//        testQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
//        statusBar = new QStatusBar(testQTClass);
//        statusBar->setObjectName(QStringLiteral("statusBar"));
//        testQTClass->setStatusBar(statusBar);

        retranslateUi(testQTClass);

        QMetaObject::connectSlotsByName(testQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *testQTClass)
    {
        testQTClass->setWindowTitle(QApplication::translate("testQTClass", "testQT", Q_NULLPTR));
        b1->setText(QApplication::translate("testQTClass", "start", Q_NULLPTR));
        image_lbl->setText(QApplication::translate("testQTClass", "init colors to start drawing", Q_NULLPTR));
        selfImg->setText(QApplication::translate("testQTClass", "self image", Q_NULLPTR));
    } // retranslateUi

    int getSelfX() const
    {
        return selfX;
    }

    int getSelfY() const
    {
        return selfY;
    }

    int getDrawX() const
    {
        return drawX;
    }

    int getDrawY() const
    {
        return drawY;
    }

};

namespace Ui {
    class testQTClass: public Ui_testQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQT_H
