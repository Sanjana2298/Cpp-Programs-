#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/AMMEAT

	int t, n, i;
	lli m, arr[7];

	cin>>t;

	while(t--) {
		cin>>n>>m;

		for(i=0; i<n; i++) {
			cin>>arr[i];
		}

		sort(arr, arr+n, greater<lli>());
		lli cnt = 0;
		while(m>0 && cnt<n) {
			m-= arr[cnt++];
		}

		if(cnt==n && m>0)
			cout<<"-1\n";
		else
			cout<<cnt<<"\n";

	}


	return 0;
}