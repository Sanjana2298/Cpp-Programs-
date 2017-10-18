#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/AMZRCK/

	int t, n, i;
	cin>>t;

	lli arr[46];

	arr[0] = 1;
	arr[1] = 2;

	for(i=2; i<=45; i++) 
		arr[i] = arr[i-1] + arr[i-2];

	while(t--) {
		cin>>n;
		cout<<arr[n]<<"\n";
	}


	return 0;
}