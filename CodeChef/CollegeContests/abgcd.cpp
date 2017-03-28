#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/KJSC17/problems/ABGCD
	int t, q,ch;
	long long int n, a[100000], i,x,y;

	cin>>t;
	while(t--) {

		cin>>n>>q;
		for(i=0; i<n; i++)
			cin>>a[i];

		while(q--) {
			cin>>ch>>x>>y;
			if(ch == 1) {
				a[x] = y;
			}
			else {
				// complete it
			}
		}
	}

	return 0;
}