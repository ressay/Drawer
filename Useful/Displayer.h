//
// Created by ressay on 01/11/18.
//

#ifndef PROJECT_DISPLAYER_H
#define PROJECT_DISPLAYER_H

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "mainUI.h"

using namespace cv;
using namespace std;

class Displayer
{
public:
    testQT* win;
    Displayer(testQT* win);
    void displayImg(Mat img,string title);
    Size getSizeOf(const string& title);
};


#endif //PROJECT_DISPLAYER_H
