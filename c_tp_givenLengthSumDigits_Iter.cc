#include <bits/stdc++.h>
using namespace std;
#define pq priority_queue
#define mp make_pair
#define st first
#define nd second
#define pb push_back
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,s,x;
	cin >> m >> s;
	if(s==0&&m!=1||s>m*9) {
		cout << "-1 -1"; 
		return 0;
	}
	for(int i=m-1,k=s;i>=0;i--){
		x=max(0,k-9*i);
		if(x==0&&i==m-1&&k) x=1;
		cout << x;
		k-=x;
	}
	cout << " ";
	for(int i=m-1,k=s;i>=0;i--){
		x=min(9,k);
		char c=x;
		cout << x;
		k-=x;
	}
}
