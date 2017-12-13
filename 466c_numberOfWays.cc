#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::array;

const int max_size = 500000 + 1;
using ll = long long;
using Array = array<ll, max_size>;

auto NumberOfWays(Array& input, const int size) -> ll {
    if(0 == size)
        return 0;
    Array sum_array; 
    for(auto i = 0; i <= size; ++ i) {
        if (0 == i)
            sum_array[i] = input[i];
        sum_array[i] = sum_array[i - 1] + input[i];
    }
    
    if(sum_array[size - 1] % 3 != 0)
        return 0;

    ll ret = 0;
    ll left_third = sum_array[size - 1] / 3;
    ll right_third = 2 * left_third;
    for(auto i = 0, count = 0; i < size - 1; ++i) {
        if(sum_array[i] == right_third)
            ret += count;
        if(sum_array[i] == left_third)
            ++ count;
    }
    return ret;
}

int main(int argc, char* argv[]) {
    auto array_size = 0;
    cin >> array_size;
    Array input;
    for(int i = 0; i < array_size; ++ i) {
        cin >> input[i];
    }
    cout << NumberOfWays(input, array_size);
    return 0;
}
