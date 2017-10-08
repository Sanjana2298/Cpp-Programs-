#include <bits/stdc++.h>
using namespace std;

#ifndef lli
#define lli long long int
#endif




int main() {
	lli q, n,x, d, i;
	cin>>q;
	float k;

	// https://www.hackerrank.com/contests/gs-codesprint/challenges/bank-accounts

	while(q--) {
		cin>>n>>k>>x>>d;
		float sum = 0;
		lli r;
		for(i=0; i<n; i++) {
			cin>>r;
			float t = x*0.01*r;
			sum += max(k, t);
		}

		if(sum > d)
			cout<<"upfront\n";
		else
			cout<<"fee\n";
	}
	return 0;
}