#include <iostream>
using namespace std;

auto solution (string input) -> int {
    int carry = 0;
    int ret = 0;
    for(auto c : input) {
        if (c == '1')
            ++ ret;
        if (c == '0') {
            ++ ret;
            break;
        }
    }
    return ret;
}

int main(int argc, char* argv[]) {
    size_t size;
    cin >> size;
    string input;
    cin >> input;
    cout << solution(input) << endl;
    return 0;
}