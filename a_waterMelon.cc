/*
 * =====================================================================================
 *
 *       Filename:  Watermelon.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/17/16 06:51:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(int argc, char* argv[]) {
    int number = 2;
    cin >> number;
    if(0 == number % 2 && number > 2) 
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
