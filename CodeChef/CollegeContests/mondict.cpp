#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/KJSC17/problems/MONDICT
	int t;
	cin>>t;
	char str[100];
	vector<char> s;

	while(t--) {
		cin>>str;
		int j=0,count=-1;

		while(str[j]) {
			s.push_back(str[j++]);
		}
		do {
			count++;
		}while(next_permutation(s.begin(),s.end()));
		cout<<count<<"\n";
	}
	
	return 0;
}