#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/FEB13/problems/BUY1GET1
	
	int t , i;
	int price ;
	string s ;

	cin>>t;

	while(t--){

		price = 0.0;
		int count[126] = {0} ;
		cin>>s;

		for(i=0 ; s[i]!='\0' ; i++){
			count[s[i]]++;
		}

		for(i=65 ; i< (65+26) ; i++){
			price+= ((count[i]+1)/2);
			price+= ((count[i+32]+1)/2);
		}

		cout<<price<<"\n";
	}

	return 0;
}