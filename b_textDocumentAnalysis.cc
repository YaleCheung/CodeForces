#include <iostream>
#include <tuple>
#include <cctype>
using namespace std;

auto solution(const string& input) -> tuple<int, int> {
    int longest_word_outside = 0;

    int word_length = 0;
    int number_words = 0;

    bool inside = false;
    bool pre_is_alpha = false;
    for(auto s : input) {
        if (s == '(') {
            inside = true;
            if (word_length > longest_word_outside)
                longest_word_outside = word_length;
            word_length = 0;
            pre_is_alpha = false;
        }
        if (s == ')') {
            inside = false;
            pre_is_alpha = false;
        } 
        if (!inside && s == '_') {
            if (word_length > longest_word_outside)
                longest_word_outside = word_length;
            word_length = 0;
            pre_is_alpha = false; 
        } 
        if (!inside && isalpha(s)) {
            cout << s << '\n';
            ++ word_length;
        } 
        if (inside) {
            if (s == '_')
                pre_is_alpha = false;
            if (isalpha(s) && !pre_is_alpha)
                ++ number_words;
            if (isalpha(s))
                pre_is_alpha = true;
        }
    }
    return {longest_word_outside, number_words};
}

int main(int argc, char* argv[]) {
    int length;
    cin >> length;
    string input;
    cin >> input;
    
    auto ret = solution(input);
    cout << std::get<0>(ret) << ' ' << std::get<1>(ret) << '\n';
    return 0;
}

//Q(___)_u(_U)HG