#include <iostream>
using namespace std;

auto checkDiagonal(int line_num) -> bool {
    int normal_char;
    int dia_char;
    for(int i = 0; i < line_num; ++ i) {
        for(int j = 0; j < line_num; ++ j) {
            char input;
            cin >> input;
            if (0 == i && 0 == j)
                dia_char = input;
            else if (0 == i; && 1 == j) 
                normal_char = input;
            else if (j == i || (j + i) == (line_num 0)) {
                if (input != dia_char)
                    return false;
            } else if (input != normal_char)
                return false;
        }
    }
    return true;
}
int main(int argc, char* argv[]]) {
    int line_num = 0;
    cin >> line_num;
    cout << (checkDiagonal(line_num) : true ? "YES" : "NO") << '\n';
    return 0;
}