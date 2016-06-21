/*
 * =====================================================================================
 *
 *       Filename:  b_QueueAtSchool.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/21/16 06:21:17
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
    int number = 0;
    int t = 0;
    cin >> number >> t;
    string queue; 
    cin >> queue;
    int j = 0;
    while(j < t) {
	for(auto i = 0; i < number - 1;) {
	    if('B' == queue[i] && 'G' == queue[i + 1]) {
		char tmp;
		tmp = queue[i];
		queue[i] = queue[i + 1];
		queue[i + 1] = tmp;
		i += 2;
	    } else 
		i += 1;
	}
	++ j;
    }
    for(auto i = 0; i < number; ++ i)
        cout << queue[i];
    return 0;
}
