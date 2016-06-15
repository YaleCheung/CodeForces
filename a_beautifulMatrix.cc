/*
 * =====================================================================================
 *
 *       Filename:  a_beautifulMatrix.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/15/16 07:39:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
    int i = 0;
    int val = 0;
    while(cin >> val) {
	if (1 == val)
            break;
        ++ i; 
    }
    int row = i / 5 + 1;
    int col = i % 5 + 1;
    cout << i<< endl;
    cout << row << endl;
    cout << col << endl;
    cout << abs(row - 3) + abs(col - 3);
    return 0;
}
