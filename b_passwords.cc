#include <iostream>
#include <map>
#include <tuple>
#include <vector>
using namespace std;

using IntTuple = std::tuple<int, int>;

auto solution(const map<int, int>& length_hash, string answer, int failure_times, int same_count) -> IntTuple {
    size_t valid_all_key = 0;
    int same_key;
    int ans_size = answer.length();
    for(auto iter = length_hash.begin(); iter != length_hash.end(); ++ iter) {
        int length = iter -> first;
        int hash_val = iter -> second;
        if (length <= ans_size) 
            valid_all_key += hash_val;
    }
    size_t valid_key = valid_all_key - length_hash.at(ans_size);
    return {(valid_key - 1) / failure_times * 5 + valid_key + 1, (valid_all_key - same_count) / failure_times * 5 + valid_all_key - same_count + 1};
}

int main(int argc, char* argv[]) {
    int count, try_size;
    cin >> count >> try_size;
    map<int, int> length_hash;
    vector<string> input;

    string str;
    for(int i = 0; i < count; ++ i) {
        cin >> str;
        length_hash[str.length()] += 1;
        input.emplace_back(str);
    }
    string answer;
    cin >> answer;
    int same_count = 0;
    // cal same_count
    for(int i = 0; i < count; ++ i) {
        if (input.at(i) == answer)
            ++ same_count;
    }
    auto ret = solution(length_hash, answer, try_size, same_count);
    cout << std::get<0>(ret) << " " << std::get<1>(ret) << endl;
    return 0;
}