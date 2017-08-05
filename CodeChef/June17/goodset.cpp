#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/JUNE17/problems/GOODSET
	int t, n, i;
	cin>>t;
	while(t--) {
		cin>>n;
		for(i=400; i< (400+n); i++) {
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}