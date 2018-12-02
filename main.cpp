#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <QtWidgets/QApplication>
#include <QtCore/QFile>
#include "DetectingMethods/DetectionPolicy.h"

#include "Useful/BasicMethods.h"
#include "testqt.h"

using namespace cv;
using namespace std;

QByteArray readTextFile(const QString &file_path) {
    QFile input_file(file_path);
    QByteArray input_data;

    if (input_file.open(QIODevice::Text | QIODevice::Unbuffered | QIODevice::ReadOnly)) {
        input_data = input_file.readAll();
        input_file.close();
        return input_data;
    }
    else {
        return QByteArray();
    }
}



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QString style_sheet = readTextFile("style.qss");
    a.setStyleSheet(style_sheet);
	testQT w;
	w.show();

	return a.exec();

}