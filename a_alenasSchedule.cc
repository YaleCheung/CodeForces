/*
 * =====================================================================================
 *
 *       Filename:  a_alenasSchedule.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/29/2016 13:12:20
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
    int lesson_num = 0;
    cin >> lesson_num;
    int lesson_order = 0;
    int lesson;
    int pre_empty = 0;
    int ret = 0;
    while(lesson_order < lesson_num) {
        cin >> lesson;
        if(0 == lesson) {
            ++ pre_empty;
        } else {
            if (pre_empty == 1)
                ++ ret;
            ret ++;
            pre_empty = 0;
        }
    }
    cout << ret << endl;
    return 0;
}
