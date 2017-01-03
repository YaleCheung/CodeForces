#include <iostream>
#include <string>
using namespace std;

auto solution (string str) -> string {
    size_t size = str.size();
    // find the first even number; and the last even number;
    int end_even = -1;
    for(auto i = 0; i < size; ++ i) {
        char c = str.at(i);
        if (0 == (c - '0') % 2) {
            if (c < str.at(size -1)){
                str.at(i) = str.at(size - 1);
                str.at(size - 1) = c;
                return str;
            }
            end_even = i;
        }
    }
    if (end_even == -1)
        return "-1";
    else {
        char c = str.at(end_even);
        str.at(end_even) = str.at(size - 1);
        str.at(size - 1) = c;
        return str;
    }
}

int main(int argc, char* argv[]) {
    string input;
    cin >> input;
    cout << solution(input) << endl;
    return 0;
}