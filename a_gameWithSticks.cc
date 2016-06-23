/*
 * =====================================================================================
 *
 *       Filename:  a_gameWithSticks.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/23/16 06:50:01
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
    int col;
    int row;
    cin >> col >> row;
    int min = col < row ? col : row;
    if (min % 2) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
    return 0;
}

