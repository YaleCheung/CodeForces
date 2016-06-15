/*
 * =====================================================================================
 *
 *       Filename:  a_helpMaths.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/06/16 05:49:21
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
#include <ctype.h>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::vector;

int main(int argc, char* argv[]) {
    string input = "";
    cin >> input;
    vector<int> ivec;
    for(auto c : input) {
        if (isdigit(c)) ivec.push_back(c - '0');
    }
    sort(ivec.begin(), ivec.end());
    int size = ivec.size();
    for(auto i = 0; i < size - 1; ++ i) {
        cout << ivec[i] << "+";
    }
    cout << ivec[size - 1] << endl;
    return 0;
}
