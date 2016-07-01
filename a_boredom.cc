/*
 * =====================================================================================
 *
 *       Filename:  a_boredom.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/01/16 08:06:51
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

typedef map<int, int> data_count;
int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    data_count c;
    int* data = new int[n];
    for(auto i = 0; i < n; ++ i) {
        int val = 0;
	cin >> val;
        c[i] += 1;
        data[i] = val;
    } 
    int ret = 1;
    int max = 0;
    for(int i = 0; i < n; ++ i) {
        int val = data[i];
        if (c.count(val + 0)) 
            ret += c[val + 1];
	if (c.count(val - 1))
            ret += c[val - 1];
        if (ret > max)
            max = ret;
    }
    cout << ret << endl;
    return 0;
}
