#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
	int *a = new int[mid-s+1];
	int *b = new int[e-mid];

	int i, j, k;
	
	for(i = s; i <=mid; i++)
		a[i-s] = arr[i];
	for(i= mid+1; i <=e; i++)
		b[i-(mid+1)] = arr[i];

	i = 0;
	j = 0;
	k = s;

	while(i<=(mid-s) && j<=(e-(mid+1))) {
		if(a[i] > b[j])
			arr[k++] = b[j++];
		else 
			arr[k++] = a[i++];
	}

	while(i<=mid-s)
		arr[k++] = a[i++];

	while(j<=(e-(mid+1)))
		arr[k++] = b[j++];

}


void mergeSort(int a[], int s, int e) {
	if(s<e) {
		int mid = s+(e-s)/2 ;
		mergeSort(a, s, mid);
		mergeSort(a, mid+1, e);
		merge(a,s,mid,e);
	}
}

int main() {

	int arr[100], n, i ;
	cin>>n;

	for(i = 0; i<n; i++) 
		cin>>arr[i];

	mergeSort(arr, 0, n-1);

	cout<<"Sorted array = ";
	for(i=0;i<n;i++) 
		cout<<arr[i]<<" ";
	cout<<"\n";

	return 0;
}