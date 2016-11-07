#include "bits/stdc++.h"

using namespace std;

struct posts{
	long long int num ,pop ;
	char name[100];
};

int search(long long int array[] , int s , long long int val){
	for(int i = 0 ; i < s ; i++){
		if(array[i] == val){
			return 1;
		}
	}
	return 0;
}

int copy_value(posts b , posts a[] , int t){
	a[t].num = b.num ;
	a[t].pop = b.pop ;
	strcpy(a[t].name , b.name);
}

int swap_it(posts &x , posts &y){
	x.num = y.num ;
	x.pop = y.pop ;
	strcpy(x.name , y.name);
}

int swap (posts &a , posts &b){
	posts temp ;
	swap_it(temp , a);
	swap_it(a,b);
	swap_it(b,temp);
}

int partition(posts ar[],int p , int r){
	
    long long int pivot = ar[r].pop;
    int i=p-1;

   for(int j=p;j<=r-1;j++){
   	     if(ar[j].pop>pivot){
   	     	i++;
   	     	swap(ar[j],ar[i]);
   	     }
   }

   swap(ar[i+1],ar[r]);
   return i+1 ;
}

int quickSort(posts a[], int p , int r){

	if(p<r){
		int q = partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}
}

int main(){
	int n , m , i , j=0 , k =0;
	long long int spl[1000];
	posts p1;
	posts splf[1000], ord[1000]; 

	cin>>n>>m;
	for(i=0;i<n;i++) {  // number of special friends	
		cin>>spl[i];
	} 

	for(i=0;i<m;i++){   // get all details
		cin>>p1.num>>p1.pop>>p1.name;
		if(search(spl,n,p1.num)){
			copy_value(p1,splf,j);
			j++;
		}
		else {
			copy_value(p1,ord,k);
			k++;
		}

	}

	quickSort(splf,0,j-1);
	quickSort(ord,0,k-1);

	for(i=0;i<n;i++){
		cout<<splf[i].name<<"\n";
	}
	for(i=0;i<(m-n);i++){
		cout<<ord[i].name<<"\n";
	}

}