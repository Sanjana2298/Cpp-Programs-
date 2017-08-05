#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {

	// http://www.spoj.com/problems/AGGRCOW/

	lli cc,t,sc,i;
	cin>>t;

	while(t--) {
		cin>>sc>>cc;
		vector<lli> v;
		for(i=0; i<sc; i++) {
			lli d;
			cin>>d;
			v.push_back(d);
		}
		sort(v.begin(), v.end());
		lli start = 0 , end = v.back() - v[0];
		lli s,ans = 0;


		while(start < end) {
			lli mid = start + (end - start)/2;
			lli cnt = 1;
			vector<lli>::iterator it;
			it = v.begin();
			s = v[0];
			while(it != v.end()) {
				lli to_find = s + mid;
				it = upper_bound(v.begin(), v.end(), to_find-1);
				s = *it;
				if(it != v.end())
					cnt ++;
			}

			if(cnt < cc) 
				end = mid;

			else {
				ans = mid;
				start = mid+1;
			}
		}

		cout<<ans<<"\n";
	}
	return 0;
}