/*
 * =====================================================================================
 *
 *       Filename:  a_dubStep.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/28/16 06:06:32
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
    string str;
    cin >> str;
    auto size = str.size();
    string ret;
    bool need_space = false;
    for(auto i = 0; i < size;) {
        if ("WUB" == str.substr(i, 3)) {
            if (need_space) {
                ret += " ";
                need_space = false;
            }
            i += 3;
        }
        else {
            need_space = true;
            ret += str[i ++];
        }
    }
    cout << ret << endl;
    return 0;
}
