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
#include <assert.h>
#include <queue>
using std::cout;
using std::cin;
using std::endl;
using std::queue;

// find the items; bfs;
void two_buttons(int m, int n) {
    queue<int> num_queue;
    num_queue.push(n);
    int level = 0;
    bool find = false;
    while(!find) {
        ++ level;
        cout << "level "  << level << endl;
        int last_line = num_queue.size();
        for(int i = 0; i < last_line; ++ i) {
            // process odd number;
            auto num = num_queue.front();
            int left = num << 1;
            cout << left << ' ' << endl;
            if (left == m) {
                cout << "result " << level << endl;
                find = true; 
                break;
            }
            num_queue.push(left);

            int right = -- num;
            cout << right << ' ' << endl;
            if (right == m) {
                cout << "result " << level << endl;
                find = true;
                break;
            }
            num_queue.push(right);
            
            // delete the node;
            num_queue.pop();
        }
        if (find)
            break;
    }
}
int main(int argc, char* argv[]) {
    int n, m;
    cin >> n >> m;
    two_buttons(m ,n);
    return 0;
}
