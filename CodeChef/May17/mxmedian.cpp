#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/MAY17/problems/MXMEDIAN
	int t;
	long long int n, i, r, pos;

	cin>>t;
	while(t--) {
		vector<int> v;
		cin>>n;
		for(i = 0; i < 2*n; i++) { 
			cin>>r;
			v.push_back(r);
		}

		sort(v.begin(), v.end());

		pos = (3*n - 1)/2;
		cout<<v[pos]<<"\n";

		for(i=0; i < n; i++) {
			cout<<v[i]<<" "<<v[i+n]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}