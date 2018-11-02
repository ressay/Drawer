//
// Created by ressay on 01/11/18.
//

#ifndef PROJECT_KEYHANDLER_H
#define PROJECT_KEYHANDLER_H

#include <iostream>
#include <vector>
#include <opencv2/highgui.hpp>
using namespace std;

class KeyHandler
{
public:
    vector<void(*)(int)> functions;
    void addBehavior(void(*function)(int));
    void waitKeys(int time);
};


#endif //PROJECT_KEYHANDLER_H
