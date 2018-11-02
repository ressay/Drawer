//
// Created by ressay on 01/11/18.
//

#ifndef PROJECT_DETECTIONPOLICY_H
#define PROJECT_DETECTIONPOLICY_H

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "Useful/Displayer.h"

using namespace cv;
using namespace std;

class Detection
{
public:
    bool detected;
    virtual Point getCursor()=0;
    virtual void updateImg(Mat img)=0;
    virtual bool isCursorActive()=0;

    bool isDetected() const;
};

class Detection2Points: public Detection
{
public:
    Point p1;
    Point p2;
    int threshold=70;


    Detection2Points(const Point &p1, const Point &p2);

    bool isCursorActive() override ;

    Point getCursor() override;

    void updateImg(Mat img) override;
};

class DetectionPolicy
{
public:
    virtual bool initDetection(Displayer* displayer, Mat frame,bool interrupt)=0;
    virtual Detection* getDetectedPoints(Mat img)=0;
};


class DetectionPolicy2PointsAuto: public DetectionPolicy
{
public:
    Vec3b* color1= nullptr,*color2= nullptr;
    Point pr1,pr2;
    bool prev = false;
    Point getColorPosition(Mat* segImg);

    bool initDetection(Displayer* displayer, Mat frame,bool interrupt) override;

    Detection* getDetectedPoints(Mat img) override;
};


#endif //PROJECT_DETECTIONPOLICY_H
