#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
    const char* imagename = "hezhao.jpeg";
    Mat img = imread(imagename,1);

    if (img.empty()){
        fprintf(stderr, "Can not load image %s\n", imagename);
        return -1;
    }

    imshow("image", img);
    waitKey(0);  // 等待用户按下键盘按键
    destroyAllWindows();  // 确保关闭所有 OpenCV 窗口
    return 0;
}