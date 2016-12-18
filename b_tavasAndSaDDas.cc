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
#include <cmath>
using namespace std;

auto solution(string&& str) -> void {
    size_t size = str.size();

    int ret = 0;

    // calculate the ret with size - 1 variance
    for(int i = 0; i < size; ++ i) {
        ret += static_cast<int>(pow(2, i));
    }
    // find the first '7' and calculate the variance 
    size_t pos = 0;
    while((pos = str.find('7', pos)) != string::npos) {
        int left = size - pos - 1;
        if (left >= 0)
            ret += static_cast<int>(pow(2, left));
        ++ pos;
    }
    cout << ret << endl;
}

int main(int argc, char * argv[]) {
    string input;
    cin >> input;
    solution(std::move(input));
    return 0;
}
