#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.hackerrank.com/contests/womens-codesprint-4/challenges/legos

	lli t, prod, p,q, i;

	cin>>t;

	while(t--) {
		lli r;
		prod = 1;
		for(i=0; i<4; i++) {
			cin>>r;
			prod*=r;
		}
		cin>>p>>q;
		prod/=(p*q);
		cout<<prod<<"\n";
	}
	return 0;
}