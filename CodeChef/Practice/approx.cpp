#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

void preprocess(int arr[]) {
	lli ddent = 46870, div = 33102;
	lli r = 1000000;

	while(r) {
		arr[1000000-r] = ddent/div;
		r--;
		ddent = ddent%div;
		while(ddent*10 < div && r) {
			ddent*=10;
			arr[1000000-r] = 0;
			r--;
		}
		ddent*=10;
	}
}

int main() {

	//  https://www.codechef.com/problems/APPROX/

	int t, arr[1000000];
	lli k;
	cin>>t;

	preprocess(arr);

	while(t--) {
		cin>>k;
		if(k==0) 
			cout<<"3\n";
		else {
			cout<<"3.";
			for(lli r = 0; r<k; r++) 
				cout<<arr[r];
			cout<<"\n";
		}
	}
	return 0;
}