#include <bits/stdc++.h>
using namespace std;

#ifndef lli
#define lli long long int
#endif

int main() {

	int t;
	cin>>t;

	lli i;

	while(t--) {
		int arr[30]= {0};
		lli price[26], cnt = 0;
		string s;

		for(i=0; i<26; i++)
			cin>>price[i];

		cin>>s;
		for(i=0; i<s.length(); i++) {
			arr[s[i]-97] = 1;
		}

		for(i=0; i<26; i++)
			if(arr[i] != 1) 
				cnt += price[i];


		cout<<cnt<<"\n";
	}

	return 0;
}