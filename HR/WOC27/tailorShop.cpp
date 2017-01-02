#include "bits/stdc++.h"
using namespace std;

int main(){

	long long int n, i, buttons, counts=0, k=0;
	vector<long long int> a , d ;
	float p;

	cin>>n>>p;
	for(i=0 ; i<n ; i++){
		long long int t ;
		cin>>t;
		a.push_back(t);
		buttons = ceil(a[i]/p);
		counts += buttons;

		bool isTrue = find(d.begin(), d.end(),buttons) != d.end();
		if(isTrue){
			counts++;
			d.push_back(buttons+1);
			continue;
		}
		d.push_back(buttons);

	}
	
	cout<<counts<<"\n";
	return 0;
}