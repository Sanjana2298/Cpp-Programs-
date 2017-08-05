#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/problems/CHNGOR
	int t;
	long long int n, a, r;
	cin>>t;
	while(t--) {
		cin>>n;
		r = 0;
		while(n--) {
			cin>>a;
			r|=a;
		}

		cout<<r<<"\n";
	}
	return 0;
}