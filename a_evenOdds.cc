/*
 * =====================================================================================
 *
 *       Filename:  evenOdds.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/29/16 05:48:22
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
#define ll long long
int main(int argc, char* argv[]) {
    ll n = 0;
    ll k = 0;
    cin >> n >> k;
    ll ret = 0;
    ll odd_num = (n % 2) ? n / 2 + 1 : n / 2;
    if (k <= odd_num)
        ret = 2 * k - 1;
    else ret = (k - odd_num) * 2;
    cout << ret << endl;
    return 0;

}
