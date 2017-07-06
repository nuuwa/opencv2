#include <opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main( )
{
	Mat srcImage = imread("1.jpg");
	imshow("Canny", srcImage);
	Mat dstImage,edge,grayImage;

	dstImage.create( srcImage.size(), srcImage.type() );

	cvtColor( srcImage, grayImage, CV_BGR2GRAY );

	blur( grayImage, edge, Size(3,3) );

	Canny( edge, edge, 3, 9,3 );

	imshow("Canny", edge);

	waitKey(0); 

	return 0; 
}