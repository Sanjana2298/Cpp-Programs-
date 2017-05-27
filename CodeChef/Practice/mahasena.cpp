#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/problems/YCCE03
	int n ,a[101] , lucky =0 , unlucky =0;
	cin>>n;

	for(int i=0 ;i<n;i++){
		cin>>a[i];
		if(a[i]%2){
			unlucky++;
			continue;
		}
		lucky++;
	}
	if(lucky>unlucky){
		cout<<"READY FOR BATTLE\n";
	}
	else{
		cout<<"NOT READY\n";
	}

	return 0;
}