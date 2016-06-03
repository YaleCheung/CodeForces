/*
 * =====================================================================================
 *
 *       Filename:  taxi.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  05/25/16 13:58:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int input_count = 0;
    cin >> input_count;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int input = 0;
    int val = 0;
    while (cin >> input) {
	if (1 == input)
	    ++num1;
	else if (2 == input)
	    ++num2;
	else if (3 == input)
	    ++num3;
	else if (4 == input)
	    ++num4;
    }

    val += num4;
    val += num3;
    val += num2 % 2 ? (num2 / 2 + 1) : (num2 / 2);
    if (num1 > num3) {
	int left_num1 = num1 - num3;
	if (num2 % 2)
	    val += (left_num1 - 2) / 4;
	else
	    val += (left_num1 % 4) ? left_num1 / 4 + 1 : left_num1 / 4;
    }
    cout << val << endl;
    return 0;
}
