#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://codeforces.com/contest/845/problem/A

	int n, i;
	cin>>n;

	vector<int> v;

	for(i=0; i<2*n; i++) {
		int r;
		cin>>r;
		v.push_back(r);
	}

	sort(v.begin(), v.end());

	if(v[n] == v[n-1])
		cout<<"NO\n";
	else
		cout<<"YES\n";

	return 0;
}
