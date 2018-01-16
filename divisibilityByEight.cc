#include <iostream>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::string;
using std::pair;

constexpr int hash_num = 1000;

void divisibilityHash(bool hash[]) {
    for(int i = 0; i <1000; ++ i) {
        if (0 == i % 8)
            hash[i] = true;
    }
}


auto divisibilityByEight(const string& str) -> pair<bool, string> {
    int hash[10] = {0};

    for(auto c : str) 
        ++ hash[c - '0'];

}

