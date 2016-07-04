/*
 * =====================================================================================
 *
 *       Filename:  b_aBCompilation.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/04/16 06:06:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    map<int, int> first;
    map<int, int> second;
    map<int, int> third;
    for(int i = 0; i < n; ++ i) {
        int val = 0;
	cin >> val;
        ++ first[val];
    }
    for(int i = 0; i < n - 1; ++ i) {
        int val = 0;
	cin >> val;
        ++ second[val];
    }
    for(int i = 0; i < n - 2; ++ i) {
        int val = 0;
	cin >> val;
        ++ third[val];
    }
    for(auto iter = first.begin(); iter != first.end(); ++ iter) {
        if (second.count(iter->first) && 
                second[iter->first] >= iter->second)
            continue;
	else {
            -- iter->second; 
            cout << iter->first << " "; 
        }
    }
    cout << endl;

    for(auto iter = second.begin(); iter != second.end(); ++ iter) {
        if (third.count(iter->first) && 
                third[iter->first] >= iter->second)
            continue;
	else {
            -- iter->second; 
            cout << iter->first << " "; 
        }
    }
    cout << endl;
    return 0;
}
