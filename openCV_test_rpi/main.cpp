//Remember to set up target for which display should picture be shown. Ex: Add export DISPLAY=:0.0 to the Configuration Properties–>Debugging–>Pre-Launch Command.

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
int main()
{
    std::string image_path = "/home/maciejpi/Pictures/pic.jpg";
    Mat img = imread(image_path, IMREAD_COLOR);
    std::cout << "Dupa\n";
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    return 0;
}
