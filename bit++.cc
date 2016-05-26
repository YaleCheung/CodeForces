/*
 * =====================================================================================
 *
 *       Filename:  bit++.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/25/16 13:12:36
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
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[]) {
    int operator_num = 0;
    cin >> operator_num;
    int val = 0;
    for(auto i = 0; i < operator_num; ++ i) {
        string opt;
        cin >> opt;
	if (string::npos != opt.find("++")) ++ val;
	else if (string::npos != opt.find("--")) -- val;
    }
    cout << val << endl;
    return 0;
}
