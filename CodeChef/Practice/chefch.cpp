#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/CHEFCH/

	int t;
	string s;
	cin>>t;

	while(t--) {
		cin>>s;
		lli mo = 0, me = 0, i;
		lli leng = s.length();
		for(i=0; i<leng; i+=2) { // m in odd places
			if(s[i] != '-')
				mo++;
		}

		for(i=1; i<leng; i+=2) {
			if(s[i] != '+')
				mo++;
		}

		for(i=0; i<leng; i+=2) { // m in even
			if(s[i] != '+')
				me++;
		}

		for(i=1; i<leng; i+=2) {
			if(s[i] != '-')
				me++;
		}

		cout<<min(mo,me)<<"\n";

	}
	return 0;
}