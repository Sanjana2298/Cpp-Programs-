#include <bits/stdc++.h>
using namespace std;

int maximum(int a , int b) {
	if(a>b)
		return a;
	return b;
}

int cutRod(int p[], int n, int r[]) {
	if(r[n] > 0)
		return r[n];
	if(n==0)
		return n;
	int q = 0;
	int s = n;
	for(int i=1;i<=n;i++) {
		int t = p[i] + cutRod(p,n-i,r);
		if(t>q)
			s = i;
		    q = t;
	}
	// cout<<s<<"**";
	r[n] = q;
	return q;
}

int main() {

	int len, p[10],r[10], i;
	cin>>len;

	for(i=1; i<=len;i++) {
		cin>>p[i];
		r[i]=0;
	}

	int a = cutRod(p,len,r);
	cout<<"\n"<<a<<"\n";

	return 0;
}