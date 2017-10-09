#include <bits/stdc++.h>
using namespace std;
#define lli long long int


lli decodeWays(string s, int n) {
	lli cnt[5001];
	int i;
	cnt[0] = 1;
	cnt[1] = 1;

	for(i=2; i<=n; i++) {
		cnt[i] = 0;

		if(s[i-1] >'0') 
			cnt[i] = cnt[i-1];
		if(s[i-2] == '1' || s[i-2] == '2' && s[i-1] < '7')
			cnt[i] += cnt[i-2];
	}

	return cnt[n];
}

int main() {
	// http://www.spoj.com/problems/ACODE/

	string s;
	cin>>s;

	while(s.compare("0")) {
		lli r = decodeWays(s,s.length());
		cout<<r<<"\n";
		cin>>s;
	}


	return 0;
}