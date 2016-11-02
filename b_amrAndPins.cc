/*
 * =====================================================================================
 *
 *       Filename:  b_amrAndPins.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/01/2016 10:07:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
using std::cin;
using std::cout;

int main(int argc, char* argv[]) {
    int radius, x, y, x1, y1;
    std::cin >> radius >> x >> y >> x1 >> y1;
    float dis = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    int step = 0;
    while(dis >= 2 * radius) {
        dis -= 2 * radius;
        ++ step;
    }
    if (dis < radius || fabs(dis - radius) < 0.000001) {// on the circle
        std::cout << step << std::endl;
    } else 
        std::cout << ++ step << std::endl;
    return 0;
}
