#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/JUNE17/problems/NEO01
	int t;
	long long int pos, pos_val, tot,x,n;

	cin>>t;
	while(t--) {
		tot = 0;
		pos = 0;
		pos_val = 0;
		long long int arr[100000], k =0, i;

		cin>>n;
		while(n--) {
			cin>>x;
			if(x<0) {
				tot+=x;
				arr[k++] = x;
			}
			else {
				pos++;
				pos_val += x;
			}
		}

		sort(arr, arr+k, greater<long long int>());

		for(i = 0; i<k; i++) {
			if(pos*pos_val < (pos+1)*(pos_val+arr[i])) {
				pos++;
				pos_val += arr[i];
				tot -= arr[i];
			}
		}

		tot += pos*pos_val;
		cout<<tot<<"\n";		

	}

	return 0;
}