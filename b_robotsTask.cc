#include <iostream>
#include <list>
using namespace std;


enum Direction {LEFT, RIGHT};

template<typename BidIt>
auto general_next(BidIt iter, Direction direction = RIGHT) -> BidIt {
    if(RIGHT == direction)
        return std::next(iter);
    else
        return std::prev(iter);
}

auto solution (list<int> input, int count) -> int {
    int ret= 0;
    int cur_info = 0;
    Direction direction = RIGHT;    
    while(cur_info != count) {
        for(auto iter = input.begin(); iter != input.end();) {
            if(*iter <= cur_info) {
                ++ cur_info;
                iter = input.erase(iter);
            } else 
                ++ iter;
        }
        if(!input.empty()) 
            ++ ret;
    }
    return ret;
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