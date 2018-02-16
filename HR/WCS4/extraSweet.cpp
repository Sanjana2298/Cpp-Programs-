#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.hackerrank.com/contests/womens-codesprint-4/challenges/extra-sweet

	lli n, s, i;
	cin>>n>>s;

	vector<lli> v;

	for(i=0; i<n; i++) {
		v.push_back(i);
	}

	while(s--) {
		lli l,r ;
		cin>>l>>r;
		lli cnt = 0;
		lli l1, r1;

		l1 = find(v.begin(), v.end(), l) - v.begin() - 1;
		r1 = find(v.begin(), v.end(), r) - v.begin() + 1;

		if(l1< 0)
			l1++;
		if(r1 >= v.size()) {
			r1--;
		}

		for(i=l1; i<=r1; i++){
			cnt+= v[i];
		}

		for(i=r1; i>=l1; i--){
			v.erase(remove(v.begin(), v.end(), v[i]), v.end());
		}
		cout<<cnt<<"\n";
	}

	return 0;
}