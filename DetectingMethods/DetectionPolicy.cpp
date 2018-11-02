//
// Created by ressay on 01/11/18.
//

#include <iostream>
#include "DetectionPolicy.h"
#include "Useful/BasicMethods.h"

bool DetectionPolicy2PointsAuto::initDetection(Displayer *displayer, Mat frame, bool interrupt)
{
    int h = frame.cols, w = frame.rows;
    int detectorsR = 3;
    Point pt1 = Point(h / 2 - w/8, w / 2), pt2 = Point(h / 2 + w/8, w / 2);

    flipFrame(frame);
    if (frame.empty()) return false;

    Mat toDraw = frame.clone();
    circle(toDraw, pt1, detectorsR+2, Scalar(0, 250, 0), 2);
    circle(toDraw, pt2, detectorsR+2, Scalar(0, 250, 0), 2);
    putText(toDraw,"tap 'a' after setting colors on green circles",Point(20,20),
            FONT_HERSHEY_COMPLEX_SMALL,0.8,Scalar(50,50,50));
//    displayer->displayImg(toDraw, "camera");
    imshow("init",toDraw);
    interrupt = waitKey(60) == 'a';
    if (interrupt)
    {
        cvtColor(frame,frame,cv::COLOR_BGR2HSV);
        color1 = getColor(frame, pt1, detectorsR);
        color2 = getColor(frame, pt2, detectorsR);
        cvtColor(frame,frame,cv::COLOR_HSV2BGR);
        cv::destroyAllWindows();
        return true;
    }


    return false;
}

Detection* DetectionPolicy2PointsAuto::getDetectedPoints(Mat img)
{
    Point p1, p2;
//    if (color1 && color2)
//    {
        flipFrame(img);
        cvtColor(img,img,cv::COLOR_BGR2HSV);
//        uchar range = 25;
        double ratio = 0.;

//        Mat *result = getColorSegmentedImage(img, *color1, Vec3b(range, range, range));
//        Vec3b shift = Vec3b(10,255-(*color1)[1],255-(*color1)[2]);
        Scalar c1 = *color1,c2 = *color2;
        Vec3b lower = Vec3b(c1[0]-8,c1[1]*0.8,20);
        Vec3b upper = Vec3b(c1[0]+8,255,255);
//        img = saturateImg(img,30);
        Mat *result = getColorSegmentedImage(img, lower,upper);
//        imshow("res1",*result);
//        Vec3b v = (*color1)*ratio+shift;
//        cout << v << endl;
        p1 = getColorPosition(result);

//        circle(img, p1, 7, Scalar(0, 250, 0), -1);
//        Mat result = segmented->clone();
//        Mat *result2 = getColorSegmentedImage(img, *color2, Vec3b(range, range, range));
//        v = (*color2)*ratio+shift;
//        cout << v << endl;
//        shift = Vec3b(10,255-(*color2)[1],255-(*color2)[2]);
        lower = Vec3b(c2[0]-8,c2[1]*0.8,20);
        upper = Vec3b(c2[0]+8,255,255);
        Mat *result2 = getColorSegmentedImage(img, lower,upper);
//        imshow("res2",*result2);
        p2 = getColorPosition(result2);
        if(!prev)
        {
            pr1 = Point(p1);
            pr2 = Point(p2);
            prev = true;
        }
        int thresh = 7;
        if(dis(p1,pr1) <= thresh)
            p1 = pr1;
        else
            pr1 = p1;
        if( dis(p2,pr2) <= thresh)
            p2 = pr2;
        else
            pr2 = p2;
//        p1 = (2*pr1+p1)/3;
//        p2 = (2*pr2+p2)/3;
//        pr1 = p1;
//        pr2 = p2;

//        filtreMedianNVG(*segmented,result,5);
//        imshow("filtered",*result);
//        imshow("filtered2",*result2);
        cvtColor(img,img,cv::COLOR_HSV2BGR);
        delete result;
        delete result2;

//    }

    return new Detection2Points(p1,p2);
}

Point DetectionPolicy2PointsAuto::getColorPosition(Mat *segImg)
{
    double scale = 2;
    cv::resize(*segImg, *segImg, Size(), 1. / scale, 1. / scale);
    Mat filtered = filtreMedianNVG(*segImg,3);
    filtered = filtreMedianNVG(filtered,3);
    cv::resize(filtered, *segImg, Size(), scale, scale);

//    imshow("res",*segImg);
    int mx = 0, my = 0, count = 0;
    for (int i = 0; i < segImg->rows; ++i)
    {
        for (int j = 0; j < segImg->cols; ++j)
        {
            if (segImg->at<uchar>(i, j) == 255)
            {
                my += i;
                mx += j;
                count++;
            }
        }
    }
    if(count > 0)
    return {mx / count, my / count};
    else return {-1,-1};
}



Point Detection2Points::getCursor()
{
    return (p1+p2)/2;
}

void Detection2Points::updateImg(Mat img)
{
    if(p1.x != -1)
        circle(img,p1,7,Scalar(0,250,0),-1);
    if(p2.x != -1)
        circle(img,p2,7,Scalar(250,0,0),-1);
    Scalar c = isCursorActive()?Scalar(0,0,250):Scalar(125,125,125);
    if(detected)
        circle(img,getCursor(),7,c,-1);
}

bool Detection2Points::isCursorActive()
{
    Point vec = p1-p2;
    return detected && sqrt(vec.x*vec.x+vec.y*vec.y) <= threshold;
}

Detection2Points::Detection2Points(const Point &p1, const Point &p2) : p1(p1), p2(p2)
{
    detected = (p1.x != -1 && p2.x != -1);
}

bool Detection::isDetected() const
{
    return detected;
}
