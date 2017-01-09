#include <iostream>
#include <string>
using namespace std;

auto solution (string input) -> string {
    size_t size = input.size();
    int pos = -1;
    string ret;
    if ((pos = input.find('0')) != string::npos) {
        ret = input.erase(pos, 1);
        return ret;
    }
    ret = input.erase(0, 1);
    return ret;    
}

int main(int argc, char* argv[]) {
    string input;
    cin >> input;
    auto ret = solution(input);
    cout << ret << '\n';
    return 0;
}