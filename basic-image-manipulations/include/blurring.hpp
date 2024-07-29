#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

/*

Image Blurring (Image Smoothing)
Image blurring is achieved by convolving the image with a
low-pass filter kernel. It is useful for removing noise.
It actually removes high frequency content (eg: noise, edges)
from the image. So edges are blurred a little bit in this operation
(there are also blurring techniques which don't blur the edges).
OpenCV provides four main types of blurring techniques.

*/

class Blurring
{
public:
    // https://docs.opencv.org/4.x/d4/d86/group__imgproc__filter.html#ga8c45db9afe636703801b0b2e440fce37
    void Average(cv::Mat &src,
                 cv::Mat &dst,
                 cv::Size ksize);

    // https://docs.opencv.org/4.x/d4/d86/group__imgproc__filter.html#ga564869aa33e58769b4469101aac458f9
    void Median(cv::Mat &src,
                cv::Mat &dst,
                int ksize);

    // https://docs.opencv.org/4.x/d4/d86/group__imgproc__filter.html#ga9d7064d478c95d60003cf839430737ed
    void Bilateral(cv::Mat &src,
                   cv::Mat &dst,
                   int d,
                   double sigmaColor,
                   double sigmaSpace);

    // https://docs.opencv.org/4.x/d4/d86/group__imgproc__filter.html#gae8bdcd9154ed5ca3cbc1766d960f45c1
    void Guassian(cv::Mat &src,
                  cv::Mat &dst,
                  cv::Size ksize,
                  double sigmaX,
                  double sigmaY);
};
