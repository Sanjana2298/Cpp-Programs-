#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/PALIN/

	int t;

	cin>>t;

	while(t--) {
		lli k, i;
		cin>>k;

		int f = 1;

		for(i=k+1; f; i++) {
			vector<int> v;
			lli r = i;

			while(r>0) {
				v.push_back(r%10);
				r/=10;
			}

			lli l = v.size() - 1;
			int flg = 1;
			for(lli j = 0; j<=l/2; j++) {
				if(v[j] != v[l-j]) {
					flg = 0;
					break;
				}
			}

			if(flg) {
				cout<<i<<"\n";
				f = 0;
			}
		}
	}
	return 0;
}