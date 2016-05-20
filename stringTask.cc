/*
 * =====================================================================================
 *
 *       Filename:  stringTask.cc
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  05/19/16 09:51:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    string vowel = "aeiouyAEIOUY";
    string ret = "";
    string str = "";
    cin >> str;
    for(char a : str) {
        // find a vowel
        if (vowel.find(a) == string::npos) {
            ret += '.';
            cout << a << endl;
	    if (a >= 'A' && a <= 'Z') 
                a = a - 'A' + 'a';
                ret += (a);
	}
    }
    cout << ret << endl;
    return 0;
}
