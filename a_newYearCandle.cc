/*
 * =====================================================================================
 *
 *       Filename:  a_newYearCandle.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/23/16 07:01:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int candle_num = 0;
    int make_candle = 0;
    cin >> candle_num >> make_candle;
    int rest = 0;
    int ret = candle_num;
    int last_rest = 0;
    while(candle_num) {
	rest += candle_num % make_candle;
	candle_num /= make_candle;
	last_rest = candle_num % make_candle;
	ret += candle_num;
	cout << ret << endl;
	if (candle_num == 0 && rest >= make_candle) {
	    candle_num = rest; //+ last_rest;
	    rest = 0;
	}
	else if (candle_num == 0 && rest < make_candle) 
	    break;
    }
    cout << ret << endl;
    return 0;
}
