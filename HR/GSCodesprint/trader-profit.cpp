#include <bits/stdc++.h>
using namespace std;

#ifndef lli
#define lli long long int
#endif


int trader_profit(int val[], int k, int n) {
	int pf[10][30] = {0};

	int i,j;

	for(i=1; i<=k; i++) {
		for(j=1; j<n; j++) {
			int maxval = INT_MIN;
			for(int d=0; d<j; d++) {
				maxval = max(maxval, val[j] - val[d] + pf[i-1][d]);
			}

			pf[i][j] = max(pf[i][j-1], maxval);
		}
	}

	return pf[k][n-1];
}



int main() {
	int q, k, n, val[30], i;
	cin>>q;

	// https://www.hackerrank.com/contests/gs-codesprint/challenges/trader-profit

	while(q--) {
		cin>>k>>n;

		for(i=0; i<n; i++) {
			cin>>val[i];
		}
		cout<<trader_profit(val, k, n)<<"\n";
	}
	return 0;
}