#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli fast_power(lli base, lli power, lli MOD) {
    lli result = 1;
    while(power > 0) {

        if(power & 1) { 
            result = (result*base) % MOD;
        }
        base = (base * base)% MOD;
        power >>= 1;
    }
    return result;
}

int main() {
	// http://www.spoj.com/problems/FACTMUL/

	lli k = 109546051211, n, ans = 1, i;

	cin>>n;

	for(i=1; i<=n; i++) {
		lli x = fast_power(i,n-i+1, k);
		ans = ((ans%k)*(x%k))%k;
	}

	cout<<ans<<"\n";


	return 0;
}