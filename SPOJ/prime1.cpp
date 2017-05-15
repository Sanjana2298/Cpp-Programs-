#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://www.spoj.com/problems/PRIME1/
	long long int m,n,i,k;
	int t, a[1000000000] = {0};
	cin>>t;
	for(i=2; i<=1000000000; i++) {
		if(a[i]==0) {
			a[i] = -1;
			for(k = 2*i; k<=1000000000; k+=i) {
				a[k]=1;
			}
		}
	}

	while(t--) {
		cin>>m>>n;
		for(i=m; i<=n; i++) {
			if(a[i] == -1)
				cout<<i<<"\n";
		}
	}
	return 0;
}