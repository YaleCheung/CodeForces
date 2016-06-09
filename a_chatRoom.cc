/*
 * =====================================================================================
 *
 *       Filename:  a_chatRoom.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/09/16 14:14:14
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
    string word = "hello";
    int j = 0;
    for(int i = 0; i < str.size(); ++ i) {
        if (word[j] == str[i]) {
            ++ j;
            if (j == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
