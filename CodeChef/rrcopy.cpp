#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//https://www.codechef.com/problems/RRCOPY
	int t ;
	long long int n ,i ;

	cin>>t;

	while(t--){

		cin>>n;
		long long int v[100000] = {0} , min = 100000 , max = 0 , count=0;
		for(i=0;i<n;i++){
			long long int s;
			cin>>s;
			v[s]=1;
			if(s<min)
				min = s;
			if(s>max)
				max = s;
		}

		for(i=min;i<=max;i++){
			if(v[i]==1){
				count++;
			}
		}

		cout<<count<<"\n";
	}

	return 0;
}
