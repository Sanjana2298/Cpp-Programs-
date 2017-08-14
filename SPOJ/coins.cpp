#include <bits/stdc++.h>
using namespace std;
#ifndef lli
#define lli long long int
#endif

lli v[100001];

lli best_exchange(lli n) {
	if(n < 100001)
		return v[n];

	lli n2  = n/2, n3 = n/3, n4 = n/4;
	return max(n,(best_exchange(n2) + best_exchange(n3) + best_exchange(n4)));
	
}

int main() {

	// http://www.spoj.com/problems/COINS/
	lli n, best,i;
	v[0] = 0;
	for(i=1; i< 100000; i++) {
		lli n2  = i/2, n3 = i/3, n4 = i/4;
		v[i] = max(i, v[n2] + v[n3] + v[n4]);
	}

	while(cin>>n) {
		best = best_exchange(n);
		cout<<best<<"\n";
	}

	return 0;
}