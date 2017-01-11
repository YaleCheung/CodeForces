#include <iostream>
#include <list>
using namespace std;

int main(int argc, char* argv[]) {
    list<int> ilist{1,2,3,4,5};
    auto iter_begin = (ilist.rend() - 1).base();
    auto iter_end = ilist.rbegin().base();
    while(iter_begin != iter_end)
        cout << *(iter_begin ++) << '\n';
    return 0;
}