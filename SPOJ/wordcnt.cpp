#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/WORDCNT/
	int t;
	string r;
	cin>>t;
	// cin.ignore();
	getline(cin, r);
	while(t--) {
		string s;
		getline(cin,s);
		int maxans = 0, prev_len = -1, aggr = 0, i;
		stringstream ss(s);
		while(ss>>s) {
			int wl = s.size();

			if(prev_len != wl) {
				if(aggr > maxans)
					maxans = aggr;

				aggr = 1;
				prev_len = wl;
			}
			else 
				aggr++;
		}

		if(aggr > maxans)
			maxans = aggr;

		cout<<maxans<<"\n";
	}
	return 0;
}