/*
 * =====================================================================================
 *
 *       Filename:  a_lucky_division.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/08/16 03:40:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
    string str("");
    cin >> str;
    bool flag = true;
    for(char c : str) {
        if (c != '4' && c != '7'){
           flag = false; 
	   break;
	}
    } 
    if (true == flag)
        cout << "YES" << endl;
    else {
        int val = 0;
        stringstream ss;
	ss << str;
	ss >> val;
	if (0 == val % 4 || 0 == val % 7) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
