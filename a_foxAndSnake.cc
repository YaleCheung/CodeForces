/*
 * =====================================================================================
 *
 *       Filename:  a_foxAndSnake.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/30/16 03:44:41
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
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; ++ i) {
        for(int j = 0; j < k; ++ j) {
            if(0 == i % 2)
                cout  << "#";
	    else {
                if ((i + 1) % 4 == 0 && 0 == j)
                    cout << "#";
                else if (0 != (i + 1) % 4 && (i + 1) % 2 == 0 && k - 1 == j)
                    cout << "#";
                else 
                    cout << ".";
	    }
	}
	cout << endl;
    }
}
