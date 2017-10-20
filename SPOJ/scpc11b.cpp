#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/SCPC11B/

	int t, i;
	cin>>t;
	while(t!= 0) {
		vector<int> v;
		for(i=0; i<t; i++) {
			int r;
			cin>>r;
			v.push_back(r);
		}

		sort(v.begin(), v.end());
		int f = 1;
		for(i=0; i<t-1; i++) {
			if(v[i+1] - v[i] > 200) {
				f = 0;
				break;
			}
		}

		if(2*(1422-v[t-1]) > 200)
			f = 0;

		if(f)
			cout<<"POSSIBLE\n";
		else
			cout<<"IMPOSSIBLE\n";

		cin>>t;
	}


	return 0;
}