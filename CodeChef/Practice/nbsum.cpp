#include "bits/stdc++.h"
using namespace std;

int main(){

	long long int t , n;
	cin>>t;

	while(t--){
		cin>>n;

		if(n%2)
			cout<<(-1*(n/2)+n)<<"\n";
				
		else
			cout<<(-1*(n/2))<<"\n";
	}

	return 0;
}