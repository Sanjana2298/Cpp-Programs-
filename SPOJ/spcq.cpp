#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int fsum(lli a) {
	int s = 0;

	while(a>0) {
		s+= a%10;
		a/=10;
	}

	return s;
}

int main() {
	// http://www.spoj.com/problems/SPCQ/

	lli t, n, i;

	cin>>t;

	while(t--) {
		cin>>n;
		int f=1;
		for(i=n; f ; i++) {
			int s = fsum(i);
			// cout<<"i= "<<i<<" s= "<<s
			if(i%s == 0) {
				cout<<i<<"\n";
				f = 0;
			}
		}
	}

	return 0;
}