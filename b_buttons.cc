/*
 * =====================================================================================
 *
 *       Filename:  b_buttons.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/04/16 02:16:46
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
    int n = 0;
    cin >> n;
    // s_(n) = 1 * (n - 1) + 2 * (n - 2) + 3*(n - 3) + ... + n;
    int ret= 0;
    for(auto i = 1; i < n; ++ i) {
        ret += i * (n - i);
    }
    cout << ret + n << endl;
    return 0;
}
