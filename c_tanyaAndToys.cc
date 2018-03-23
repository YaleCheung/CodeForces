#include <iostream>
#include <vector> 
#include <algorithm> 
#include <functional> 
using namespace std; 
using std::sort; // typedefs 
using Money = unsigned long long; 
using IDs = unsigned long long; 
using Toys = std::vector<IDs>; 
using Ret = unsigned long long;

constexpr IDs limit{1000000000 + 2};
auto solution(Money total_money, Toys& toys) -> Toys {
    Toys ret_vec;
    sort(toys.begin(), toys.end());
    IDs toy_pos = 0;
    Ret ret = 0;
    Money costed_money = 0;
    for(unsigned long long i = 1; costed_money <= total_money && i <= limit; ++i) {
        if(i != toys.at(toy_pos))  {
            costed_money += i;
            if (costed_money <= total_money) {
                ret_vec.push_back(i);
                ++ ret;
            }
        } else {
            if (toy_pos < toys.size() - 1)
                ++ toy_pos;
        }
    }
    return ret_vec;
}

int main(int argc, char* argv[]) {
    IDs already_have = 0;
    Money total_money = 0;
    cin >> already_have >> total_money;
    Toys toys(already_have, 0);
    for(IDs i = 0; i < already_have; ++ i) {
        IDs id;
        cin >> id;
        toys.at(i) = id;
    }
    auto ret = solution(total_money, toys);

    cout << ret.size() << '\n';
    for(auto IDs : ret) 
        cout << IDs << ' ';
    return 0;
}
