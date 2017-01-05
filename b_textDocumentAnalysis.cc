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
            continue;
        }
        if (s == ')') {
            inside = false;
            pre_is_alpha = false;
            continue;
        } 
        if (!inside && s == '_') {
            if (word_length > longest_word_outside)
                longest_word_outside = word_length;
            word_length = 0;
            pre_is_alpha = false; 
            continue;
        } 
        if (!inside && isalpha(s)) {
            ++ word_length;
            continue;
        } 
        if (inside) {
            if (s == '_') {
                pre_is_alpha = false;
                continue;
            } 
            if (isalpha(s)) {
                if (!pre_is_alpha)
                    ++ number_words;
                pre_is_alpha = true;
                continue;
            } 
        }
    }
    if (word_length > longest_word_outside) 
        longest_word_outside = word_length;
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
