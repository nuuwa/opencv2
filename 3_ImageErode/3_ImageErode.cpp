#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(   )
{
    Mat srcImage = imread("1.jpg");
    imshow("Source Picture", srcImage);
    Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
    Mat dstImage;
    erode(srcImage, dstImage, element);
    imshow("Destination Picture", dstImage);
    waitKey(0);

    return 0;
}