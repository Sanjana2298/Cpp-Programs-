#include <bits/stdc++.h>
using namespace std;

int main() {
	// https://www.codechef.com/problems/SUBINC
	int t;
	long long int n, arr[100000], i, sum, d[100000];

	cin>>t;

	while(t--) {
		cin>>n;
		for(i=0; i<n; i++) 
			cin>>arr[i];

		d[0] = 1;
		sum = 1; 
		for(i=1; i<n; i++) {
			if(arr[i] >= arr[i-1]) {
				d[i] = d[i-1]+1;
			}
			else
				d[i] = 1;
			sum+=d[i];
		}

		cout<<sum<<"\n";
	}

	return 0;
}
