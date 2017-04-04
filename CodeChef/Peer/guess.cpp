#include <bits/stdc++.h>
using namespace std;

long long int GCD(long long int a, long long int b) {

    return (a != 0) ? GCD(b % a,a) : b;
}

int main() {
	// https://www.codechef.com/problems/GUESS
	long long int t, m , n, o1, e1, o2, e2, gcd , mn;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		o1 = (n%2 ? (n/2)+1 : n/2);
		e1 = n/2;
		o2 = (m%2 ? (m/2)+1 : m/2);
		e2 = m/2;

		mn = m*n;

		o1 = (o1*e2 + e1*o2);
		gcd = 0;
		while(gcd!=1) {
			gcd = GCD(o1,mn);
			o1/=gcd;
			mn/=gcd;
		}
		cout<<o1<<"/"<<mn<<"\n";
	}

	return 0;
}