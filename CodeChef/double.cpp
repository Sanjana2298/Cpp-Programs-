#include "bits/stdc++.h"

using namespace std;

int main(){
	//https://www.codechef.com/problems/DOUBLE

	long long int t , n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2)
			cout<<(n-1)<<"\n";
		else
			cout<<n<<"\n";
	}

	return 0;
}