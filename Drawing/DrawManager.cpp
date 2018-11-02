//
// Created by ressay on 02/11/18.
//

#include "DrawManager.h"

#include <utility>

DrawManager::DrawManager(Displayer *displayer) : displayer(displayer),
                                                 drawer(Drawer(displayer->getSizeOf("drawing")))
{
    displayImage(drawer.getImg());
}

void DrawManager::drawCursor(Point p,bool active,Mat img)
{
    Scalar c = active?Scalar(0,0,250):Scalar(125,125,125);
    circle(img, std::move(p),drawer.brushSize,c,-1);
}

void DrawManager::displayImage(Mat img)
{
    displayer->displayImg(img,"drawing");
}


DrawManager2PointsCursor::DrawManager2PointsCursor(Displayer *displayer) : DrawManager(displayer)
{

}

void DrawManager2PointsCursor::updateDrawing(Detection *detection)
{
    Point cursor = detection->getCursor();
    if(detection->isCursorActive())
        drawer.paint(cursor);
    else
        drawer.resetPrev();
    Mat img = drawer.getImg().clone();
    if(detection->isDetected())
        drawCursor(cursor,detection->isCursorActive(),img);
    displayImage(img);
}

