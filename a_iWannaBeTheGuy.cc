/*
 * =====================================================================================
 *
 *       Filename:  a_iWannaBeTheGuy.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/29/16 03:22:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    auto ptr = make_unique<int[]>(n + 1);
    // init
    for(auto i = 0; i < n + 1; ++ i) 
        ptr[i] = 0;
    int val = 0;
    while(cin >> val)
	ptr[val] = 1;
    for(auto i = 1; i < n + 1; ++ i) {
        if (0 == ptr[i]) {
            cout << "Oh, my keyboard!" <<endl;
	    return 0;
	}
    }
    cout << "I become the guy." << endl;
    return 0;
}
