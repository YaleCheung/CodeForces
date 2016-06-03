/*
 * =====================================================================================
 *
 *       Filename:  a_football.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/03/16 04:51:16
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
using namespace std;
// 
int main(int argc, char *argv[])
{
    string seq;
    cin >> seq;
    size_t size = seq.size();
    if (size < 7) {
	cout << "NO" << endl;
	return 0;
    }
    for (size_t i = 0; i < size; ++i) {
	int count = 1;
	char c = seq[i];
	for (size_t j = i + 1; j < size; ++j) {
	    if (seq[j] == c) {
		++count;
		if (7 == count) {
		    cout << "YES" << endl;
		    return 0;
		}
	    } else
		break;
	}

    }
    cout << "NO" << endl;
    return 0;
}
