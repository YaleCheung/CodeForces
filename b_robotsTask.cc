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
        if (iter == std::prev(l.rend().base()) && !l.empty()) {
            direction = RIGHT;
            return true;
        }
        return false;
    }
}

template<typename T>
auto begin(list<T>& l, Direction direction = RIGHT) -> decltype(l.begin()) {
    if (RIGHT == direction) 
        return l.begin();
    else 
        return std::prev(l.rbegin().base());
}

template<typename T>
auto end(list<T>& l, Direction direction = RIGHT) -> decltype(l.end()){
    if (RIGHT == direction) 
        return l.end();
    else 
        return std::prev(l.rend().base());
}

template<typename BidIt>
auto generalErase(list<int>& input, BidIt iter, Direction direction = RIGHT) -> decltype(input.begin()) {
    if (direction == RIGHT) {
        iter = input.erase(iter);
        return iter;
    } else {
        auto iter_tmp = std::prev(iter);
        input.erase(iter);
        return iter_tmp;
    }
}

auto solution (list<int> input, int count) -> int {
    int ret= 0;
    int cur_info = 0;
    Direction direction = RIGHT;    

    while(cur_info != count) {
        auto iter = begin(input, direction);
        auto end_iter = end(input, direction);
        while(iter != end_iter) {
            //cout << "meet " << *iter << '\n';
            if(*iter <= cur_info) {
                //cout << "erase " << *iter << '\n';
                iter = generalErase(input, iter, direction);
                //cout << "input size " << input.size() << '\n';
                ++ cur_info;
            } else 
                iter = generalNext(iter, direction);
        }
        //cout << "iter == end_iter" << endl;
        if (switchDirection(iter, input, direction)) {
            //cout << "turn " << direction << " to ";
            if (RIGHT == direction)
                direction = LEFT;
            else
                direction = RIGHT;
            //cout << direction << '\n';
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