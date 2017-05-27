#include "bits/stdc++.h"
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main(){

	int t ,n ,i;
	vector<int> v,v1;

	cin>>t;

	while(t--){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>v[i];

		sort(v.begin(), v.end());

		int l = v[0];
		int k =0;
		v1[k++] = l;
		for(i=1;i<n;i++){
			if(v[i]==l){
				continue;
			}
			l=v[i];
			v1[k++]=l;
		}

    	for(i=0;i<k;i++){
    		cout<<v1[i]<<" ";
    	}
    	cout<<"\n"<<k<<"\n";
	}

	return 0;
}