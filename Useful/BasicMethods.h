//
// Created by ressay on 01/11/18.
//

#ifndef PROJECT_BASICMETHODS_H
#define PROJECT_BASICMETHODS_H

#endif //PROJECT_BASICMETHODS_H

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;

Mat filtreMedianNVG(Mat src, int voisinage);

Mat filtreMoyenNVG(Mat src, int voisinage);

Mat saturateImg(Mat src, int sat);

bool inRange(Vec3b pixel,const Vec3b & lower,const Vec3b &upper);

Mat* getColorSegmentedImage(Mat org,const Vec3b &lower,const Vec3b &upper);

Vec3b* getColor(Mat org,Point pnt,int size);

void flipFrame(Mat img);

int dis(Point p1, Point p2);

int magn(Point p);