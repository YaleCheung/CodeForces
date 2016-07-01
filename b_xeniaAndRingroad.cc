/*
 * =====================================================================================
 *
 *       Filename:  b_xeniaAndRingroad.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/01/16 07:43:02
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
#define ull unsigned long long 
int main(int argc, char* argv[]) {
    ull n, m;
    cin >> n >> m;
    ull cur_pos = 1;
    ull ret = 0;
    for(auto i = 1; i <= m; ++ i) {
        ull task = 0;
	cin >> task;
	if (task >= cur_pos) {
            ret += task - cur_pos;
	    cur_pos = task;
	} else {
            ret += n - cur_pos + task;
	    cur_pos = task;
	}
    }
    cout << ret << endl;
    return 0;
}
