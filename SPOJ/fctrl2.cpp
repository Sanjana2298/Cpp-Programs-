#include <bits/stdc++.h>
using namespace std;

double factorial(int n) {
	if(n <= 1)
		return 1;
	else
		return (n*factorial(n-1));
}

int main() {

	// http://www.spoj.com/problems/FCTRL2/
	int t, n;
	cin>> t;
	while(t--) {
		cin>>n;
		cout<<factorial(n)<<"\n";
	}
	return 0;
}