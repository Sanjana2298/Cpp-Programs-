#include "bits/stdc++.h"
using namespace std;

int main()
{
	//https://www.codechef.com/ZCOPRAC/problems/ZCO14003
	long long int n ,i, max=0 ,t;
	vector<long long int> a;

	cin>>n;

	for(i=0;i<n;i++){
		cin>>t;
		a.push_back(t);
	}

	sort(a.begin(), a.end());
	for(i=0;i<n;i++){
		if(a[i]*(n-i)>max)
			max = a[i]*(n-i);
	}

	cout<<max<<"\n";

	return 0;
}