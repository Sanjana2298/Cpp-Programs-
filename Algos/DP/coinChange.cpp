#include <bits/stdc++.h>
using namespace std;

int main() {

	// Top coder article approach 1
	int sum, n, coinVal[100], i, j, t;
	int minCoins[100];
	fill_n(minCoins,100, 100);
	cin>>sum>>n;

	// t = n;
	for(i=0; i<n; i++){
		cin>>coinVal[i];
	}

	minCoins[0] = 0;
	for(i=1;i<=sum;i++) {
		for(j=0; j<n; j++) {
			if(coinVal[j] <= i && minCoins[i-coinVal[j]]+1 < minCoins[i]) {
				minCoins[i] = minCoins[i-coinVal[j]]+1;
			}
		}
	}

	cout<<minCoins[sum]<<"\n";

	return 0;
}