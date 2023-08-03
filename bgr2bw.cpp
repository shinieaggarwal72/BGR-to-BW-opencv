#include<iostream>
#include<string>
#include<sstream>
using namespace std;

#include"opencv2/core.hpp"
#include"opencv2/highgui.hpp"
using namespace cv;

int main(int argc, const char** argv) {
	Mat color = imread("C:\\Users\\shini\\OneDrive\\Desktop\\imagee.jpeg");
	Mat gray = imread("C:\\Users\\shini\\OneDrive\\Desktop\\imagee.jpeg", 0);

	imwrite("C:\\Users\\shini\\OneDrive\\Desktop\\outputimagee.jpeg", gray);

	int myrow = color.cols - 1;
	int mycol = color.rows - 1;
	myrow = 100;
	mycol = 100;
	cout << myrow << endl << mycol << endl;
	Vec3b pixel = color.at<Vec3b>(myrow, mycol);
	cout << "pixel value (B, G, R): " << (int)pixel[0] << (int)pixel[1] << (int)pixel[2]<<endl;

	imshow("BGR", color);
	imshow("gray", gray);
	
	waitKey(0);
	return 0;



}