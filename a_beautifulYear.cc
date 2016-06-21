/*
 * =====================================================================================
 *
 *       Filename:  a_beautifulYear.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/21/16 07:57:51
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
using namespace std;
int main(int argc, char* argv[]) {
    int year = 0;
    cin >> year;
    for(int i = year + 1; i < 9200; ++ i) {
        stringstream ss;
	ss << i;
	string str;
	ss >> str;
	if (str[0] != str[1] &&
	    str[0] != str[2] && 
	    str[0] != str[3] &&
	    str[1] != str[2] &&
	    str[1] != str[3] &&
	    str[2] != str[3]) {
           cout << i << endl;
	   break;
	}
    }
    return 0;
}
