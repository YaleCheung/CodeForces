/*
 * =====================================================================================
 *
 *       Filename:  a_watchingMovie.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/15/2016 20:58:50
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

class Solution {
public:
    void watchingAMovie(int n, int t) {
        int start, end;
        int pre_end = 1;
        int ret = 0;
        for(int i = 0; i < n; ++ i) {
            cin >> start >> end;
            int new_start = pre_end + t * ((start - pre_end) / t);
            ret += end - new_start + 1;
            pre_end = end + 1;
        }
        cout << ret << '\n';
    }
};
int main(int argc, char* argv[]){
    Solution s;
    int n, t;
    cin >> n >> t;
    s.watchingAMovie(n, t);
    return 0;
}
