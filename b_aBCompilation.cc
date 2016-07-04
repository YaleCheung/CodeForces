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
#include <set>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    multiset<int> first;
    multiset<int> second;
    multiset<int> third;
    for(int i = 0; i < n; ++ i) {
        int val = 0;
	cin >> val;
        first.insert(val);
    }
    for(int i = 0; i < n - 1; ++ i) {
        int val = 0;
	cin >> val;
        second.insert(val);
    }
    for(int i = 0; i < n - 2; ++ i) {
        int val = 0;
	cin >> val;
        third.insert(val);	
    }
    for(auto iter = first.begin(); iter != first.end(); ++ iter) {
        if (second.count(*iter) >= first.count(*iter))
            continue;
	else {
            auto iter = 
            first.erase(*iter); 
            cout << *iter << " "; 
        }
    }
    cout << endl;

    for(auto iter = second.begin(); iter != second.end(); ++ iter) {
        if (third.count(*iter) >= second.count(*iter))
            continue;
	else {
            second.erase(*iter);
            cout << *iter << " ";
        } 
    }
    cout << endl;
    return 0;
}
