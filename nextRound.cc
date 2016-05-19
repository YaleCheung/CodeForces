/*
 * =====================================================================================
 *
 *       Filename:  nextRound.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/18/16 07:28:52
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
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(int argc, char* argv[]) {
    // find the level then count the last person point;
    int person_num = 0;
    int level = 0;
    cin >> person_num >> level;
    vector<int> points;
    int point = 0;
    while(cin >> point) 
        points.push_back(point);
    // traverse the points and find the level;
    int ret = 0;
    while(ret <= level && ret <= person_num)
        ret += 1;
    // multiplex point;
    point = points[ret - 1];
    while (ret != person_num && points[ret] == point)
        ret += 1;
    if (0 == *points.begin())
        cout << 0 << endl;
    else
        cout << ret << endl;
    return 0;
}
