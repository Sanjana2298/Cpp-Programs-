#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/problems/GDOG
	int t;
	cin>>t;

	long long int n, k, i, max = 0;

	while(t--) {
		cin>>n>>k;
		max = 0;
		for(i=k; i>=1; i--) {
			if(max < n%i) 
				max = n%i;
		}
		cout<<max<<"\n";
	}
	return 0;
}