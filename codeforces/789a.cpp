#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k;
	float s , pockets;
	cin>>n>>k; 	
	while(n--) {
		cin>>s;
		pockets += ceil(s/k);
	}
	cout<<ceil(pockets/2);
	return 0;
}