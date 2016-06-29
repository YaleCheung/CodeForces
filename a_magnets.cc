/*
 * =====================================================================================
 *
 *       Filename:  a_magnets.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/29/16 03:50:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int pre = 0;
    cin >> pre;
    int ret = 1;
    for(int i = 1; i < n; ++ i) {
        int cur = 0;
	cin >> cur;
	if(cur != pre)
            ++ ret;
        pre = cur;
    }
    cout << ret << endl;
    return 0;
}
