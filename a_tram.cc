/*
 * =====================================================================================
 *
 *       Filename:  a_tram.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/06/16 05:31:24
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
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    int stops;
    cin >> stops;
    int enter;
    int exit;
    int person_num = 0;
    int max = 0;
    while(cin >> exit >> enter) {
        person_num -= exit;
	if (person_num > max)
            max = person_num;
        person_num += enter;
	if (person_num > max)
            max = person_num;
    }
    cout << max << endl;
    return 0;
}
