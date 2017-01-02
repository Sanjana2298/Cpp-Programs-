#include <iostream>
#include <bitset>
#include "bits/stdc++.h"

using namespace std;

int main()
{

	// https://www.codechef.com/problems/DCE05

	long long int t, n, i;
	cin>>t;

	while(t--){
		cin>>n;
		string binary = bitset<20>(n).to_string();
		cout<<binary;
		for(i=0;i<20;i++){
			if(binary[i]=='1'){
				cout<<pow(2,(19-i))<<"\n";
				break;
			}
		}
	}
    return 0;
}
