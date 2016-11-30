#include "bits/stdc++.h"

using namespace std;

int main(){
	int n , r[100000], r1[10000] ,i;
	cin>>n;
	for(i = 1 ; i<=n ; i++){
		cin>>r[i];
		r1[i]=0;
	}

	for(i=1;i<=n;++i)
		r1[r[i]]=1;

	for(i=1 ; i<=n; ++i){
		if(r1[i]==0){
			cout<<i<<" ";
		}
	}
	return 0;
}