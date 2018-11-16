//
// Created by ressay on 01/11/18.
//

#include <iostream>
#include <Useful/Clusterer.h>
#include "DetectionPolicy.h"
#include "Useful/BasicMethods.h"

bool DetectionPolicy2PointsAuto::initDetection(Displayer *displayer, Mat frame, bool interrupt)
{
    int h = frame.cols, w = frame.rows;
    int detectorsR = 3;
    Point pt1 = Point(h / 2 - w / 8, w / 2), pt2 = Point(h / 2 + w / 8, w / 2);

    flipFrame(frame);
    if (frame.empty()) return false;

    Mat toDraw = frame.clone();
    circle(toDraw, pt1, detectorsR + 2, Scalar(0, 250, 0), 2);
    circle(toDraw, pt2, detectorsR + 2, Scalar(0, 250, 0), 2);
    putText(toDraw, "tap 'a' after setting colors on green circles", Point(20, 20),
            FONT_HERSHEY_COMPLEX_SMALL, 0.8, Scalar(50, 50, 50));
//    displayer->displayImg(toDraw, "camera");
    imshow("init", toDraw);
    interrupt = waitKey(60) == 'a';
    if (interrupt)
    {
        cvtColor(frame, frame, cv::COLOR_BGR2HSV);
        color1 = getColor(frame, pt1, detectorsR);
        color2 = getColor(frame, pt2, detectorsR);
        cvtColor(frame, frame, cv::COLOR_HSV2BGR);
        cv::destroyAllWindows();
        return true;
    }


    return false;
}

Detection *DetectionPolicy2PointsAuto::getDetectedPoints(Mat imgsrc)
{
    Point p1, p2;
    double scale = 5;
    Mat img = imgsrc.clone();
    cv::resize(img, img, Size(), 1. / scale, 1. / scale);
//    flipFrame(img);
    cvtColor(img, img, cv::COLOR_BGR2HSV);

//        Mat *result = getColorSegmentedImage(img, *color1, Vec3b(range, range, range));
//        Vec3b shift = Vec3b(10,255-(*color1)[1],255-(*color1)[2]);
    Scalar c1 = *color1, c2 = *color2;
    int diff = 8;
    double r = 0.6;
    Vec3b lower = Vec3b(c1[0] - diff, c1[1] * r, 20);
    Vec3b upper = Vec3b(c1[0] + diff, 255, 255);

//        img = saturateImg(img,30);
    Mat *result = getColorSegmentedImage(img, lower, upper);
//        imshow("res1",*result);
//        Vec3b v = (*color1)*ratio+shift;
//        cout << v << endl;
    p1 = getColorPosition(result);
    p1 *= scale;

//        circle(img, p1, 7, Scalar(0, 250, 0), -1);
//        Mat result = segmented->clone();
//        Mat *result2 = getColorSegmentedImage(img, *color2, Vec3b(range, range, range));
//        v = (*color2)*ratio+shift;
//        cout << v << endl;
//        shift = Vec3b(10,255-(*color2)[1],255-(*color2)[2]);
    lower = Vec3b(c2[0] - diff, c2[1] * r, 20);
    upper = Vec3b(c2[0] + diff, 255, 255);

    Mat *result2 = getColorSegmentedImage(img, lower, upper);
//        imshow("res2",*result2);
    p2 = getColorPosition(result2);
    p2 *= scale;
    if (!prev)
    {
        pr1 = Point(p1);
        pr2 = Point(p2);
        prev = true;
    }
    int thresh = 7;
    if (dis(p1, pr1) <= thresh)
        p1 = pr1;
    else
        pr1 = p1;
    if (dis(p2, pr2) <= thresh)
        p2 = pr2;
    else
        pr2 = p2;
    cvtColor(img, img, cv::COLOR_HSV2BGR);
    delete result;
    delete result2;

//    }

    return new Detection2Points(p1, p2);
}

