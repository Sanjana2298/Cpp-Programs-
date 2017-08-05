#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	float m;
	cin>>t;

	while(t--) {
		cin>>m;
		if(!m) 
			cout<<"0 0\n";
		else {
			long long int r = ceil(m/3);
			cout<<r<<" "<<(m-r)<<"\n";			
		}
	}

	return 0;
}