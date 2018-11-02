//
// Created by ressay on 01/11/18.
//

#include <QtGui/QPixmap>
#include "Displayer.h"

void Displayer::displayImg(Mat img,string title)
{
//    imshow(title,img);
    Mat img2 = img.clone();
    for (int i = 0; i < img.rows; ++i)
    {
        for (int j = 0; j < img.cols; ++j)
        {
            Vec3b v = img.at<Vec3b>(i,j);
            img2.at<Vec3b>(i,j) = Vec3b(v[2],v[1],v[0]);
        }
    }

    if(title == "camera")
    {
        cv::resize(img2,img2,Size(win->ui.getSelfX(),win->ui.getSelfY()));
        win->ui.selfImg->setPixmap(QPixmap::fromImage(QImage(img2.data, img2.cols, img2.rows,
                                                             img2.step, QImage::Format_RGB888)));
    }
    else
        win->ui.image_lbl->setPixmap(QPixmap::fromImage(QImage(img2.data, img2.cols, img2.rows,
                                                             img2.step, QImage::Format_RGB888)));
}

Displayer::Displayer(testQT *win)
{
    this->win = win;
}

Size Displayer::getSizeOf(const string &title)
{
    if(title == "camera")
        return {win->ui.getSelfX(),win->ui.getSelfY()};
    else
        return cv::Size(win->ui.getDrawX(),win->ui.getDrawY());
}
