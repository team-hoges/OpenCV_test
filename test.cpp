#include <iostream>
#include <opencv2/core.hpp>
//#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/types_c.h> // for CV_BGR2GRAY constant
#include<vector>
#include <unistd.h>
#include <string>

using namespace cv;

int main(int argc, const char* argv[]) 
{
    Mat  image1,img2,img3;
   // std::vector<std::vector<Point>>imgs_points;//輪郭座標系二次元配列
    image1 = imread("./ans.jpg");
    if(image1.empty()==true){
        return -1;
    }

    //imshow("image",image1);
    //waitKey();
    //img2 = image1;
    cvtColor(image1,img2,CV_BGR2GRAY);
    threshold(img2,img3,200,255,THRESH_BINARY );
    img2 = ~img2;
    imshow("image",img2);
    waitKey();
    
    



    return 0;
}
