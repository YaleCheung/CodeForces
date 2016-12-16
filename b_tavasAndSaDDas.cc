/*
 * =====================================================================================
 *
 *       Filename:  b_tavasAndSaDDas.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2016 22:40:54
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

auto solution(string&& str) -> void {
    size_t size = str.size();

    int ret = 0;

    // calculate the ret with size - 1 variance
    for(int i = 0; i < size; ++ i) {
        ret += static_cast<int>(pow(2, i));
    }
    if (str.at(0) == '7') {
        ret += static_cast<int>(pow(2, size - 1));
    }
    cout << ret;
}
