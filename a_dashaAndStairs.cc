#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
    if (diff == 1 || diff == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}