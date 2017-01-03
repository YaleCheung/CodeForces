/*
 * =====================================================================================
 *
 *       Filename:  b_parade.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/05/2016 16:38:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int col_num;
    int left, right;
    cin >> col_num;
    int left_order_num = 0;
    int right_order_num = 0;
    int left_max_distance = 0;
    int right_max_distance = 0;
    for(int i = 0; i < col_num; ++ i) {
        cin >> left >> right;
        if (left > right) {
            int left_distance = left - right;
            ++ left_order_num;
            if (left_distance > left_max_distance)
                left_max_distance = left_distance;
        } else if (left < right) {
            int right_distance = right - left;
            ++ right_order_num;
            if (right_distance > right_max_distance)
                right_max_distance = right_distance;
        }
    }
    return 0;
}
