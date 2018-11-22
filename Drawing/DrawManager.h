//
// Created by ressay on 02/11/18.
//

#ifndef PROJECT_DRAWMANAGER_H
#define PROJECT_DRAWMANAGER_H


#include <Useful/Displayer.h>
#include <DetectingMethods/DetectionPolicy.h>
#include "Drawer.h"

class DrawManager
{
public:
    Displayer* displayer;
    Drawer drawer;
    explicit DrawManager(Displayer *displayer);
    virtual void updateDrawing(Detection* detection)=0;
    virtual void drawCursor(Point p,bool active,Mat img);
    virtual void displayImage(Mat img);
    virtual Size getDrawerSize()=0;
};

class DrawManager2PointsCursor: public DrawManager
{
public:
    Mat header;
    Mat colImg;
    int brushSizes[4] = {4,6,9,12};
    int brushIndex = 1;
    bool clicked = false;
    Scalar currentColor = Scalar(0,0,0);
    Scalar highlightColor = Scalar(120,200,200);
    Scalar selectedHighlight = Scalar(200,120,200);
    vector<Scalar> colors;
    vector<Point> positions;
    vector<Point> highlightHover;
    explicit DrawManager2PointsCursor(Displayer *displayer);
    Size getDrawerSize() override;
    void updateDrawing(Detection* detection) override;
    void initHeader();
    void addHeader(Mat img,Mat header);
    void drawColors(Mat img);
    bool inHeader(Point cursor,bool active);
};


#endif //PROJECT_DRAWMANAGER_H
