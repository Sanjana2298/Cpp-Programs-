#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.hackerrank.com/contests/w30/challenges/candy-replenishing-robot

	int n, cur, added, t, r;
	cin>>n>>t;

	cur = n;
	added = 0;

	while(t--) {
		cin>>r;
		if (cur < 5) {
			added+=(n-cur);
			cur+=(n-cur);
		}
		cur-=r;
	}
	cout<<added<<'\n';

	return 0;
}