/*
 * =====================================================================================
 *
 *       Filename:  a_kafaAndFirstSteps.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/16 06:36:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using std::cin;
using std::endl;
using std::cout;


int main(int argc, char* argv[]) {
    int n = 0;
    cin >> n;
    int maxSeq = 1;
    int seqLen = 1;
    int pre = 0;
    cin >> pre;
    for(int i = 1; i < n; ++ i) {
        int cur = 0;
	cin >> cur;
        if (cur >= pre)
           ++ seqLen;
	if (cur < pre || i == n - 1){
            if (seqLen > maxSeq)
                maxSeq = seqLen;
	    seqLen = 1;
	}
	pre = cur;
    }
    cout << maxSeq << endl;
    return 0;
}
