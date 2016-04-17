#include <bits/stdc++.h>
using namespace std ;

int main(){
	// insertion sort !
	int i ,a[100] , n ,key ,j;

	cout<<"\nSize ?";
	cin>>n;

	for(i=0;i<n;i++)
		cin>>a[i];

    for(i=1;i<n;i++){
    	key =a[i];
    	j=i-1;
    	
    	while((a[j]>key)&&(j>=0)){
    		a[j+1]=a[j];
    		j--;
    	}

    	a[j+1]=key;
    }

    cout<<"\nSorted array - ";
    for(i=0;i<n;i++)
    	cout<<a[i]<<" ";

    return 0 ;
}