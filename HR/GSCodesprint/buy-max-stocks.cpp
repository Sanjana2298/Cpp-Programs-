#include <bits/stdc++.h>
using namespace std;

#ifndef lli
#define lli long long int
#endif

int main() {
	// https://www.hackerrank.com/contests/gs-codesprint/challenges/buy-maximum-stocks

	lli n, k, i, shares = 0;
	vector<pair<int, lli> > v;

	cin>>n;

	for(i=0; i<n; i++) {
		int r;
		cin>>r;
		v.push_back(make_pair(r,i+1));
	}

	sort(v.begin(), v.end());
	cin>>k;

	for(i=0; k >= v[i].first && i<n; i++) {
		pair<int, lli> d = v[i];
		
		lli f =  min(d.second,k/d.first);
		shares+=f;
		k-=(f*d.first);
	}

	cout<<shares<<"\n";
	return 0;
}