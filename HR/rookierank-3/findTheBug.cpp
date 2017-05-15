#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.hackerrank.com/contests/rookierank-3/challenges/find-the-bug
	int n,i,j,r,c;
	cin>>n;
	char a[1000][1000];
	for(i = 0; i<n; i++) {
		for(j=0; j<n; j++)
			cin>>a[i][j];
	}
	for(i = 0; i<n; i++) {
		for(j=0; j<n; j++)
			if(a[i][j] == 'X')
				cout<<i<<","<<j<<"\n";
	}
	return 0;
}