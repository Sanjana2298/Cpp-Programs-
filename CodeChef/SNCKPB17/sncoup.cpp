#include <bits/stdc++.h>
using namespace std;

int findType(char a, char b) {
	if(a == '.' && b == '.')
		return 0;
	if(a == '.' && b == '*')
		return 1;
	if(a == '*' && b == '.')
		return 2;

	return 3;
}

int main() {

	// https://www.codechef.com/SNCKPB17/problems/SNCOUP
	int t;
	cin>>t;

	long long int n, i;
	char arr[2][100000];

	while(t--) {
		cin>>n;
		long long int fence = 0;
		int hori = 0,n_type;
		for(i = 0; i<n;i++)
			cin>>arr[0][i];
		for(i = 0; i<n;i++) 
			cin>>arr[1][i];

		for(i=0; i<n;i++) {
			int c_type = findType(arr[0][i],arr[1][i]);
			// cout<<"\n=> "<<c_type<<"\n";
			if(c_type == 0)
				continue;
			if(c_type == 3) {
				hori = 1;
			}
			else if( c_type == 1) {
				n_type = 0;
				while(i!= n-1 && n_type == 0) {
					i++;
					n_type = findType(arr[0][i], arr[1][i]);
					// cout<<"\nNext type = "<<n_type<<" i = "<<i<<" n - 1 = "<<n-1<<"\n";
				}
				if(n_type == 2)
					hori = 1;
				else if(n_type == 1)
					i--;
				else if(n_type == 3)
					fence++;
			}
			else if( c_type == 2) {
				n_type = 0;
				while(i!= n-1 && n_type == 0) {
					i++;
					n_type = findType(arr[0][i], arr[1][i]);
					// cout<<"\nNext type = "<<n_type<<" i = "<<i<<" n - 1 = "<<n-1<<"\n";
				}
				if(n_type == 1)
					hori = 1;
				else if(n_type == 2)
					i--;
				else if(n_type == 3)
					fence++;
			}
			fence++;
			// cout<<"\n hori = "<<hori<<" Fence = "<<fence<<"\n.\n.\n";
		}
		if(!fence)
			cout<<hori<<"\n";
		else 
			cout<<fence+hori-1<<"\n";
	}

	return 0;
}