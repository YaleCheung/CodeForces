#include <iostream>
#include <string>
using namespace std;

auto solution (string str) -> string {

    // find even numbers;
    size_t size = str.size();
    string ret;
    for(auto i = 1, times = 0; i < size; ++ i) {
        char c = str.at(size - i - 1);
        int num = c - '0';
        if (0 == num % 2) { // even 
            string tmp(str);
            tmp.at(size - i - 1) = tmp.at(size - 1);
            tmp.at(size - 1) = c;
            if (0 == times) {
                ret = tmp;
            } else {
                if (tmp > ret)
                    ret = tmp;
            }
            ++ times;
        }
    }
    return ret.size() ? ret : "-1";
}

int main(int argc, char* argv[]) {
    string input;
    cin >> input;
    cout << solution(input) << endl;
    return 0;
}