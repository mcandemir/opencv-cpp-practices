#include "blurring.hpp"

void Blurring::Average(cv::Mat &src,
                       cv::Mat &dst,
                       cv::Size ksize)
{
    cv::blur(src, dst, ksize);
}

void Blurring::Median(cv::Mat &src,
                      cv::Mat &dst,
                      int ksize)
{
    cv::medianBlur(src, dst, ksize);
}

void Blurring::Bilateral(cv::Mat &src,
                         cv::Mat &dst,
                         int d,
                         double sigmaColor,
                         double sigmaSpace)
{
    cv::bilateralFilter(src, dst, d, sigmaColor, sigmaSpace);
};

void Blurring::Guassian(cv::Mat &src,
                        cv::Mat &dst,
                        cv::Size ksize,
                        double sigmaX,
                        double sigmaY)
{
    cv::GaussianBlur(src, dst, ksize, sigmaX, sigmaY);
}
