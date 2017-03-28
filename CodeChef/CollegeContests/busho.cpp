#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {

	//https://www.codechef.com/KJSC17/problems/BUSHO

	int t, m,n;
	cin>>t;

	while(t--) {
		cin>>m>>n;

		int g ;
		if(m>n)
			g = gcd(m,n);
		else
			g = gcd(n,m);

		int l = (m*n)/g;
		cout<<(l/m)-1<<" "<<(l/n)-1<<"\n";

	}
	return 0;
}