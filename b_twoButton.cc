#include <iostream>
using std::cout;
using std::endl;
//move
class A {
public:
    A () {
        cout << "normal constructor" << endl;
    }
    A(A&& a) {
        cout << "using move constructor" << endl;
    }
};

int main() {
    A a;
    A b(std::move(a));
    return 0;
}
