/*
 * =====================================================================================
 *
 *       Filename:  wayTooLongWords.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/17/16 07:11:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::stringstream;

#define MAGIC_NUM 10
string abbrevation(const string& str) {
    size_t str_size = str.size();
    string ret = "";
    if(str_size < 10)
        ret = str;
    else {
        ret = "";
	ret += str[0];
	int rest_size = str_size - 2;

        stringstream ss;
	ss << rest_size;
	string rest_size_str;
	ss >> rest_size_str;

	ret += rest_size_str;
	ret += str[str_size - 1];
    }
    return ret;
}
int main(int argc, char* argv[]) {
    int line_number = 4;
    cin >> line_number;
    vector<string> words; 
    for(int i = 0; i < line_number; ++ i) {
        string word = "";
	cin >> word;
        words.push_back(word);
    }
    for(int i = 0; i < line_number; ++ i) {
	cout << abbrevation(words[i]) << endl;
    }
    return 0;
}
