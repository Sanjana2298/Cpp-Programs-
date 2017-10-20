#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/UCV2013I/

	int r, n;

	cin>>r>>n;

	while(r!=0 && n!=0) {
		double ans = r/sin(acos(-1)/(2*n));
		printf("%.2lf\n", ans);
		cin>>r>>n;
	}


	return 0;
}