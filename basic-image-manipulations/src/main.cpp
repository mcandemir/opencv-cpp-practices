#include <iostream>
#include "blurring.hpp"

int main()
{
    cv::Mat img = cv::imread("resources/terry.png");
    cv::Mat averageimg, medianimg, bilateralimg, gaussianimg;

    Blurring blurring;

    blurring.Average(img, averageimg, cv::Size(5, 5));
    blurring.Median(img, medianimg, 15);
    blurring.Bilateral(img, bilateralimg, 15, 95, 45);
    blurring.Guassian(img, gaussianimg, cv::Size(15, 15), 0, 0);

    cv::imshow("This is Terry", img);
    cv::imshow("This is average filtered Terry", averageimg);
    cv::imshow("This is median filtered Terry", medianimg);
    cv::imshow("This is bilateral filtered Terry", bilateralimg);
    cv::imshow("This is gaussian filtered Terry", gaussianimg);
    cv::waitKey();

    return 0;
}