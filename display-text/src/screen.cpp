#include "screen.hpp"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

void Screen::display()
{
    cv::Mat img(512, 512, CV_8UC3, cv::Scalar(0));

    cv::putText(img, "Hello, OpenCV!",
                cv::Point(10, img.rows / 2),
                cv::FONT_HERSHEY_DUPLEX,
                1.0,
                CV_RGB(118, 185, 0),
                2);
    cv::imshow("Hello!", img);
    cv::waitKey();
}