//
// Created by ressay on 01/11/18.
//

#include <opencv2/imgproc.hpp>
#include <iostream>
#include "BasicMethods.h"

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

Mat filtreMedianNVG(Mat src, int voisinage){
    Mat dst = src.clone();
//    if (src.channels() != 1 || dst.channels() != 1) return;
//    if (src.rows != dst.rows || src.cols != dst.cols) return;
    if (voisinage % 2 != 1) return Mat();
//    Rect roi = Rect(0, 0, voisinage, voisinage);
    int *voisins = new int[voisinage*voisinage];
    for (int x = 0; x < src.rows; x++){
        for (int y = 0; y < src.cols; y++){
            if (x< (voisinage - 1) / 2 || x>(src.rows - 1 - (voisinage - 1) / 2) || y< (voisinage - 1) / 2 ||
                y>(src.cols - 1 - (voisinage - 1) / 2))
            {
                dst.at<uchar>(x, y) = src.at<uchar>(x, y);
            }
            else
            {
                int sx = x - (voisinage - 1) / 2;
                int sy = y - (voisinage - 1) / 2;
//                Mat img_roi = src(roi);
                for (int i = 0; i < voisinage; i++){
                    for (int j = 0; j < voisinage; j++){
                        voisins[i*voisinage + j] = src.at<uchar>(sx+i,sy+ j);
                    }
                }
                qsort(voisins,(voisinage*voisinage),sizeof(int),compare);
                dst.at<uchar>(x, y) = voisins[(voisinage - 1) / 2 + 1];
            }
        }
    }
    return dst;
}

Mat filtreMoyenNVG(Mat src, int voisinage){
    Mat dst = src.clone();
//    if (src.channels() != 1 || dst.channels() != 1) return;
//    if (src.rows != dst.rows || src.cols != dst.cols) return;
    if (voisinage % 2 != 1) return Mat();
//    Rect roi = Rect(0, 0, voisinage, voisinage);
    int moyenne = 0;
    for (int x = 0; x < src.rows; x++){
        for (int y = 0; y < src.cols; y++){
            if (x< (voisinage - 1) / 2 || x>(src.rows - 1 - (voisinage - 1) / 2) || y< (voisinage - 1) / 2 ||
                y>(src.cols - 1 - (voisinage - 1) / 2))
// pour le bord copier les mêmes valeurs des pixels
            {
                dst.at<uchar>(x, y) = src.at<uchar>(x, y);
            }
            else
            {
                moyenne = 0;
// on centre le voisinage sur le pixel en cours
                int sx = x - (voisinage - 1) / 2;
                int sy = y - (voisinage - 1) / 2;
//                Mat img_roi = src(roi);
                for (int i = 0; i < voisinage; i++){
                    for (int j = 0; j < voisinage; j++){
                        moyenne += src.at<uchar>(sx+i,sy+ j);
                    }
                }
                moyenne /= voisinage*voisinage;
                dst.at<uchar>(x, y) = moyenne;
            }
        }
    }
    return dst;
}

bool inRange(Vec3b pixel,const Vec3b &lower, const Vec3b &upper)
{
    for (int i = 0; i < 3; ++i)
        if(pixel[i] > upper[i] || pixel[i] < lower[i])
            return false;
    return true;
}

Mat* getColorSegmentedImage(Mat org,const Vec3b& lower, const Vec3b &upper)
{
    Mat* mat = new Mat(org.rows,org.cols,CV_8UC1);
//    cout << color << " " << range << endl;
    for (int i = 0; i < org.rows; ++i)
    {
        for (int j = 0; j < org.cols; ++j)
        {

            mat->at<uchar>(i,j) = inRange(org.at<Vec3b>(i,j),lower,upper)?
                                  255:0;
        }
    }
    return mat;
}

Vec3b* getColor(Mat org,Point pnt,int size)
{
//    return new Vec3b(org.at<Vec3b>(pnt));
    int x = pnt.y, y = pnt.x;
    int m[3] = {};
    int count = 0;
    Mat img = org.clone();
    for (int i = x-(size-1)/2; i < x+(size+1)/2; ++i)
    {
        for (int j = y-(size-1)/2; j < y+(size+1)/2; ++j)
        {
            if (i < 0 || i>=org.rows || j < 0 || j >= org.cols)
                continue;

            Vec3b v = org.at<Vec3b>(i,j);
            for (int k = 0; k < 3; ++k)
                m[k]+=v[k];
            count++;
        }
    }
    for (int &i : m)
        i /=count;
    Vec3b* result = new Vec3b(m[0],m[1],m[2]);
    return result;

}

void flipFrame(Mat img)
{
    Mat frame2 = img.clone();
    for (int i = 0; i < frame2.rows; ++i)
    {
        for (int j = 0; j < frame2.cols; ++j)
        {
            img.at<Vec3b>(i,j) = frame2.at<Vec3b>(i,frame2.cols-j-1);
        }
    }
}

Mat saturateImg(Mat src, int sat)
{
    Mat img = src.clone();
    cvtColor(src, img,cv::COLOR_BGR2HSV);

    for (int i=0; i < img.rows ; i++)
    {
        for(int j=0; j < img.cols; j++)
        {
            // You need to check this, but I think index 1 is for saturation, but it might be 0 or 2
            int idx = 1;
            img.at<cv::Vec3b>(i,j)[idx] = img.at<cv::Vec3b>(i,j)[idx]+sat;

            // or:
            // img.at<cv::Vec3b>(i,j)[idx] += adds_constant_value;
        }
    }

// HSV back to BGR
    cvtColor(img,img,cv::COLOR_HSV2BGR);
    return img;
}

int dis(Point p1, Point p2)
{

    return magn(p1-p2);
}

int magn(Point p)
{
    return (int)sqrt(p.x*p.x+p.y*p.y);
}