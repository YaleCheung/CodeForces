/*
 * =====================================================================================
 *
 *       Filename:  a_doubleCola.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/22/16 07:12:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    // a solution/
    int n;
    cin >> n;
    int pre = 0;
    int cur = 0;
    for(int i = 1;; ++ i) {
        cur = 5 * pow(2, i) - 5;
	if (cur >= n)
            break;
        pre = cur;
    }
    int this_round = cur - pre;
    int cur_round = n - pre - 1;
    int index = cur_round / (this_round / 5);
    cout << names[index] << endl;
    return 0;
}
