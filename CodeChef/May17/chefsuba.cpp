#include <bits/stdc++.h>
using namespace std;

long long int ones(int arr[], long long int a, long long int b, long long int n) {
	long long int cnt = 0, i;

	if(b>n) {
		for(i = a; i<n; i++) {
			if(arr[i] == 1)
				cnt++;
		}
		for(i=0; i < b-n; i++)
			if(arr[i] == 1)
				cnt++;
	}

	else {
		for(i = a; i < b; i++)
			if(arr[i] == 1)
				cnt++;
	}

	return cnt;
}

long long int maximum(long long int arr[], long long int a, long long int b, long long int n) {
	long long int max = 0, i;

	if(b>n) {
		for(i = a; i<n; i++) {
			if(arr[i] > max)
				max = arr[i];
		}

		for(i=0; i < b-n; i++)
			if(arr[i] > max)
				max = arr[i];
	}

	else {
		for(i = a; i < b; i++) {
			if(arr[i] > max)
				max = arr[i];
		}
	}

	return max;
}

int main() {

	// https://www.codechef.com/MAY17/problems/CHEFSUBA
	long long int n,k,p,d,i,cnt, one[100000],max[100000], front = 0;
	int a[100000];
	char ch;
	cin>>n>>k>>p;

	for(i=0;i<n;i++) 
		cin>>a[i];

	for(i=0;i<n;i++) {
		one[i] = ones(a,i,i+k,n);
	}

	d = n-k+1;
	for(i=0;i<n;i++) {
		max[i] = maximum(one,i,i+d,n);
	}

	for( i=0; i<p; i++) {
		cin>>ch;

		if(ch == '?') {
			cout<<max[front]<<"\n";
		}
		else {
			front --;
			if(front < 0) {
				front = n-1;
			}
		}
	}

	return 0;
}