#include <iostream>
#include <array>
#include <string>

using std::string;
using std::array;
using std::cout;
using std::cin;
#define SIZE 256

auto solution (const string& str) -> unsigned int {
    array<int, SIZE> alpha_count;
    for(int i = 0; i < SIZE; ++ i)
        alpha_count.at(i) = 0;

    for(char c : str) 
        alpha_count[int(c)] += 1;
    

    int ret = 0;
    for(int i = 0; i < SIZE; ++ i) {
        if (alpha_count.at(i) != 0)
            cout << char(i) << " " << alpha_count.at(i) << '\n';
        if (alpha_count.at(i) > ret)
            ret = alpha_count.at(i);
    }
    return ret;
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    cout << solution(str) << '\n';
    return 0;
}