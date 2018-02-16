#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool findGender(int n, lli k) {
	bool gender = 1;
	while(n>2) {
		if(k%2)
			k = (k+1)/2;
		else {
			gender = gender ? 0 : 1;
			k/=2;
		}
		n--;
	}

	return (k%2 == gender%2);
}

int main() {
	// http://www.spoj.com/problems/DCEPC504/

	int t, n;
	lli k;
	cin>>t;

	while(t--) {
		cin>>n>>k;
		if(findGender(n,k))
			cout<<"Male\n";
		else
			cout<<"Female\n";
	}

	return 0;
}