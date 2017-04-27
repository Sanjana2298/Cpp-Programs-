#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.hackerrank.com/contests/w31/challenges/beautiful-word
		
	int flag = 0;
	string s;
	char r[] = {'a','e','i','o','u','y'};
	set<char> t(r,r+6);
	cin>>s;

	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i] == s[i+1] || (t.find(s[i]) != t.end() && t.find(s[i+1]) != t.end())) {
			flag = 1;
		}
	}
	if(flag) 
		cout<<"No";
	else
		cout<<"Yes";
	return 0;
}