/*
 * =====================================================================================
 *
 *       Filename:  a_translation.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/22/16 08:21:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string str1, str2;
    cin >> str1 >> str2;
    size_t size1 = str1.size();
    size_t size2 = str2.size();
    bool flag = true;
    if (size1 != size2)
        flag = false; 
    else {
        for(int i = 0, j = size1 - 1; i < size1; ++ i, -- j) {
            if (str1[i] != str2[j]) {
                flag = false;
	        break;	
	    }
	}
    }
    if (flag)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
