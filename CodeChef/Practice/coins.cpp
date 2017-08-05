#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	//  https://www.codechef.com/problems/COINS

	lli n;

	while(cin>>n) {
		lli r = max(n/2+n/3+n/4, n);
		cout<<r<<"\n";
	}

	return 0;
}