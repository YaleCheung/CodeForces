/*
 * =====================================================================================
 *
 *       Filename:  a_rewards.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/01/16 08:32:56
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
    int cups = 0;
    int medals = 0;
    for(int i = 0; i < 3; ++ i) {
        int val = 0;
	cin >> val;
	cups += val;
    }
    for(int i = 0; i < 3; ++ i) {
        int val = 0;
	cin >> val;
	medals += val;
    }
    int n = 0;
    cin >> n;
    int total = ((cups % 5) ? cups / 5 + 1 : cups / 5) + 
	    ((medals % 10) ? medals / 10 + 1 : medals / 10);
    if (total <= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
