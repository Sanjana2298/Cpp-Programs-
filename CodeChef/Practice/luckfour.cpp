#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/LUCKFOUR/

	lli t,n;
	cin>>t;

	while(t--) {
		cin>>n;
		lli cnt = 0;
		while(n>0) {
			int r = n%10;
			if(r == 4)
				cnt++;

			n/=10;
		}

		cout<<cnt<<"\n";
	}


	return 0;
}