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
};

class DrawManager2PointsCursor: public DrawManager
{
public:
    explicit DrawManager2PointsCursor(Displayer *displayer);

    void updateDrawing(Detection* detection) override;
};


#endif //PROJECT_DRAWMANAGER_H
