#include "bits/stdc++.h"
using namespace std;

int main(){
	int n , k ,i;
	long long int t[30] , t1[30], first=0 , second =0 , fp =0 , sp =0;
	cin >> n >>k;

	for(i=0 ; i<n ;i++){
		cin>>t[i];
	}

	for(i=1 ; i<n ; i++){
		t1[i] = abs(t[i] - t[i-1]);
		if(first==0){
			first = second = t1[i];
			fp = sp = i+1;
		}
		else{
			if(t1[i]>first){
				second = first;
				first = t1[i];
				sp = fp;
				fp =i+1;
			}
		}
	}

	cout<<fp<<" * "<<sp;
	return 0;
}