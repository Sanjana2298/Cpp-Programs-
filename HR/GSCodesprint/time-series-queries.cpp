#include <bits/stdc++.h>
using namespace std;

#ifndef lli
#define lli long long int
#endif

bool cmpr(pair<lli,lli> const &x, pair<lli,lli> const &y) {
	return x.second < y.second;
}

int main() {
	// https://www.hackerrank.com/contests/gs-codesprint/challenges/time-series-queries

	lli n, q, v, ti[100000], i, qtype, mxtime = -1, mxprice = -1;
	vector<pair<lli,lli> > v1, v2; // <price,time>
	set<lli> ss;
	cin>>n>>q;

	for(i=0; i<n; i++) {
		cin>>ti[i];
		ss.insert(ti[i]);
		if(ti[i] > mxtime) 
			mxtime = ti[i];
	}
	for(i=0; i<n; i++) {
		lli d;
		cin>>d;
		if(d > mxprice) 
			mxprice = d;
		v1.push_back(make_pair(d,ti[i])); // for query 1
		v2.push_back(make_pair(ti[i],d)); // for 2
	}


	map<lli,lli> m;
	lli mx = v2[n-1].second;
	m.insert(pair<lli,lli> (v2[n-1].first, mx));
	for(i=n-2; i>=0; i--) {
		if(v2[i].second > mx)
			mx = v2[i].second;
		m.insert(pair<lli,lli> (v2[i].first, mx));
	}

	sort(v1.begin(), v1.end()); // sort by price

	for(i=0; i<q; i++) {
		cin>>qtype>>v;

		if(qtype == 1) {
			vector<pair<lli,lli> >::iterator it;
			if(v > mxprice)
				cout<<"-1\n";
			else {
				it = lower_bound(v1.begin(), v1.end(), pair<lli,lli> (v,-1));
				vector<pair<lli,lli> >::iterator it1 = min_element(it, v1.end(), cmpr);
				cout<<(*it1).second<<"\n";
			}
		}
		else {
			vector<pair<lli,lli> >::iterator it;
			if(v > mxtime) 
				cout<<"-1\n";
			else {
				cout<<m[*(ss.lower_bound(v))]<<"\n";
			}
		}
	}
	return 0;
}