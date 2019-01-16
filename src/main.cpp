#include "network.h"
#include "mtcnn.h"

int main() {

    Mat image = imread("/home/chienthan1997/CLionProjects/MTCNN/1.jpg");
    mtcnn find(image.rows, image.cols);

    clock_t start;
    start = clock();

    find.findFace(image);
    imshow("result", image);
    imwrite("/home/chienthan1997/CLionProjects/MTCNN/result.jpg", image);

    start = clock() - start;
    cout << "Time is " << start / 10e3 << " ms" << endl;

    waitKey(0);
    image.release();
    return 0;
}