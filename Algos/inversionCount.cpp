#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int s, int mid, int e) {
	int *a = new int[mid-s+1];
	int *b = new int[e-mid];

	int ic = 0, i, j, k;
	
	for(i = s; i <=mid; i++)
		a[i-s] = arr[i];
	for(i= mid+1; i <=e; i++)
		b[i-(mid+1)] = arr[i];

	i = 0;
	j = 0;
	k = s;

	while(i<=(mid-s) && j<=(e-(mid+1))) {
		if(a[i] > b[j]) {
			ic+=(i+1);
			arr[k++] = b[j++];
		}
		else 
			arr[k++] = a[i++];
	}

	int rem = (mid-s-i);
	if(rem>=0)
		ic += rem*(e-mid);

	while(i<=mid-s)
		arr[k++] = a[i++];

	while(j<=(e-(mid+1)))
		arr[k++] = b[j++];

	return ic;
}


void mergeSort(int a[], int s, int e, int &invCount) {
	if(s<e) {
		int mid = s+(e-s)/2 ;
		mergeSort(a, s, mid, invCount);
		mergeSort(a, mid+1, e, invCount);
		invCount += merge(a,s,mid,e);
	}
}

int main() {

	int arr[100], n, i ;
	cin>>n;

	for(i = 0; i<n; i++) 
		cin>>arr[i];

	int ic = 0;
	mergeSort(arr, 0, n-1, ic);

	cout<<"Sorted array = ";
	for(i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<"\n";
	cout<<"Inversions = "<<ic<<"\n";

	return 0;
}