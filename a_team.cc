/*
 * =====================================================================================
 *
 *       Filename:  a_team.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/22/16 15:00:42
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
    int line_number = 0;
    cin >> line_number;
    int ret = 0;
    for(auto i = 0; i < line_number; ++ i) {
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        cin >> p1 >> p2 >> p3;
        if (p1 + p2 + p3 >= 2)
            ret += 1;
    }
    cout << ret << endl;
    return 0;
}

