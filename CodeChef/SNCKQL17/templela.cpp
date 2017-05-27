#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,n,i;
	cin>>s;
	while(s--) {
		cin>>n;
		int valid = 1;

		if(n%2 == 0)
			valid = 0;
		
		int r = n/2 + 1, val;
		for(i=1; i<=r; i++) {
			cin>>val;
			if(val!=i)
				valid = 0;
		}
		for(i = r+1; i<=n; i++) {
			cin>>val;
			if(i+val != n+1)
				valid = 0;
		}
		
		if(valid)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}
	return 0;
}