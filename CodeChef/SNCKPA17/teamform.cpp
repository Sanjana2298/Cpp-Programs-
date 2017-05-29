#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/SNCKPA17/problems/TEAMFORM
	// WTF

	int t,m,n,p,q;
	cin>>t;

	while(t--) {
		cin>>n>>m;

		while(m--) {
			cin>>p>>q;
		}

		if(n%2 == 0)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}