#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli reverseBits(lli num) {
    lli res = 0;
    while(num > 0) {
    	res = res<<1;
    	res = res|(num&1);
    	num = num>>1;
    }

    return res;

}
int main() {
	// http://www.spoj.com/problems/EC_CONB/

	lli n, num;
	cin>>n;

	while(n--) {
		cin>>num;
		if(num%2 == 0)
			num = reverseBits(num);

		cout<<num<<"\n";
	}

	return 0;
}