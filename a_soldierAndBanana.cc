/*
 * =====================================================================================
 *
 *       Filename:  a_soldierAndBanana.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/16/16 02:30:57
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
using namespace std;

int main(int argc, char* argv[]) {
    int k = 0; 
    int n = 0;
    int w = 0;
    cin >> k >> n >> w;
    int ret = w * k * (1 + w) / 2;
    cout << (ret - n > 0 ? ret - n : 0) << endl;
    return 0;
}
