#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main() {
    Mat srcImage = imread("1.jpg");

    imshow("Source Image", srcImage);

    Mat dstImage;
    blur(srcImage, dstImage, Size(7, 7));

    imshow("Destination Image", dstImage);

    waitKey(0);
}