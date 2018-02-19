#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/DIVIDING

	lli n, i, x, cnt = 0;

	cin>>n;


	for(i=0; i<n; i++) {
		cin>>x;
		cnt += (x-i-1);
	}

	if(cnt == 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}