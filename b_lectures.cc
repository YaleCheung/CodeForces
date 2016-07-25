/*
 * =====================================================================================
 *
 *       Filename:  b_lectures.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/25/16 06:51:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <map>
#include <iostream>
#include <utility>

using string = std::string;
using map = std::map<string, string>;

int main(int argc, char* argv[]) {
    int n, m;
    std::cin >> n >> m;
    map first;
    map second;
    for(int i = 0; i < m; ++ i) {
        std::string str1, str2;
	std::cin >> str1;
	std::cin >> str2;
	first.insert(std::make_pair(str1, str2)); 
	second.insert(std::make_pair(str2, str1));
    }
    for(int i = 0; i < n; ++ i) {
        string tmp1;
	std::cin >> tmp1;
	string tmp2;
        if (first.count(tmp1)) 
            tmp2 = first[tmp1];
	else tmp2 = second[tmp1];
	std::cout << (tmp1.size() > tmp2.size() ? tmp2 : tmp1);
	if (i != n - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
