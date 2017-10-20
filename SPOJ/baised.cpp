#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/BAISED/

	lli t, n, i;

	cin>>t;

	while(t--) {
		cin>>n;
		string s;
		vector<lli> v;

		for(i=0; i<n; i++) {
			lli r;
			cin>>s>>r;
			v.push_back(r);
		}

		sort(v.begin(), v.end());
		lli ans = 0;

		for(i=1;i<=n; i++) {
			ans+=abs(v[i-1]-i);
		}

		cout<<ans<<"\n";

	}

	return 0;
}