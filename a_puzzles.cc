/*
 * =====================================================================================
 *
 *       Filename:  a_puzzles.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/22/16 07:53:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    int m;
    cin >> n >> m;
    vector<int> ivec;
    for(int i = 0; i < m; ++ i) {
        int val;
        cin >> val;
	ivec.push_back(val);
    }
    sort(ivec.begin(), ivec.end());
    int smallest = 0x7fffffff;
    for(int i = 0; i <= m - n; ++ i) {
        if(ivec[i + n - 1] - ivec[i] < smallest) 
            smallest = ivec[i + n - 1] - ivec[i];
    }
    cout << smallest << endl;
    return 0;
}
