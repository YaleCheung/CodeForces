/*
 * =====================================================================================
 *
 *       Filename:  c_registrationSystem.cc
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  07/11/16 05:17:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <map>
#include <iostream>
#include <utility>
#include <ctype.h>
#include <sstream>
#include <vector>
using namespace std;

typedef map<string, int> Storage;
typedef vector<string> Inputs;

string strNum2Str(const string& str) {
    int i = str.size();
    for(; i > 0; -- i) {
        if(isalpha(str.at(i)))
            break;
    }
    return str.substr(0, i);
}

bool digitEnd(const string& str) {
    return isdigit(str.back());
}
int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    Storage store;
    Inputs input;
    for(int i = 0; i < n; ++ i) {
        string name; 
        cin >> name;
        input.push_back(name);
    }
    for(int i = 0; i < n; ++ i) {
        string name = input[i];
        if(store.count(name)) {
            ++ store[name];
            stringstream ss;
            ss << store[name];
            string order; 
            ss >> order;
            string new_name = name + order;
            store.insert(std::make_pair(new_name, 0));
            // output
            cout << new_name << endl;
        } else {
            store.insert(std::make_pair(name, 0));
            cout << "OK" << endl;
        }
    }
    return 0;
}
