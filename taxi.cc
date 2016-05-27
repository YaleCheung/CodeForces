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

int main(int argc,char * argv[]) {
    int groups_num = 0; 
    cin >> groups_num;
    vector<int> group_people;
    for(auto i = 0; i < groups_num; ++ i) {
        int people_num = 0;
        cin >> people_num;
	group_people.push_back(people_num);
    }
    sort(group_people.begin(), group_people.end());

    auto sum = 0;
    int ret = 0;
    for(int i = 0; i < groups_num;) {
        sum += group_people[i];
        if (sum > 4) {
            ret += 1;
            sum = 0;
        } else if (4 == sum) {
            ret += 1;
            ++ i;
            sum = 0;
        } else {
            ++ i;
        }
    }
    cout << ret << endl;
    return 0;
}
