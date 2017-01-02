#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/BITF2016/problems/THESAV

	int t ;
	string s ;

	cin>>t;
	while(t--){
		cin>>s;
		long long int c[100000] = {0} ,k =0 , flag=0 , i , j;

		if(s[0]!= '*'){
			cout<<"NO\n";
			continue;
		}
		for(i=1;s[i]!='\0';i++){

			if(s[i]=='*'){
				continue;
			}
			for(j=i+1; s[j]!='\0'&& s[j]!='*' ; j++){
				c[k]++;
				cout<<"k= "<<k<<"  count ="<<c[k]<<"j = "<<j<<"\n";
			}
			k++;
		}
		for(i=0;i<k ; i++){
			if(c[i]>2){
				flag=1;
				cout<<"NO\n";
				break;
			}
		}
		if(flag==0){
			cout<<"YES\n";
		}
		
	}

	return 0;
}