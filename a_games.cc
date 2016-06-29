/*
 * =====================================================================================
 *
 *       Filename:  a_games.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/29/16 05:20:45
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


int main(int argc, char* argv[]) {
    int val = 0;
    cin >> val;
    map<int, int> home;
    map<int, int> guest;
    int home_color;
    int guest_color;
    while(cin >> home_color >> guest_color) {
        ++ home[home_color];
        ++ guest[guest_color];
    }
    
    int ret = 0;
    for(auto iter = home.begin(); iter != home.end(); ++ iter) {
        if (guest.count(iter->first))
            ret += iter->second * guest[iter->first];
    }
    cout << ret << endl;
    return 0;
}
