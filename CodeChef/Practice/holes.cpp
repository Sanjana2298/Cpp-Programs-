#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/problems/HOLES

	int t ;
	string s ;
	cin>>t;

	while(t--){
		cin>>s;
		int count1 = 0;
		count1+= count(s.begin(), s.end(),'A');
		count1+= 2*(count(s.begin(), s.end(),'B'));
		count1+= count(s.begin(), s.end(),'D');
		count1+= count(s.begin(), s.end(),'O');
		count1+= count(s.begin(), s.end(),'P');
		count1+= count(s.begin(), s.end(),'Q');
		count1+= count(s.begin(), s.end(),'R');

		cout<<count1<<"\n";
	}

	return 0;
}