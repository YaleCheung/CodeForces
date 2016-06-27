/*
 * =====================================================================================
 *
 *       Filename:  a_vasyaSocks.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/16 02:07:22
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
    int i = 1;
    int m = 0;
    int n = 0;
    cin >> n >> m;
    while(1) {
        int sock_left = n - i + i / m;
        if (0 == sock_left) {
            cout << i << endl;
            break;
        }
        ++ i;
    }
    return 0;
}
