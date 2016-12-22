/*
 * =====================================================================================
 *
 *       Filename:  a_jeffAndDigits.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/22/2016 14:42:31
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


auto solution (string input) -> void {
    int num_0;
    int num_5;
    for(auto c : input) {
        if (c == '0')
            ++ num_0;
        else ++ num_5;
    }
    string ret;
    if (num_0 < 1) {
        cout << "-1" << endl;
    } else {
        if (num_5 < 9) {
            cout << "0" << endl;
            return;
        }
        for(int i = 0; i < num_5 / 9; ++ i)
            ret += "555555555";
        for(int i = 0; i < num_0; ++ i)
            ret += '0';
        cout << ret << endl;
    }
}

int main(int argc, char* arg[]) {
    size_t size = 0;
    cin >> size;
    char c;
    string input;
    for(int i = 0; i < size; ++ i) {
        cin >> c;
        input += c;
    }
    solution(input);
    return 0;
}
