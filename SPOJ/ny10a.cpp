#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/NY10A/

	int p, q, i;
	char s[42];
	map<string,int> m;

	m.insert(make_pair("TTT",1));
	m.insert(make_pair("TTH",2));
	m.insert(make_pair("THT",3));
	m.insert(make_pair("THH",4));
	m.insert(make_pair("HTT",5));
	m.insert(make_pair("HTH",6));
	m.insert(make_pair("HHT",7));
	m.insert(make_pair("HHH",8));

	cin>>p;
	while(p--) {
		cin>>q;
		int cnt[8] = {0};
		cin>>s;
		for(i=0; i<38; i++) {
			char d[3];
			d[0] = s[i];
			d[1] = s[i+1];
			d[2] = s[i+2];
			cnt[m[d] - 1] ++;
		}

		cout<<q;
		for(i=0; i<8; i++)
			cout<<" "<<cnt[i];

		cout<<"\n";
	}

	return 0;
}