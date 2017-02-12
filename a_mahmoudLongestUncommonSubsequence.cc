#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int solution (const string& a, const string& b) {
    if (a == b)
        return -1;
    size_t a_size = a.size();
    size_t b_size = b.size();
    if (a_size != b_size) {
        return a_size > b_size ? a_size : b_size;
    } else 
        return a_size;
}

int main(int argc, char* argv[]) {
    string a, b;
    cin >> a >> b;
    int ret = solution (a, b);
    cout << ret << '\n';
    return 0;
}