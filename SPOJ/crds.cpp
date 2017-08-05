#include <bits/stdc++.h>
using namespace std;
#ifndef lli
#define lli long long int
#endif

int main() {

	// http://www.spoj.com/problems/CRDS/

	int t;
	lli n;
	cin>>t;

	while(t--) {
		cin>>n;
		cout<<(3*((n*(n-1))/2) + 2*n)%1000007<<"\n";
	}
	return 0;
}