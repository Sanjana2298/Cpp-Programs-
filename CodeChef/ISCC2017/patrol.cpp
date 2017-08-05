#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/ISCC2017/problems/PATROL
	double u,v;
	int x,t;
	cin>>t;

	while(t--) {
		cin>>u>>v>>x;
		printf("%.10f\n",x/(u+v));
	}
	return 0;
}