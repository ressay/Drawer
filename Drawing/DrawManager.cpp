//
// Created by ressay on 02/11/18.
//

#include "DrawManager.h"

#include <utility>
#include <iostream>

DrawManager::DrawManager(Displayer *displayer) : displayer(displayer),
                                                 drawer(Drawer(Size()))
{

    displayImage(drawer.getImg());
}



void DrawManager::drawCursor(Point p,bool active,Mat img)
{
    Scalar c = active?drawer.color:Scalar(125,125,125);
    circle(img, std::move(p),drawer.brushSize,c,-1);
}

void DrawManager::displayImage(Mat img)
{
    displayer->displayImg(img,"drawing");
}


DrawManager2PointsCursor::DrawManager2PointsCursor(Displayer *displayer) : DrawManager(displayer)
{
    Size s = getDrawerSize();
    s = Size(s.width,s.height*0.2);
    header = Mat(s,CV_8UC3);

    colors.push_back(Scalar(255,0,0));
//    colors.push_back(Scalar(128,128,0));
    colors.push_back(Scalar(0,255,0));
//    colors.push_back(Scalar(0,128,128));
    colors.push_back(Scalar(0,0,255));
//    colors.push_back(Scalar(128,0,128));
    colors.push_back(Scalar(255,255,255));
    colors.push_back(Scalar(0,0,0));
    initHeader();
    drawer.init(getDrawerSize());
}

void DrawManager2PointsCursor::updateDrawing(Detection *detection)
{
    Point cursor = detection->getCursor();
    bool active = detection->isCursorActive();
    if(!inHeader(cursor,active) && active)
        drawer.paint(cursor);
    else
    {
        drawer.color = currentColor;
        drawer.brushSize = brushSizes[brushIndex];
        drawer.resetPrev();
    }
    Mat img = drawer.getImg().clone();
    Mat head = header.clone();
    drawColors(head);
    addHeader(img,head);
    if(detection->isDetected())
        drawCursor(cursor,detection->isCursorActive(),img);
    displayImage(img);
}

Size DrawManager2PointsCursor::getDrawerSize()
{
    return displayer->getSizeOf("drawing");
}

void DrawManager2PointsCursor::addHeader(Mat img,Mat header)
{
    for (int i = 0; i < header.rows; ++i)
    {
        for (int j = 0; j < header.cols; ++j)
        {
            img.at<Vec3b>(i,j) = header.at<Vec3b>(i,j);
        }
    }
}

void DrawManager2PointsCursor::initHeader()
{
    for (int i = 0; i < header.rows; ++i)
    {
        for (int j = 0; j < header.cols; ++j)
        {
            header.at<Vec3b>(i,j) = Vec3b(64,64,64);
        }
    }
    int dis = header.cols/(colors.size()+1);
    Point position = Point(dis,header.rows*0.70);
    for(Scalar color:colors)
    {
//        circle(header, position, brushSizes[brushIndex]*1.5, color, -1);
        positions.emplace_back(position);
        position.x += dis;
    }
}

void DrawManager2PointsCursor::drawColors(Mat img)
{
    int dis = img.cols/(colors.size()+1);
    Point position = Point(dis,img.rows*0.70);
    int bSize = 5+brushSizes[brushIndex];
//    int bSize = 9;
    for(Point pnt:highlightHover)
        circle(img, pnt, (bSize+2)*header.cols/img.cols, highlightColor, -1);
    for(Scalar color:colors)
    {
        if(currentColor == color)
            circle(img, position, (bSize+2)*header.cols/img.cols,
                   selectedHighlight, -1);
        circle(img, position, bSize*header.cols/img.cols, color, -1);
        position.x += dis;
    }


}
int distance(Point p1, Point p2)
{
    Point r = p1 - p2;
    return sqrt(r.x*r.x + r.y*r.y);
}
bool DrawManager2PointsCursor::inHeader(Point cursor,bool active)
{
    highlightHover.clear();
    if(cursor.y <= header.rows)
    {
        cout << cursor.x << " and " << header.cols << endl;
        bool firstClick = false;
        if(!clicked && active)
        {
            clicked = true;
            firstClick = true;
        }
        if(clicked && !active)
            clicked = false;
        for (int i = 0; i < positions.size(); ++i)
        {
            if(distance(cursor,positions[i]) <= brushSizes[brushIndex]*2)
            {
                cout << "in hover" << endl;
                highlightHover.emplace_back(positions[i]);
                if(firstClick)
                {
                    if(colors[i] == currentColor)
                        brushIndex = (brushIndex+1)%4;
                    else
                        currentColor = colors[i];
                }
            }
        }
        return true;
    }
    cout << "not entered" << endl;
    return false;
}

