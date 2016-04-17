#include "iostream"

using namespace std ; 
// Find 1D peak

int find_peak(int a[] , int s , int e){

	int mid = (s+e)/2 ;

	if((a[mid]>a[mid-1])&&(a[mid]<a[mid+1])){
        s=mid;
        find_peak(a,s,e);
	}
	else if((a[mid]>a[mid+1])&&(a[mid]<a[mid-1])){
		e=mid;
		find_peak(a,s,e);
	}
	else
		return a[mid];
}

int main(){

	int arr[50] , n ;
    cout<<"\nSize ? ";
	cin>>n; // size of the array

	for(int i=0 ;i<n ; i++)
		cin>>arr[i];

	int peak = find_peak(arr, 0 , n-1);

	cout<<"Peak = "<<peak<<"\n" ; 
	return 0 ;
}

