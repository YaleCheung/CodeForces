/*
 * =====================================================================================
 *
 *       Filename:  a_wordCap.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/08/16 03:32:40
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
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
    string str("");
    cin >> str;
    if(str.size() > 0) 
        str[0] = toupper(str[0]);
    cout << str<< endl;
    return 0;
}
