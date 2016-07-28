/*
 * =====================================================================================
 *
 *       Filename:  b_vanyaBooks.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/28/16 08:29:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <limits>
#include <cmath>

using ll = long long;
using std::cin;
using std::cout;
using std::endl;

const int ll_max = 100;

int main(int argc, char* argv[]) {
    ll n;
    cin >> n;
    int bit_num = 0;
    int m = n;
    while(m > 0) {
        m /= 10;
	++ bit_num;
    }
    // call the number;
    ll ret = 0;
    int bit_pos = bit_num;
    while (bit_pos) {
        if (bit_num == bit_pos) {
            ret += bit_pos * (n - pow(10, bit_pos - 1) + 1);
        }
	else if (bit_pos > 1)
            ret += bit_pos * (pow(10, bit_pos) - pow(10, bit_pos - 1));
	else if (bit_pos == 1)
            ret += 9;
	-- bit_pos;
    }
    cout << ret << endl;
    return 0;
}
