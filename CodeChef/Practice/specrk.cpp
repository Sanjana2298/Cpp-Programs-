#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/BITF2016/problems/SPECRK
	long long int t , n ,i , max ;

	cin>>t;
	while(t--){
		cin>>n;
		max =0;
		long long int a[100000] = {0} ;
		for(i=0;i<n;i++){
			long long int s ;
			cin>>s;
			a[s]++;
			if(s>max)
				max=s;
		}
		for(i=0;i<=max;i++){
			if(a[i]==1){
				cout<<i<<"\n";
				break;
			}
		}
	}

	return 0;
}