/*
 * =====================================================================================
 *
 *       Filename:  a_hq9+.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/08/16 03:00:58
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


int main(int argc, char* argv[]){
    string format = "HQ9"; 
    string str = "";
    cin >> str;
    for(auto c : str) {
        if(format.find(c) != string::npos) {
            cout << "YES" << endl;
	    return 0;
	}
    } 
    cout << "NO" << endl;
    return 0;
}
