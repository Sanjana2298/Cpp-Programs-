#include <bits/stdc++.h>
using namespace std;


string construct_string(string old) {
	int len = old.length();

	if(len > 1000)
		return old;
	for(int i = 0; i < len; i++ ) {
		old = old + ((old[i] == '0')? '1' : '0');
	}
	return construct_string(old);
}

int main() {

	// https://www.hackerrank.com/contests/w32/challenges/duplication

	int q, x;
	cin>>q;
	string s;
	s = construct_string("01");

	while(q--) {
		cin>>x;
		cout<<s[x]<<"\n";
	}
	return 0;
}