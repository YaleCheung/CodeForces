/*
 * =====================================================================================
 *
 *       Filename:  a_nearlyLuckyNumber.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/15/16 08:38:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    int lucky_count = 0;
    for(auto c : str) {
        if ('4' == c || '7' == c) 
	    ++ lucky_count;
    }
    stringstream ss;
    ss << lucky_count;	
    string size;
    ss >> size;
    for(auto c : size) {
	if ('4' != c && '7' != c) {
	    cout << "NO"  << endl;
	    return 0;
	}
    }
    cout << "YES" << endl;
    return 0;
}
