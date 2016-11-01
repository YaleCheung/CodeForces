/*
 * =====================================================================================
 *
 *       Filename:  d_queue.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/01/2016 09:01:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;
using std::cin;
using std::endl;
using std::cout;

int main(int argc, char* argv[]){
    int person_num = 0;
    cin >> person_num;
    int serve_time = 0;
    vector<int> queue;
    for(auto i = 0; i < person_num; ++ i) {
        cin >> serve_time;
        queue.push_back(serve_time);
    }
    
    sort(queue.begin(), queue.end());
    
    int ret = 0;
    int sum = queue.at(0);
    for(int i = 1; i < queue.size(); ++ i) {
        if (sum > queue.at(i))
            ++ ret;
        else
            sum += queue.at(i);
    }
    cout << person_num - ret << endl;
    return 0;
}
