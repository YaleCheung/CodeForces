#include <iostream>
#include <array>
using array = std::array;


auto permutation(int k, int n) -> void {
    if (k > n / 2)
        k = n - k;
    int base = 1; 
    int factors = 1;
    for(int i = 0; i < k; ++ i) {
        base *= n - i;
        factors *= i;
    }
    return base / factors;
}

template<uint32_t rows, uint32_t columns>
decltype(auto) solution (array<array<char, columns>, rows>& input){
    int k = 2;
    int horizon_ret = 0;
    for(int i = 0; i < rows; ++ i) {
        int n = 0;
        for(int j = 0; j < columns; ++ j) {
            if (input.at(i).at(j) == 'C')
                ++ n;
        }
        horizon_ret += permutation(2, n);
    }

    int vertical_ret = 0;
    for(int i = 0; i < columns; ++ i) {
        int n = 0;
        for(int j = 0; j < rows; ++ j) {
            if ('C' == input.at(j).at(i)) 
                ++ n;
        }
        vertical_ret += permutation(2, n);
    }
    return horizon_ret + vertical_ret;
}

int main(int argc, char* argv[]) {
    int count;
    cin >> count;
    const rows = count;
    const columns = count;
    array<array<char, columns>, rows> matrix;
    for(int i = 0; i < rows; ++ i) {
        int n = 0;
        for(int j = 0; j < columns; ++ j) {
            char c;
            cin >> c;
            matrix.at(i).at(j) = c;
        }
    }
    return solution(matrix);
}