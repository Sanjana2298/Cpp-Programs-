#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://www.spoj.com/problems/TOANDFRO/
	string s;
	int n, i, j;
	cin>>n;

	while(n) {
		cin>>s;
		char arr[100][100];

		int m,k =0;
		m = s.length()/n;

		for(i=0; i<m; i++) {
			for(j=0; j<n; j++)
				arr[i][j] = s[k++];
			i++;
			if(i<m)
				for(j=n-1; j>=0; j--)
					arr[i][j] = s[k++];
		}

		for(j=0; j<n; j++)
			for(i=0; i<m; i++) 
				cout<<arr[i][j];

		cout<<"\n";
		cin>>n;

	}
	return 0;
}