/*
 * =====================================================================================
 *
 *       Filename:  c_givenLength.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/21/16 06:22:19
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

int sum(int val) {
    int ret = 0;
    while(val) {
        ret += val % 10;
	val /= 10;
    }
    return ret;
}
int main(int argc, char* argv[]) {
    int n, m;
    cin >> n >> m;
    int val = 1;
    for(auto i = 0; i < n; ++ i) {
        val *= 10;
    }
    int min = -1;
    int max = -1;

    for(int i = val; i < val * 10; ++ i) {
        int positive = sum(i);
	if (positive == m && i > max) {
            max = i;
	}
	if (-1 != max) {
            
	}
    }
}