Point DetectionPolicy2PointsAuto::getColorPosition(Mat *segImg)
{

//    Mat filtered = segImg->clone();
//    Mat filtered2 = filtered.clone();
//    medianBlur(filtered,filtered2,3);
    imshow("origin",*segImg);
//    *segImg = filtreMedianNVG(*segImg,3);
//    imshow("median", filtered);
//    filtered = filtreMedianNVG(filtered,5);

//    medianBlur(filtered2,filtered,9);
//    cv::resize(filtered, *segImg, Size(), scale, scale);
//    cv::GaussianBlur(*segImg,*segImg,Size(3,3),0);

//    dilate(*segImg, *segImg, Mat(), Point(-1, -1), 1, 1, 1);
//    imshow("dilated", *segImg);
//    erode(*segImg, *segImg, Mat(), Point(-1, -1), 1, 1, 1);
//    imshow("eroded",*segImg);
//    dilate(*segImg, *segImg, Mat(), Point(-1, -1), 2, 1, 1);
//    dynamicNoiseReduction(segImg,1800,150);
//    threshold(*segImg, *segImg, 100, 255, 0);
    vector<ClusterPoint> points;
    for (int i = 0; i < segImg->rows; ++i)
    {
        for (int j = 0; j < segImg->cols; ++j)
        {
            if (segImg->at<uchar>(i, j) == 255)
            {
                double* vec = new double[2];
                vec[0] = i; vec[1] = j;
                points.emplace_back(vec,2);
            }
        }
    }


    int mx = 0, my = 0, count = 0;
//    for (int i = 0; i < segImg->rows; ++i)
//    {
//        for (int j = 0; j < segImg->cols; ++j)
//        {
//            if (segImg->at<uchar>(i, j) == 255)
//            {
//                my += i;
//                mx += j;
//                count++;
//            }
//        }
//    }
//    if(count)
//    mx/=count; my/=count;
    Mat newImg = Mat(segImg->rows,segImg->cols,CV_8UC3);
    for (int i = 0; i < segImg->rows; ++i)
    {
        for (int j = 0; j < segImg->cols; ++j)
        {
            newImg.at<Vec3b>(i,j) = Vec3b(0,0,0);
            if (segImg->at<uchar>(i, j) == 255)
            {
                count++;
                newImg.at<Vec3b>(i,j) = Vec3b(255,255,255);
            }
        }
    }
    Clusterer clusterer(points);
    vector<Cluster> clusters = clusterer.findClusters(2.5);
    cout << "I m out and number of clusters is " << clusters.size() << endl;
    int minX=INT32_MAX,minY=INT32_MAX,maxX=-1,maxY=-1;
    int maxSize = 0,index=-1;
    for (int k = 0; k < clusters.size(); ++k)
    {
        minX=INT32_MAX,minY=INT32_MAX,maxX=-1,maxY=-1;
        vector<int> pts = clusters[k].indexes;
        if(maxSize < pts.size())
        {
            maxSize = pts.size();
            index = k;
        }
        for (int i : pts)
        {
            if(minX > points[i].vec[0]) minX = points[i].vec[0];
            if(minY > points[i].vec[1]) minY = points[i].vec[1];
            if(maxX < points[i].vec[0]) maxX = points[i].vec[0];
            if(maxY < points[i].vec[1]) maxY = points[i].vec[1];
        }
        rectangle(newImg,Point(minY,minX),Point(maxY,maxX),Scalar(255,0,0));
        circle(newImg,Point(clusters[k].avg.vec[1],clusters[k].avg.vec[0]),3,Scalar(0,0,255));
    }
    minX=INT32_MAX,minY=INT32_MAX,maxX=-1,maxY=-1;
    if(index > -1)
    {
        vector<int> pts = clusters[index].indexes;
        for (int i : pts)
        {
            if (minX > points[i].vec[0]) minX = points[i].vec[0];
            if (minY > points[i].vec[1]) minY = points[i].vec[1];
            if (maxX < points[i].vec[0]) maxX = points[i].vec[0];
            if (maxY < points[i].vec[1]) maxY = points[i].vec[1];
            mx += points[i].vec[1];
            my += points[i].vec[0];
        }
        mx /= pts.size();
        my /= pts.size();
    }
    imshow("clusters", newImg);
    imshow("res", *segImg);
    if (count > 0)
        return {mx, my};
//        return {(minY+maxY)/2*scale,(minX+maxX)/2*scale};
    else return {-1, -1};
}

void DetectionPolicy2PointsAuto::dynamicNoiseReduction(Mat* imgsrc,int var,int size)
{
    int v = var+1,s=size+1,preV=v,preS=s;
    int c = 0;
    Mat img = imgsrc->clone();
    int count = 0;
    while(v>var || s<size)
    {
        c++;
        int mx = 0, my = 0;
        count = 0;
        for (int i = 0; i < img.rows; ++i)
        {
            for (int j = 0; j < img.cols; ++j)
            {
//                if((int)img->at<uchar>(i, j) != 0)
//                    cout << "not zero at " << i << "," << j << " is: " << (int)img->at<uchar>(i, j) << endl;
//                else
//                    cout << "it s zero damn " << img->at<uchar>(i, j) << endl;
                if (img.at<uchar>(i, j) == 255)
                {
                    my += i;
                    mx += j;
                    count++;
                }
            }
        }
        if(!count)break;
        int avgX = mx/count;
        int avgY = my/count;
        mx = 0; my = 0; count = 0;
        for (int i = 0; i < img.rows; ++i)
        {
            for (int j = 0; j < img.cols; ++j)
            {
                if (img.at<uchar>(i, j) == 255)
                {
                    my += pow(i-avgX,2);
                    mx += pow(j-avgY,2);
                    count++;
                }
            }
        }
        v = (my>mx)?my:mx;
        v /= count;
        s = count;
        cout << "v: " << v << " s: " << s << endl;
        if(v > var)
            erode(img, img, Mat(), Point(-1, -1), 2, 1, 1);
        else if(s < size)
            dilate(img, img, Mat(), Point(-1, -1), 2, 1, 1);
        if(preV == v && preS == s) break;
        preV = v;
        preS = s;
    }
    if(count) *imgsrc = img;
    cout << "did " << c << " iterations!" << endl;
}


Point Detection2Points::getCursor()
{
    return (p1 + p2) / 2;
}

void Detection2Points::updateImg(Mat img)
{
    if (p1.x != -1)
        circle(img, p1, 7, Scalar(0, 250, 0), -1);
    if (p2.x != -1)
        circle(img, p2, 7, Scalar(250, 0, 0), -1);
    Scalar c = isCursorActive() ? Scalar(0, 0, 250) : Scalar(125, 125, 125);
    if (detected)
        circle(img, getCursor(), 7, c, -1);
}

bool Detection2Points::isCursorActive()
{
    Point vec = p1 - p2;
    return detected && sqrt(vec.x * vec.x + vec.y * vec.y) <= threshold;
}

Detection2Points::Detection2Points(const Point &p1, const Point &p2) : p1(p1), p2(p2)
{
    detected = (p1.x != -1 && p2.x != -1);
}

bool Detection::isDetected() const
{
    return detected;
}
