#include <iostream>
#include <array>

using namespace std;

auto solution(const int num) -> bool {
    if (num % 2) {
        cout << "-1";
        return false;
    }
    for(int i = 0; i < num / 2; ++ i) {
        cout << i * 2 + 2 << ' ';
        cout << i * 2 + 1 << ' ';
    }
    return true;
}

int main(int argc, char* argv[]) {
    int input;
    cin >> input;
    solution(input);
    return 0;
}