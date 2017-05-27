#include "bits/stdc++.h"

using namespace std;
int main(){
	//https://www.codechef.com/BTCD2013/problems/CNG/
	int t ;
	long long int c , d , max ,i;

	cin>>t;
	while(t--){
		cin>>c>>d;
		max =  min(c,d)-1;

		for(i = max+2 ; i<=(c*d) ; i++){
			if((i%c)&&(i%d)&&(i%(c+d)))
				max = i;
		}
		cout<<max<<"\n";
	}

	return 0;
}