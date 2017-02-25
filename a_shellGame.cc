#include <iostream>
using namespace std;

int matrix[6][3] = {1,2,3, 2, 1, 3, 2, 3, 1, 3, 2, 1, 3, 1, 2, 1, 3, 2};
auto solution () {
    auto n = 0;
    auto x = 0;
    cin >> n;
    cin >> x;
    
    // calculate the reminder;
    auto reminder = (n - 1) % 6;
    return matrix[reminder][x - 1];
}

int main(int argc, char* argv[]) {
    cout << solution () << endl;
    return 0;
}