/*
 * =====================================================================================
 *
 *       Filename:  theatre_square.cc
 *
 *    Description:  the theatre square. 
 *
 *        Version:  1.0
 *        Created:  05/12/16 09:31:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangyi
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;
typedef long long
 ll;
int main(int argc, char *argv[])
{
    ll col_len = 0;
    ll row_len = 0;
    ll square = 0;
    //scanf("%d %d %d\n", &col_len, &row_len, &square);
    cin >> col_len >> row_len >> square;

    ll col_num = col_len / square;
    ll row_num = row_len / square;
    float col_float = float (col_len) / square;
    float row_float = float (row_len) / square;
    if (col_float - col_num > 0.000000001)
	col_num += 1;
    if (row_float - row_num > 0.000000001)
	row_num += 1;
    std::cout << col_num * row_num << endl;
    return 0;
}
