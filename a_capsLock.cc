/*
 * =====================================================================================
 *
 *       Filename:  a_capsLock.cc
 *
 *    Description:  jjjjjj
 *
 *        Version:  1.0
 *        Created:  06/07/16 07:03:21
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
#include <ctype.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    
    char first = str[0];
    bool should_small = false;
    if (str[0] >= 'a' && str[0] <= 'z') // shoud be 
        should_small = true;
    for(int i = 1; i < str.size(); ++ i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            should_small = true;
	    break;
	}
    }
    if (should_small) {
        str[0] = toupper(str[0]);
        for(int i = 1; i < str.size(); ++ i) {
            str[i] = tolower(str[i]);
	}
    }
    cout << str << endl;
    return 0;
}
