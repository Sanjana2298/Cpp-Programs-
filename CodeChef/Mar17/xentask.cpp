#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/MARCH17/problems/XENTASK

	long long int n, t, i;
	cin>>t;

	while(t--) {
		cin>>n;
		long long int c1, c2, s;
		c1 = c2 = 0;
		for(i=0;i<n;i++) {
			cin>>s;
			if(i%2)
				c1+=s;
			else
				c2+=s;
		}

		for(i=0;i<n;i++) {
			cin>>s;
			if(i%2)
				c2+=s;
			else
				c1+=s;
		}

		if(c2<c1)
			cout<<c2<<"\n";
		else
			cout<<c1<<"\n";
	}

	return 0;
}