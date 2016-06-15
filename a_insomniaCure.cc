/*
 * =====================================================================================
 *
 *       Filename:  a_insomniaCure.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/13/16 04:37:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char* argv[]) {
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int d = 0;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    if (1 == k || 1 == l || 1 == m || 1 == n)
        ++ count;
    for(int i = 2; i <= d; ++ i) {
        if(0 == i % k ||
	   0 == i % l ||
           0 == i % m ||
	   0 == i % n) {
            cout << i << endl;
            ++ count; 
        }
    }
    cout << "------>" << endl;
    cout << count << endl;
    return 0;
}
