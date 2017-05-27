#include "bits/stdc++.h"
using namespace std;

int main(){

	long long int t , n ;
	cin>>t;

	while(t--){
		cin>>n;
		//cout<<ceil(n/26.0)<<"\n";
		if(n%26)
			cout<<(n/26)+1<<"\n";
		else
			cout<<n/26<<"\n";
	}

	return 0;
}