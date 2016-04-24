#include <bits/stdc++.h>

using namespace std ;

int swap (int &a , int &b){
	if(a!=b) {
	a=a+b;  
	b=a-b; 
	a=a-b; 
   }
}

int partition(int ar[],int p , int r){
	
    int pivot = ar[r];
    int i=p-1;

   for(int j=p;j<=r-1;j++){
   	     if(ar[j]<=pivot){
   	     	i++;
   	     	swap(ar[j],ar[i]);
   	     	
   	     }
   }

   swap(ar[i+1],ar[r]);
   return i+1 ;
}

int quickSort(int a[], int p , int r){

	if(p<r){
		int q = partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}


}


int main(){

	int arr[300] , s, i;

	cout<<"\nSize ? ";
	cin>>s;

	for(i=0;i<s;i++)
		cin>>arr[i];

	quickSort(arr,0,s-1);

	for(i = 0 ; i<s; i++)
		cout<<arr[i]<<" ";

	return 0 ;

}