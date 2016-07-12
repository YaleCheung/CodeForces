/*
 * =====================================================================================
 *
 *       Filename:  b_fedorNewGame.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/06/16 07:56:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> container;
    for(int i = 0; i < m + 1; ++ i) {
        int val;
	cin >> val;
	container.push_back(val);
    }
    int fedor = container.back();
    int ret = 0;
    for(auto i = 0; i < m; ++ i) {
        int start = 1;
	int diff = 0;
	for(int j = 0; j < 31; ++ j) {
            if((start & container[i]) != (start & fedor))
                ++ diff;
	    if(diff > k)
                break;
	    start <<= 1;
	}
	if (diff <= k)
            ++ ret;
    }
    cout << ret * 100 << endl;
    return 0;
}
