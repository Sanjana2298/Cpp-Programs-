#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll merge(ll arr[], ll s, ll mid, ll e) {
	ll *a = new ll[mid-s+1];
	ll *b = new ll[e-mid];

	ll ic = 0, i, j, k;
	
	for(i = s; i <=mid; i++)
		a[i-s] = arr[i];
	for(i= mid+1; i <=e; i++)
		b[i-(mid+1)] = arr[i];

	i = 0;
	j = 0;
	k = s;

	while(i<=(mid-s) && j<=(e-(mid+1))) {
		if(a[i] > b[j]) {
			ic+=(mid-s-i+1);
			arr[k++] = b[j++];
		}
		else 
			arr[k++] = a[i++];
	}

	while(i<=(mid-s))
		arr[k++] = a[i++];

	while(j<=(e-(mid+1)))
		arr[k++] = b[j++];

	return ic;
}

ll mergeSort(ll a[], ll s, ll e) {
	ll invCount = 0;
	if(s<e) {
		ll mid = s+(e-s)/2 ;
		invCount += mergeSort(a, s, mid);
		invCount += mergeSort(a, mid+1, e);
		invCount += merge(a, s, mid, e);
	}
	return invCount;
}

int main() {

	ll arr[100], n, i ;
	cin>>n;

	for(i = 0; i<n; i++) 
		cin>>arr[i];

	
	ll ic = mergeSort(arr, 0, n-1);

	cout<<"Sorted array = ";
	for(i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<"\n";
	cout<<"Inversions = "<<ic<<"\n";

	return 0;
}