#include <bits/stdc++.h>
using namespace std;

int main() {

	// Top coder article approach 1
	int sum, n, coinVal[100], i, j, t;
	int minCoins[100];
	fill_n(minCoins,100, 100);
	cin>>sum>>n;

	for(i=0; i<n; i++)
		cin>>coinVal[i];

	minCoins[0] = 0;

	// Approach 1

	for(i=1;i<=sum;i++) 
		for(j=0; j<n; j++) 
			if(coinVal[j] <= i && minCoins[i-coinVal[j]]+1 < minCoins[i])
				minCoins[i] = minCoins[i-coinVal[j]]+1;

	// Approach 2

	for(i=0; i<n; i++) 
		for(j=coinVal[i] ; j<=sum; j++) 
			minCoins[j] = minCoins[j-coinVal[i]] + 1;

	cout<<minCoins[sum]<<"\n";
	return 0;
}