//
// Created by ressay on 04/10/18.
//

#ifndef TP1_TESTQT_H
#define TP1_TESTQT_H


#include <QtWidgets/QMainWindow>
#include "ui_testqt.h"

class testQT: public QMainWindow
{
    Q_OBJECT

public:
    testQT(QWidget *parent = 0);
    ~testQT();

public:
    Ui::testQTClass ui;
private slots:
    void testClick();
};


#endif //TP1_TESTQT_H
