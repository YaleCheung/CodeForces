/*
 * =====================================================================================
 *
 *       Filename:  a_calFunc.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/16 04:48:48
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
typedef long long ll;
int main(int argc,char* argv[]) {
    ll n;
    cin >> n;
    ll ret = (n % 2) ? n / 2 - n : n / 2;
    cout << ret << endl;
    return 0;
}
