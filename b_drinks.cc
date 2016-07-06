/*
 * =====================================================================================
 *
 *       Filename:  b_drinks.cc
 *
 *    Description:  j
 *
 *        Version:  1.0
 *        Created:  07/06/16 08:26:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    float ret = 0;
    for(int i = 0; i < n; ++ i) {
        int val = 0;
        cin >> val;
        ret += float(1) / n * float(val) / 100;
    }
    cout << setprecision(10) << ret * 100 << endl;
    return 0;

}
