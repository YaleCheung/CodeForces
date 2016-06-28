/*
 * =====================================================================================
 *
 *       Filename:  a_arrivalOfTheGeneral.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/28/16 08:22:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int max_pos = 0;
    int min_pos = 0;
    int max = 0x80000001;
    int min = 0x7fffffff;
    int val = 0;
    int size = 0;
    int ret = 0;
    for(auto i = 0; i < n; ++ i) {
        cin >> val;
	if (val <= min) {
            min = val;
	    min_pos = i;
	} 
	if (val > max) {
            max = val;
	    max_pos = i;
	}
	++ size;
    }
    if (min_pos < max_pos) 
        ret = size - min_pos - 2 + max_pos;
    else 
        ret = size - 1 - min_pos + max_pos;
    cout << ret << endl;
    return 0;
}
