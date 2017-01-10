#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

auto solution (vector<int> ivec, int count) -> tuple<int, int> {
    auto iter_begin = ivec.begin();
    auto iter_end = ivec.end() - 1;
    auto sereja_sum = 0;
    auto dima_sum = 0;
    auto order = 1;
    while(iter_begin != iter_end + 1) {
        if (order % 2) {
            if (*iter_begin > *iter_end) {
                sereja_sum += *iter_begin;
                ++ iter_begin;
            } else {
                sereja_sum += *iter_end;
                -- iter_end;
            }
        } else {
            if (*iter_begin > *iter_end) {
                dima_sum += *iter_begin;
                ++ iter_begin;
            } else {
                dima_sum += *iter_end;
                -- iter_end;
            }
        }
        ++ order;
    }
    return {sereja_sum, dima_sum};
}

int main(int argc, char* argv[]) {
    int count;
    cin >> count;
    vector<int> input;
    input.reserve(count);
    for(int i = 0; i < count; ++ i) {
        int val;
        cin >> val;
        input.emplace_back(val);
    }
    auto ret = solution(input, count);
    cout << std::get<0>(ret) << " " << std::get<1>(ret) << '\n';
    return 0;
}