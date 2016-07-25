/*
 * =====================================================================================
 *
 *       Filename:  b_presentFromLuna.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/25/16 05:14:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;
    for(int i = 1; i <= n + 1; ++ i) {
        int num = -1;
        for(int j = 1; j <= 2 * n + 1; ++ j) {
            if (j > n + 1 - i && j <= n + 1) {
	        std::cout << ++ num << ' ';
            } else if (j > n + 1 && j < n + i + 1) 
                std::cout << -- num << ' ';
            else 
                std::cout << "  ";
	}
	std::cout << std::endl;
    }
    // n + 2 ... 2 * n + 1 line;
    for(int i = 1; i <=  n; ++ i) {
        int num = -1;
        for(int j = 1; j <= 2 * n + 1; ++ j) {
            if (j > i && j <= n + 1) 
                std::cout << ++ num << ' ';
            else if (j <= 2 * n + 1 - i && j > n + 1)
                std::cout << -- num << ' ';
            else 
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}
