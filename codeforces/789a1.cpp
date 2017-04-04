#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k, s , pockets = 0;
	cin>>n>>k; 	
	while(n--) {
		cin>>s;
		if(s>k) {
			pockets+= (s/k);
			if(s%k)
				pockets++;
		}
		else {
			pockets--;
		}
	}
	cout<<pockets;
	return 0;
}