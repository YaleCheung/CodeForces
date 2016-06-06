/*
 * =====================================================================================
 *
 *       Filename:  a_petyaStrings.cc
 *
 *    Description:  
 *
 *        Version:  2.0
 *        Created:  06/06/26 05:02:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void lower(string& str) {
    size_t size = str.size();
    for(auto i = 0 ; i< size; ++ i) {
        if(str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] - 'A' + 'a';
    }
}
int main(int argc, char* argv[]) {
    string str1;
    string str2;
    cin >> str1 >> str2;
    lower(str2);
    lower(str1);

    cout << str1 << endl;

    cout << str2 << endl;

    if (str1 < str2)
        cout << "-1" << endl;
    else if (str1 > str2)
        cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}
