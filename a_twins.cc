/*
 * =====================================================================================
 *
 *       Filename:  a_twins.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/08/16 03:16:44
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
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    int num = 0;
    cin >> num;
    vector<int> ivec;
    int val = 0;
    int sum = 0;
    while(cin >> val) {
        ivec.push_back(val);
	sum += val;
    }
    sort(ivec.begin(), ivec.end());
    int reminder = 0;
    int coins = 0;
    for(int i = num - 1; i >= 0; -- i) {
        ++ coins;
        reminder += ivec.at(i);
        sum -= ivec.at(i);
	if(reminder > sum) {
            cout << coins << endl; 
	    return 0;
	}
    }
    cout << num << endl; 
    return 0;
}
