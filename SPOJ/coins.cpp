#include <bits/stdc++.h>
using namespace std;
#ifndef lli
#define lli long long int
#endif
vector<lli> v(1000000000, -1);

lli best_exchange(lli n, vector<lli> v) {
	if(n <= 4)
		return n;
	if(v[n] != -1)
		return v[n];
	lli n2  = n/2, n3 = n/3, n4 = n/4;
	return v[n] = max(n,(best_exchange(n2,v) + best_exchange(n3,v) + best_exchange(n4,v)));
}

int main() {

	// http://www.spoj.com/problems/COINS/
	lli n, best;
	while(cin>>n) {
		cout<<n<<"*\n";

		best = best_exchange(n,v);
		cout<<best<<"\n";
	}

	return 0;
}