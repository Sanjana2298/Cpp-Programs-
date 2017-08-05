#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://codeforces.com/contest/813/problem/A
	int n,m,i,flag = 0;
	long long int total = 0,t,l,r,ans = 0;

	cin>>n;

	for( i=0; i<n ; i++) {
		cin>>t;
		total+=t;
	}

	cin>>m;

	for(i=0; i<m;i++) {
		cin>>l>>r;
		if(total >= l && total <= r)
			flag = 1;
	}
	if(!flag)
		cout<<"-1\n";
	else
		cout<<total<<"\n";
	return 0;
}