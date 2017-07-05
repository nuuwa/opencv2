#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{

    Mat img=imread("building.jpg");
    imshow("Building",img);
    waitKey(6000);
}