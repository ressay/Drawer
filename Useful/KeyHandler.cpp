//
// Created by ressay on 01/11/18.
//

#include "KeyHandler.h"

void KeyHandler::addBehavior(void (*function)(int))
{
    functions.push_back(function);
}

void KeyHandler::waitKeys(int time)
{
    int key = cv::waitKey(time);
    for (int i = 0; i < functions.size(); ++i)
    {
        functions[i](key);
    }
}
