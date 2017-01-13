#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

auto solution(vector<int> ivec, int begin, int end) -> unsigned int{
    return accumulate(ivec.begin() + begin - 1, ivec.begin() + end - 1, 0);
}
int main(int argc, char* argv[]) {
    int count;
    cin >> count;
    vector<int> input;
    for(int i = 0; i < count - 1; ++ i) {
        int val;
        cin >> val;
        input.emplace_back(val);
    }
    int begin, end;
    cin >> begin >> end;
    cout << solution(input, begin, end) << '\n';
    return 0;
}