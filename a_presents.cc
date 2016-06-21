/*
 * =====================================================================================
 *
 *       Filename:  a_presents.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/21/16 05:28:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char* argv[]) {
    int number;
    cin >> number;
    unique_ptr<int[]> ptr = std::make_unique<int []>(number + 1);
    int val = 0;
    int i = 1;
    while(cin >> val) {
        ptr[val] = i;
        ++ i;
    }
    for(auto i = 1; i < number; ++ i) 
        cout << ptr[i] << " ";
    cout << ptr[number] << endl;
    return 0;
}
