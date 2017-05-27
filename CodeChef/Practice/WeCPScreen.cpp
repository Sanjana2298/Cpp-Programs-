#include <bits/stdc++.h>
 
 using namespace std ;

 int main(){
 	long long int a[100000] , n  , compatible =0 , groups = 0;
 	cin>>n;

 	for(int i=0 ; i<n ; i++){
 		cin>>a[i];

 		if(compatible == 0){
 			current = a[i];
 		}
 		else{
 			if(a[i] == current){
 				compatible++;
 			}
 			else{
 				if(compatible ! = 0){
 					groups ++;
 					compatible = 0;
 				}
 			}
 		}
 	}

 	if(groups == 0){
 		cout<<"-1";
 	}
 	else{
 		cout<<groups;
 	}
 }