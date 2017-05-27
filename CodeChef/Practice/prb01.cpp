#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/problems/PRB01

	int t, n;
	cin>>t;

	int isPrime[100001] = {0};
	for( int i = 2; i <= 100000; i++) {
		if(isPrime[i] == 0) {
			for(int k = 2*i; k <= 100000; k+=i) {
				isPrime[k] = 1;
			}
		}
	}

	while(t--) {
		cin>>n;
		if(isPrime[n] == 0)
			cout<<"yes\n";
		else 
			cout<<"no\n";
	}
	return 0;
}