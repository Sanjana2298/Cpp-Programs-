#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.hackerrank.com/contests/codeagon/challenges/back-to-origin
	long long int x, y, n, x1, y1;
	cin>>x>>y;
	cin>>n;
	while(n--) {
		cin>>x1>>y1;
		x-=x1;
		y-=y1;
	}
	cout<<x<<" "<<y<<"\n";
	return 0;
}