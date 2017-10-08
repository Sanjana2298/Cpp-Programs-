#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli func(lli x, lli n, lli a[]) {
	lli sum = 0, i;
	const unsigned int m = 1000000007;
	for(i=x-1;i<n;i+=x)
		sum = (sum + ((a[i]*a[i])%m));
	return sum;
}

int main() {

	// https://www.codechef.com/LOCAUG17/problems/ALATE

	int t;
	lli n, q, arr[100000], i, x, y;
	cin>>t;

	while(t--) {
		scanf("%lld %lld ", &n, &q);
		for(i=0; i<n; i++) 
			scanf("%lld" , &arr[i]);

		for(i=0; i<q; i++) {
			scanf("%lld", &x);

			if(x == 1) {
				scanf("%lld", &y);
				lli r = func(y, n, arr);
				printf("%lld\n", r);
			}

			else {
				scanf("%lld %lld", &x, &y);
				arr[x-1] = y;
			}
		}
	}	

	return 0;	
}
