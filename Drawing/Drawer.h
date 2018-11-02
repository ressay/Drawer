//
// Created by ressay on 02/11/18.
//

#ifndef PROJECT_DRAWER_H
#define PROJECT_DRAWER_H


#include <Useful/Displayer.h>

using namespace cv;
using namespace std;

class Drawer
{
public:
    Mat img;
    int brushSize = 4;
    Scalar color = Scalar(0,0,0);
    Point prev;
    bool prevP = false;

    Drawer(Size);
    void resetImg(Mat img);
    void paint(int x,int y);
    void paint(Point point);
    void resetPrev();

    const Mat &getImg() const;
};


#endif //PROJECT_DRAWER_H
