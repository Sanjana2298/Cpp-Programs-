#include <bits/stdc++.h>
using namespace std;

int decode(char arr[], int n, int s, int m) {
	if(s>=n)
		return 1;

	int i, cnt = 0;
	for(i=s; i<=m && i<=n; i++) {
		if(arr[i] == '0' && arr[i-1]!= '1'){
			return -30000;
		}
		if(i==m) {
			int val = (arr[s] - 48)*10 + arr[m] - 48;
			if(val == 0)
				return -30000;
			if(val <= 26) {
				cnt+= decode(arr,n,i+1,i+2);
			}

		}
		else 
			cnt+= decode(arr,n,i+1,i+2);
	}

	return cnt;
}

int main() {

	// http://practice.geeksforgeeks.org/problems/total-decoding-messages/0

	int t,n,i;
	char a[50];

	cin>>t;
	while(t--) {
		cin>>n;
		cin>>a;
		int res = decode(a,n-1,0,1);
		if(res<0)
			cout<<"0\n";
		else
			cout<<res<<"\n";
	}
	return 0;
}