#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/MAY17/problems/UNICOURS
	int t;
	int a[100000];
	long long int p, i, len, n, cnt;
	cin>>t;

	while(t--) {
		cin>>n;
		for(i=0; i<n; i++) {
			cin>>a[i];
		} 
		p = 0;
	    cnt = 0;
		for(i=n-1; i>=p ; i--,cnt++) {
			if(a[i]>p)
				p = a[i];
		}

		cout<<cnt<<"\n";
	}
	return 0;
}