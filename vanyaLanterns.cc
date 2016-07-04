/*
 * =====================================================================================
 *
 *       Filename:  vanyaLanterns.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/04/16 02:51:55
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
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
    int n, l;
    cin >> n >> l;
    vector<double> ivec;
    for(int i = 0; i < n; ++ i) {
        int val = 0;
	cin >> val;
        ivec.push_back(val);
    }
    sort(ivec.begin(), ivec.end());
    int max_blank = 0;
    for(int i = 1; i < n; ++ i) {
        int blank = ivec[i] - ivec[i - 1];
	if (blank > max_blank)
            max_blank = blank;
    }
    int end = *ivec.rbegin() ;
    int begin = *ivec.begin();
    double ret = 0;
    if (0 != begin && l != end) {
        ret = max(double(max_blank) / 2, double(max(begin, l - end)));
    } else {
        if (0 == begin && l == end)
            ret = double(max_blank) / 2;
        else if (0 == begin)
            ret = max(double(max_blank) / 2, double(l - end));
        else if (l == end)
            ret = max(double(max_blank) / 2, double(begin));
    }
    cout << setprecision(10) << ret << endl;
    return 0;
}
