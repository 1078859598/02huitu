#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{


	cv::Mat picture = Mat::zeros(Size(800, 600), CV_8UC3);

	cv::Point pt;
	pt.x = 60;
	pt.y = 60;
	circle(picture, pt, 60, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::Point pt1;
	cv::Point pt2;
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	line(picture, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width;
	rect.height;
	rectangle(picture, rect, CV_RGB(255, 0, 0), 1, 8, 0);

	cv::imshow("img", picture);
	waitKey(0);
	return 0;
}