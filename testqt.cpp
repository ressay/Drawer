#include "testqt.h"
#include <QtCore>
#include <QtGui>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc.hpp>
#include <DetectingMethods/DetectionPolicy.h>
#include <Drawing/Drawer.h>
#include <Drawing/DrawManager.h>
#include <Useful/BasicMethods.h>

using namespace cv;
using namespace std;



testQT::testQT(QWidget *parent)
: QMainWindow(parent)
        {
                ui.setupUi(this);
                connect(ui.b1, SIGNAL(clicked()), this, SLOT(testClick()));

        }

testQT::~testQT()
{


}
void testQT::testClick()  {
    VideoCapture cap;

    if(!cap.open(0))
        return ;

    DetectionPolicy* detector = new DetectionPolicy2PointsAuto();
    Displayer* displayer =  new Displayer(this);



    Mat frame;
    // detect the colors automatically
    for(cap >> frame;!detector->initDetection(displayer,frame, false);cap >> frame);

    // init drawer
    DrawManager* drawer = new DrawManager2PointsCursor(displayer);
    // start the drawing process
    while (true)
    {
        cap >> frame;
        flipFrame(frame);
        Detection* detection = detector->getDetectedPoints(frame);
        detection->updateImg(frame);
        drawer->updateDrawing(detection);
        displayer->displayImg(frame,"camera");
        int key = waitKey(1);
        if(key == 27) break;
        delete detection;
    }

    cap.release();
}
