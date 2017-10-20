#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/TWTCLOSE

	int n, k, i, a[1001] = {0};

	cin>>n>>k;
	int open = 0;
	while(k--) {
		string s;
		cin>>s;

		if(s.compare("CLICK") == 0) {
			int r;
			cin>>r;
			a[r] = a[r] == 0 ? 1 : 0;
			if(a[r])
				open++;
			else
				open--;

		}
		else {
			for(i=1; i<=n; i++) 
				a[i] = 0;

			open = 0;
		}
		
		cout<<open<<"\n";
	}

	return 0;
}