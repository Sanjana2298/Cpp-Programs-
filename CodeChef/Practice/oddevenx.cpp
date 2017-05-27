#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//https://www.codechef.com/problems/ODDEVENX

	int n , i , odd , even , s;
	odd = even = 0;

	cin>>n;

	for(i=0;i<n;i++){
		cin>>s;
		s%2 ? odd++ : even++ ;
	}
	(odd > even) ? cout<<(odd-even) : cout<<(even-odd);
	return 0;
}
