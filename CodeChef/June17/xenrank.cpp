#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/JUNE17/problems/XENRANK
	int t;
	long long int u,v;

	cin>>t;
	while(t--) {
		cin>>u>>v;
		cout<<(((u+v)*(u+v+1))/2)+u+1<<"\n";
	}

	return 0;
}