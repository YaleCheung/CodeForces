#include <iostream>
#include <limits>
using namespace std;
using u = unsigned int;

auto solution () -> u {
    int count;
    cin >> count;
    u continous_increase_num = 0;
    u ret = 1;
    int pre = std::numeric_limits<int>::min();
    for(int i = 0; i < count; ++ i) {
        int val;
        cin >> val;
        if (val > pre)
            ++ continous_increase_num;
        else {
            if (continous_increase_num > ret)
                ret = continous_increase_num;
            continous_increase_num = 1;
        }
        pre = val;
    }
    return continous_increase_num > ret ? continous_increase_num : ret;
}
int main() {
    cout << solution() << '\n';
    return 0;
}