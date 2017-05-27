#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//https://www.codechef.com/problems/STATUES

	int t, n, a[101], i, j;

	cin>>t;

	for(j=1;j<=t;j++){
		cin>>n;
		int sum = 0, count = 0;

		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}

		sum/=n;
		for(i=0;i<n;i++){
			if(a[i]>sum){
				count+=(a[i]-sum);
			}
		}
		cout<<"Set #"<<j<<"\nThe minimum number of moves is "<<count<<".\n";
	}

	return 0;
}
