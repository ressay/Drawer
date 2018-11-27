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
    QString style_sheet = readTextFile("/home/weiss/CODES/TP-VISION/Drawer/style.qss");
    a.setStyleSheet(style_sheet);
	testQT w;
	w.show();





	return a.exec();
//    VideoCapture cap;
//
////    VideoWriter* writer = nullptr;
////    VideoWriter writer;
//    if(!cap.open(0))
//        return 0;
//
//    DetectionPolicy* detection = new DetectionPolicy2PointsAuto();
//    Displayer* displayer =  new Displayer(&w);
////    detection->initDetection(displayer,cap);
//    Mat frame;
//    while (true)
//    {
//        cap >> frame;
//        vector<Point> points = detection->getDetectedPoints(frame);
//        for (int i = 0; i < points.size(); ++i)
//        {
//            circle(frame,points[i],7,Scalar(0,250,0),-1);
//        }
//        displayer->displayImg(frame,"camera");
//        int key = waitKey(120);
//        if(key == 27) break;
//    }
////    VideoWriter writer("out.avi",VideoWriter::fourcc('M','J','P','G'),10,
////                       Size(w,h));
//    namedWindow("camera",WINDOW_AUTOSIZE);
//
//
//    cap.release();
//    return 0;
}