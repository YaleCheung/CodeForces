/*
 * =====================================================================================
 *
 *       Filename:  b_twoButton.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/19/2016 11:08:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <queue>
#include <assert.h>
using std::cout;
using std::cin;
using std::endl;
using std::queue;

// find the items; bfs;
int two_buttons(int m, int n) {
    queue<int> num_queue;
    num_queue.push(n);
    int last_line = 0;
    int level = 0;
    bool find = false;
    while(!find) {
        ++ level;
        for(auto iter = num_queue.begin(); iter != num_queue.end(); ++ iter) {
            // process odd
            ++ last_line;
            auto num = *iter;
            int left = num << 2;
            if (left == m) {
                cout << level << '\n';
                find = true; 
                break;
            }
            num_queue.push(num);

            int right = -- num;
            if (right == m) {
                cout << level << '\n';
                find = true;
                break;
            }
            num_queue.push(num);
        }
        if (find)
            break;
        for(int i = 0; i < last_line; ++ i) 
            num_queue.pop();
        last_line = 0;
    }
    cout << endl;
}
int main(int argc, char* argv[]) {
    assert(2 == argc);
    int n, m;
    cin >> n >> m;
    two_buttons(m ,n);
    return 0;
}
