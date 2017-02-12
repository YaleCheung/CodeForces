#include <iostream> 
#include <vector>
using namespace std;

decltype(auto) solution (const vector<int> vec1, const vector<int>& vec2) {
    size_t size = vec1.size();
    int diff = *vec1.begin() - *vec2.begin();
    for(int i = 1； i < size; ++ i) {
        if (vec1.at(i) - vec2.at(i) != diff)
            return false;
    }
    return true;
}
int main() {
    int n, L;
    vector<int> vec1;
    vector<int> vec2;
    cin >> n >> L;
    vec1.reserve(n);
    vec2.reserve(n);

    int input;
    for(int i = 0; i < n; ++ i) {
        cin >> input;
        vec1.push_back(input);
    }
    for(int i = 0; i < n; ++ i) {
        cin >> input;
        vec2.push_back(input);
    }

    cout << (solution(vec1, vec2) == true ? "YES" : "NO") << '\n';
}
