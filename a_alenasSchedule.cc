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
    int num;
    cin >> num;
    int number;
    bool started = false;
    int ret = 0;
    int pre_zeros = 0;
    for(int i = 0; i < num; ++ i) {
        cin >> number;
        if (1 == number) {
            ++ ret;
            if (started == false)
                started = true;
            if (pre_zeros == 1)
                ++ ret;
            pre_zeros = 0;
        } else if (0 == number){
            if (started == true) {
                ++ pre_zeros;
            }
        }
    }
    cout << ret << '\n';
    return 0;
}
