#include "bits/stdc++.h"
using namespace std;

int main()
{
	//https://www.codechef.com/problems/CHEFLUCK
	int t;
	long long int n , s;

	cin>>t;
	while(t--){
		cin>>n;
		int flag = 0;

		for(s=0;s<=n;s+=4){
			if((n-s)%7==0){
				cout<<n-s<<"\n";
				flag=1;
				break;
			}
		}

		if(!flag)
			cout<<"-1\n";

	}

	return 0;
}