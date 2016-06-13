/*
 * =====================================================================================
 *
 *       Filename:  a_boyOrGirl.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/13/16 03:12:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string name("");
    cin >> name;
    int* hash = new int[26];
    for(auto i = 0; i < 26; ++ i) hash[i] = 0;
    for(auto& c : name) {
        c = tolower(c);
        hash[c - 'a'] += 1;
    }
    int count = 0;
    for(auto i = 0; i < 26; ++ i) {
        if(hash[i] != 0)
            ++ count;
    }
    if (count % 2) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}
