/*
 * =====================================================================================
 *
 *       Filename:  magicNumbers.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/02/2016 14:05:57
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

class Solution {
public:
    bool magicNumber(const string& str) {
        size_t size = str.size();
        if (size == 0)
            return false;
        char pre = ' ';
        char cur = ' ';
        char ppre = ' ';

        // traverse the input str;;
        for(int i = 0; i < size; ++ i) {
            cur = str.at(i);
            if (cur == '4') {
                if (pre != '1' && (pre != '4' || ppre != '1'))
                    return false;
            } else {
                if (cur != '1')
                    return false;
            }
            ppre = pre;
            pre = cur;
        }
        return true;
    }
};
int main(int argc, char* argv[]) {
    string input;
    cin >> input;
    bool ret = Solution().magicNumber(input);
    if (ret)
        cout << "YES";
    else
        cout << "NO";
    cout << '\n';
    return 0;
}

