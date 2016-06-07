/*
 * =====================================================================================
 *
 *       Filename:  a_stonesOnTheTable.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/07/16 10:00:02
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
    int num = 0;
    string str = "";
    cin >> num;
    cin >> str;
    if(0 == num || 1 == num) {
        cout << 0 << endl;
        return 0;
    }
    int ret = 0;
    char pre = ' ';
    char cur = ' ';
    pre = str[0];
    for(auto i = 1; i < num; ++ i) {
        cur = str[i];
	if (cur == pre) 
            ++ ret;
	else {
            pre = cur;
	}
    }
    cout << ret << endl;
    return 0;
}
