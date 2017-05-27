#include <bits/stdc++.h>
using namespace std;

string s;
void swapIt(long long int end) {
	long long int e;
	for( e = 0; e<= end; e++) {
		if( s[e] == '1')
			s[e] = '0';
		else
			s[e] = '1';
	}
}

int main() {

	// https://www.codechef.com/LTIME48/problems/PREFINVS
	cin>>s;
	long long int l = s.length(), i, count = 0;

	for( i = l-1; i >= 0; i--) {
		if(s[i] == '0')
			continue;
		swapIt(i);
		count++;
	}

	cout<<count<<"\n";
	return 0;
}