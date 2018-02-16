#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/EGYPIZZA/

	int t, cnt[3] = {0};
	cin>>t;
	map<string,int> m;

	m.insert(make_pair("1/4",1));
	m.insert(make_pair("3/4",2));
	m.insert(make_pair("1/2",3));

	while(t--) {
		string s;
		cin>>s;
		cnt[m[s]-1]++;
	}

	int tot = 1, remhalf = 0, remquat = 0;
	tot += cnt[2]/2;

	remhalf = cnt[2]%2;

	while(cnt[0] && cnt[1]) {
		tot++;
		cnt[0]--;
		cnt[1]--;
	}

	tot += cnt[1];
	tot += cnt[0]/4;
	
	remquat = cnt[0]%4;

	if(remhalf) {
		tot ++;
		if(remquat < 2) 
			remquat = 0;
		else
			remquat -= 2;
	}

	if(remquat) 
		tot++;

	cout<<tot<<"\n";
	return 0;
}