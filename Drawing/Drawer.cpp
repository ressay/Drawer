//
// Created by ressay on 02/11/18.
//

#include "Drawer.h"

Drawer::Drawer(Size size)
{
    img = Mat(size,CV_8UC3);
    resetImg(img);
}

void Drawer::resetImg(Mat img)
{
    for (int i = 0; i < img.rows; ++i)
    {
        for (int j = 0; j < img.cols; ++j)
        {
            img.at<Vec3b>(i,j) = Vec3b(255,255,255);
        }
    }
}

void Drawer::paint(int x, int y)
{
    paint(Point(x,y));
}

const Mat &Drawer::getImg() const
{
    return img;
}

void Drawer::paint(Point point)
{
    if(!prevP)
    {
//        circle(img, point, brushSize, color, -1);
        prev = point;
        prevP = true;
    } else
    {
        line(img,prev,point,color,brushSize);
        prev = point;
    }
}

void Drawer::resetPrev()
{
    prevP = false;
}


