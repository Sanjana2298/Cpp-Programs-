#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/BWIDOW/

	int t, n, i;
	cin>>t;

	while(t--) {
		cin>>n;
		lli a[1000][2];
		lli maxid = 0, maxod = 0, id;

		for(i=0; i<n; i++) {
			cin>>a[i][0]>>a[i][1];
			if(a[i][0] > maxid) {
				id = i+1;
				maxid = a[i][0];
			}
			else if(a[i][1] > maxod)
				maxod = a[i][1];
		}

		if(maxid > maxod)
			cout<<id<<"\n";
		else
			cout<<"-1\n";

	}
	return 0;
}