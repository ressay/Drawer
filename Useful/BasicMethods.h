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

bool inRange(Vec3b pixel,Vec3b color,Vec3b range);

Mat* getColorSegmentedImage(Mat org,Vec3b color,Vec3b range);

Vec3b* getColor(Mat org,Point pnt,int size);

void flipFrame(Mat img);