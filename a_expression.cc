/*
 * =====================================================================================
 *
 *       Filename:  a_expression.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/16 03:55:11
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
    int a, b, c;
    cin >> a >> b >> c;
    if (1 == a) {
        if (1 == c)
            cout << (a + b) + c << endl;
        else
            cout << (a + b) * c << endl;
    }
    else if (1 == c)
        cout << (c + b) * a << endl;
    else if (1 == b){
        int ret;
        ret = a > c ? (c + b) * a : c * (a + b);
        cout << ret << endl;
    } else
        cout << a * b * c << endl;
    return 0;
}
