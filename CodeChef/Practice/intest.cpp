#include "bits/stdc++.h"
using namespace std;

int main(){
	// make it better
	// execution time = 0.84 :/
	long long int n , k , t , cnt=0;
	cin>>n>>k;
	while(n--){
		cin>>t;
		if(t%k==0)
			cnt++;
	}

	cout<<cnt;

	return 0;
}