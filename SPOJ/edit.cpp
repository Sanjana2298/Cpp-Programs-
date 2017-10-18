#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/EDIT/

	string s;
	while(cin>>s) {
		int l = s.length();
		int cnt1 = 0, cnt2 =0;
		int i;
		for(i=0; i<l; i++) {
			if(i%2 == 0 && s[i] >= 97)  // AaAaA
				cnt1++;
			else if(i%2 == 0 && s[i] <= 90) // aAaA
				cnt2++;
			else if(i%2 && s[i] <=90)
				cnt1++;
			else if(i%2 && s[i] >= 97)
				cnt2++;
		}

		cout<<min(cnt1,cnt2)<<"\n";
	}

	return 0;
}