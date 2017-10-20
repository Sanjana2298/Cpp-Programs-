#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/CHN15A

	int t, n, k;

	cin>>t;

	while(t--) {
		cin>>n>>k;

		int cnt = 0, r;

		while(n--) {
			cin>>r;

			if((r+k)%7 == 0) 
				cnt++;
		}

		cout<<cnt<<"\n";
	}


	return 0;
}