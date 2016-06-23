/*
 * =====================================================================================
 *
 *       Filename:  a_designTutoral.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/23/16 06:04:56
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

bool prime(int val) {
    if (val <= 0)
        return false;
    if (1 == val || 2 == val) 
        return true;
    else {
        for(int i = 2; i < val; ++ i) 
            if (val % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    int val;
    cin >> val;
    for(int i = 4; i < val / 2 + 1; ++ i) {
        if ((! prime(i)) && (!prime(val - i))) {
            cout << i << " " << val - i << endl;
            break;
        }
    }
    return 0;
}
