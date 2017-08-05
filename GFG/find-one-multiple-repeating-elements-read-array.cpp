#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://www.geeksforgeeks.org/find-one-multiple-repeating-elements-read-array/
	int n, a[100], v,i, d=0;
	cin>>n;

	for(i=0;i<=n;i++) {
		cin>>a[i];
		d^=a[i];
		cout<<"d= "<<d<<"\n";
		if(!d) {
			cout<<a[i]<<"# ";
			v = a[i];
		}
	}

	cout<<v<<"\n";
	return 0;
}