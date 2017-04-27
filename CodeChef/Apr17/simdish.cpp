#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/APRIL17/problems/SIMDISH
	int t;

	cin>>t;
	while(t--) {
		set<string> s ;
		string r;
		for(int i = 0 ; i<8 ; i++) {
			cin>>r;
			s.insert(r);
		}

		if(s.size()<= 6) 
			cout<<"similar\n";
		else
			cout<<"dissimilar\n";
	}
	return 0;
}