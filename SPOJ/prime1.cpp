#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/PRIME1/

	int t;

	lli m, n, i, j;


	cin>>t;

	while(t--) {
		cin>>m>>n;

		for(i=m; i<=n; i++) {
			int f = 1;
			lli sq = sqrt(i);
			for(j=2; j<=sq; j++) {
				if(i%j == 0) {
					f = 0;
					break;
				}

			}

			if(f && i!= 1)
				cout<<i<<"\n";
		}

		cout<<"\n";
	}
	return 0;
}