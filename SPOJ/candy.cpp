#include <bits/stdc++.h>
using namespace std;

int main() {
	//  http://www.spoj.com/problems/CANDY/
	int n, i, a[10000];
	long long int sum;
	cin>>n;

	while(n!= -1) {
		int flag = 1;
		sum =0;
		for(i=0; i<n; i++) {
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n != 0) 
			flag = 0;

		long long int cnt = 0;
		if(flag) {
			long long int avg = sum/n;
			for(i=0; i<n; i++) {
				cnt += abs(a[i] - avg);
			}
			cnt/= 2;
			cout<<cnt<<"\n";
		}
		else
			cout<<"-1\n";

		cin>>n;

	}

	return 0;
}