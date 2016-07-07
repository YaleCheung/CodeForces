/*
 * =====================================================================================
 *
 *       Filename:  b_pashmakFlowers.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/07/16 05:28:40
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
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    map<long long, long long> container;
    for(int i = 0; i < n; ++ i)  {
        int val;
	cin >> val;
        container[val] ++;
    }
    cout << abs(container.begin()->first - container.rbegin()->first)<< " ";
    if (container.begin()->first == container.rbegin()-> first )
        cout << (container.begin()->second * (container.begin()->second - 1)) << endl;
    else cout << container.begin()->second * container.rbegin()->second << endl;
    return 0;
}
