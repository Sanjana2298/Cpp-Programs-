#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int edist(string s1, string s2) {
	int m, n, i, j;
	m = s1.length();
	n = s2.length();

	int arr[200][200];

	for(i=0; i<=m; i++) {
		for(j=0; j<=n; j++) {
			if(i==0)
				arr[i][j] = j;
			else if(j==0) 
				arr[i][j] = i;
			else if(s1[i-1] == s2[j-1]) {
				arr[i][j] = arr[i-1][j-1];
			}
			else {
				arr[i][j] = 1 + min(arr[i-1][j-1], min(arr[i-1][j], arr[i][j-1]));
			}	
		}
	}

	return arr[m][n];
}

int main() {
	// http://www.spoj.com/problems/EDIST/

	string s1, s2;
	int t;

	cin>>t;

	while(t--) {
		cin>>s1>>s2;
		int r = edist(s1,s2);
		cout<<r<<"\n";
	}

	return 0;
}