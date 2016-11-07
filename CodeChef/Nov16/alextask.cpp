#include "bits/stdc++.h"
using namespace std;

int gcd(int a , int b){
	if(a == 1)
		return 1;

	a = abs(a - b*(a/b));
	if(a == 0)
		return b;
	gcd(b,a);
}

int main(){

	long long int a[500] , min = 0 , gcdd = 0 , lcm ;
	int t , n , i ,j;

	cin>>t;
	while(t--){
		min =0;
		cin>> n; 
		for(i=0;i<n;i++){
			cin>>a[i];
		}

		for(i=0 ; i<n ; i++){
			for(j = i+1 ; j<n ; j++){
				gcdd = gcd(a[i],a[j]);

				lcm = (a[i]*a[j])/gcdd ;
				if(min == 0 ){
					min = lcm ;
				}
				else if( lcm < min){
					min = lcm ;
				}
			}
		}
		cout<<min<<"\n";
	}
	return 0;
}