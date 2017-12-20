#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using std::cin;
using std::cout;
using std::string;
using std::sort;
const int max_length = 15 * 75 + 1;

string hash[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
string DrazilAndFactorial(const string& str) {
    string ret = "";
    ret.reserve(max_length);
    for(auto c : str) {
        if ('1' == c || '0' == c)
            continue;
        ret += hash[c - '0'];
    }
    sort(ret.begin(), ret.end(), std::greater<char>());
    return ret;
}

int main(int argc, char* argv[]) {
    auto length = 0;
    cin >> length;
    string input = "";
    cin >> input;
    cout << DrazilAndFactorial(input) << '\n';
    return 0;
}
