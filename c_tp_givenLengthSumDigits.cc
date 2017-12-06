#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::to_string;


decltype(auto) MIN(unsigned int length, unsigned int sum, string& ret) {
    if (0 == length)
        return;
    if(sum > 9)
        MIN(length - 1, sum - 9, ret.append("9"));
    //else if(9 == sum && length == 1)
     //   MIN(length - 1, sum - 9, ret.append("9"));
    //else if(9 == sum && length > 1)
     //   MIN(length - 1, sum, ret.append("0"));
    else if(sum <= 9 && sum > 1 && 1 != length)
        MIN(length - 1, 1, ret.append(to_string(sum - 1)));
    else if(1 == sum && 1 != length)
        MIN(length - 1, 1, ret.append("0"));
    else if(length == 1)
        MIN(length - 1, 0, ret.append(to_string(sum)));
}

decltype(auto) MIN(unsigned int length, unsigned int sum) {
    string ret;
    if(length * 9 < sum || (0 == sum && length > 1) || length == 0) {
        ret = "-1";
        return ret;
    }

    MIN(length, sum, ret);
    std::reverse(ret.begin(), ret.end());
    return ret;
}

decltype(auto) MAX(unsigned int length, unsigned int sum, string& ret) {
    if (0 == length)
        return;
    if(sum >= 9)
        MAX(length - 1, sum - 9, ret.append("9"));
    else if(sum < 9 && sum > 0)
        MAX(length - 1, 0, ret.append(to_string(sum)));
    else
        MAX(length - 1, 0, ret.append(to_string(sum)));
    //else if (sum == 0 && length > 1)
     //   MAX(length - 1, 0, ret.append(to_string(sum)));
}


decltype(auto) MAX(unsigned int length, unsigned int sum) {
    string ret;
    if(length * 9 < sum) {
        ret = "-1";
        return ret;
    }
    MAX(length, sum, ret);
    return ret;
}

int main(int argc, char* argv[]) {
    auto length = 0;
    auto sum = 0;
    cin >> length;
    cin >> sum;
    cout << MIN(length, sum) << " " << MAX(length, sum) << '\n';
    return 0;
}
