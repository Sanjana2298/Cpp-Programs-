#include <bits/stdc++.h>
using namespace std;

int m, n;

int maximum(int a, int b, int c, int d) {
	if(a>b  && a>c && a>d)
		return a;
	if(b>c && b>d)
		return b;
	if(c>d)
		return c;
	return d;
}


int findMax(int a[][10], int p, int q, int x[][10]) {
	cout<<"c";
	if(p<0 || q==n)
		return 0;
	if(x[p][q])
		return x[p][q];
	int t = -1;
	for(int i = 0; i<m; i++) {
		t = maximum(t,a[i][q] + findMax(a,p-1,q+1,x),a[i][q] + findMax(a,p,q+1,x),a[i][q] + findMax(a,p+1,q+1,x));
	}
	x[p][q] = t;
	return t;
}

int main() {

	// http://www.geeksforgeeks.org/gold-mine-problem/

	int a[10][10], x[10][10], i, j;
	cin>>m>>n;

	for(i=0;i<m;i++)
		for(j=0; j<n; j++){
			cout<<"\nEnter "<<i<<j;
			cin>>a[i][j];	
			x[i][j]= 0;
		}

	int r = findMax(a,0,0,x);
	cout<<r<<"\n";

	return 0;
}