#include <bits/stdc++.h>
using namespace std;


int count_zeroes(int s, int e, int a[]) {
	int sum = 0;
	for(int i=s; i<=e; i++) {
		if(!a[i])
			sum++;
	}
	return sum;
}

int main() {

	// https://www.hackerearth.com/challenge/competitive/programming-indiahacks-2017/algorithm/hack-the-string-9dce7834/

	int n, ones = 0, a[100], i;
	cin>>n;

	for(i = 0; i<n; i++) {
		cin>>a[i];
		if(a[i])
			ones++;
	}

	int start, end, max = 0;
	if(ones)
		max = 1;
	if(ones == n)
		max = n;

	for(start = 0; start < n; start++) {
		for(end = start+1 ; end <n; end++) {
			int z_count = 0, o_count = 0;
			z_count = count_zeroes(start, end, a);
			o_count = end - start + 1 - z_count;

			if(z_count <= 1 && o_count < ones) {
				if(max < end - start + 1) 
					max = end - start + 1;
			}
		}
	}
	cout<<max<<"\n";

	return 0;
}