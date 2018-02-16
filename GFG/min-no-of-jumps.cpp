#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int findMax(int start, int a[], int n) {
	int m = start, skip = a[start-1], i;

	for(i= start+1; i<=start+skip-1 && i<n; i++) {
		if(a[i] >= a[m])
			m = i;
	}

	return m;
}

int main() {
	// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

	int t, n, a[100], i;

	cin>>t;
	while(t--) {
		cin>>n;
		for(i=0; i<n; i++)
			cin>>a[i];

		int cnt = 0;
		int flag = 1, index = 0;
		while(flag && index < n) {
			if(n == 1 || a[index] == 0) {
				flag = 0;
			}
			else {
				if(a[index] >= n-index-1) {
					cnt++;
					flag = 0;
				}
				else {
					index = findMax(index+1, a, n);
					cnt++;
				}
			}
		}
		if(a[index] == 0)
			cout<<"-1\n";
		else {
			cout<<cnt<<"\n";
		}
	}


	return 0;
}