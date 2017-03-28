#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/ICL2017/problems/ICL1701
	long long int n , k, arr[1000], i, count = 0, a[1000];
	cin>>n>>k;

	for(i=0; i<n; i++) {
		cin>>arr[i];
	}

	for(i=0;i<n;i++) {
		if(arr[i]>0)
			continue;
		arr[i] = -1*arr[i];
		a[count++] = arr[i];
		if(i+1 != n) {  // To check if there is a right neighbour
			arr[i+1] = -1*arr[i+1];	
		}
	}

	cout<<count<<"\n";
	for(i=0 ; i<count; i++) 
		cout<<a[i]<<" ";

	return 0;
}