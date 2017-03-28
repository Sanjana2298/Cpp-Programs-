#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/MARCH17/problems/EXTRAN
	std::vector<long long int> v;
	long long int n, i;
	int t;
	cin>>t;

	while(t--) {
		cin>>n;
		long long int r;
		for(i=0;i<n;i++) {
			cin>>r;
			v.push_back(r);
		}

		sort(v.begin(), v.end());

		for(i=0;i<n-1;i++) {
			if(v[i] != v[i+1]-1){
				r = v[i];
			}
		}
		if(v[n-2] != v[n-1]-1)
			r = v[n-1];

		cout<<r<<"\n";
	}

	return 0;
}