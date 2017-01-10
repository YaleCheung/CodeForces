#include <iostream>
#include <list>
using namespace std;


enum Direction {LEFT, RIGHT};

template<typename BidIt>
auto generalNext(BidIt iter, Direction direction = RIGHT) -> BidIt {
    if(RIGHT == direction)
        return std::next(iter);
    else
        return std::prev(iter);
}

auto solution (list<int> input, int count) -> int {
    int ret= 0;
    int cur_info = 0;
    Direction direction = RIGHT;    

    auto iter = input.begin();
    while(cur_info != count) {
        if(*iter <= cur_info) {
            input.erase(iter);
        }
        
}

int main(int argc, char* argv[]) {
    int count;
    cin >> count;
    list<int> input;
    int value;
    for(int i = 0; i < count; ++ i) {
        cin >> value;
        input.push_back(value);
    }
    cout << solution(input, count) << '\n';
    return 0;
}