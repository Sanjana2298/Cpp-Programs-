#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/MARBLES

	int t;
	cin>>t;

	lli n, k;
	while(t--) {
		cin>>n>>k;

		lli d = n-1, r = n-k;

		if(r > d/2)
			r = d-r;

		lli ans = 1;

		for(lli i=1; i<=r; i++) {
			ans*= (d-i+1);
			ans/=i;
		}

		cout<<ans<<"\n";

	}


	return 0;
}