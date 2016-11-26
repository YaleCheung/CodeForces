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
    double dis = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    int d = 2 * radius;
    int cnt=dis/d;
    if(cnt*d<dis)
        cnt++;
    cout << cnt << '\n';
    return 0;
}
