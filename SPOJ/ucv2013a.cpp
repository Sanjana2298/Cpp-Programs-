#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

lli fast_power(lli base, lli power) {
    lli result = 1;
    while(power > 0) {

        if(power & 1) { 
            result = ((result%mod)*(base%mod)) % mod;
        }
        base = (base%mod * base%mod)% mod;
        power >>= 1;
    }
    return result;
}

lli func(lli x, lli n) {
    lli ans = 1;
   	while (n > 0){
	    if (n & 1){
	        x=x%mod;
	        ans = (ans * x)%mod;
	        ans=ans%mod;
	    }
	    n=n>>1;
	    x=x%mod;
	    x = (x*x)%mod;
	    x=x%mod;
	}

    return ans;
}

int main() {
	// http://www.spoj.com/problems/UCV2013A/

	lli x, n;
	cin>>x>>n;
	while(x!=0 && n!=0) {
		lli ans = fast_power(x,n+1);

		cout<<ans<<"\n";
		cin>>x>>n;
	}

	return 0;
}