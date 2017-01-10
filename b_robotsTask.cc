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
template<typename BidIt>
auto switchDirection(BidIt iter, list<int>& l, Direction direction = RIGHT) -> bool {
    if (RIGHT == direction) {
        if (iter == l.end() && !l.empty()) {
            direction = LEFT; 
            return true;
        }
        return false;
    } else {
        if (iter == l.rend() && !l.empty()) {
            direction = RIGHT;
            return true;
        }
        return false;
    }
}

auto begin(list<int>& l, Direction direction = RIGHT) -> decltype((direction == RIGHT) ? l.begin() : l.rbegin()) {
    if (RIGHT == direction) 
        return l.begin();
    else 
        return l.rbegin();
}

auto end(list<int>& l, Direction direction = RIGHT) -> decltype((direction == RIGHT) ? l.end() : l.rend()){
    if (RIGHT == direction) 
        return l.end();
    else 
        return l.rend();
}

auto solution (list<int> input, int count) -> int {
    int ret= 0;
    int cur_info = 0;
    Direction direction = RIGHT;    

    while(cur_info != count) {
        auto iter = begin(input, direction);
        auto end_iter = end(input, direction);
        while(iter != end_iter) {
            if(*iter <= cur_info) {
                iter = input.erase(iter);
                ++ cur_info;
            } else 
                iter = generalNext(iter, direction);
        }
        if (switchDirection(iter, input, direction)) {
            if (RIGHT == direction)
                direction = LEFT;
            else
                direction = RIGHT;
            ++ ret;
        }
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