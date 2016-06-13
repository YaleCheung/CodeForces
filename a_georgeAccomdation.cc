/*
 * =====================================================================================
 *
 *       Filename:  a_georgeAccomdation.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/13/16 03:03:40
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
    int rooms;
    cin >> rooms;
    int now;
    int total;
    int ret = 0;
    while(cin >> now >> total) {
        if (total - now > 2)
            ++ ret;
    }
    cout << ret << endl;
    return 0;
}

