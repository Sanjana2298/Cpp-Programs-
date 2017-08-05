#include <bits/stdc++.h>
using namespace std;

// class sort_ind {
// 	private:
// 		float* arr;
// 	public:
// 		sort_ind(float* parr) : arr(parr) {}
//      	bool operator()(int i, int j) const { return round(arr[i])>round(arr[j]); }
// };

int main() {

	// https://www.codechef.com/JAN15/problems/CHEFSTON/

	int t;
	long long int time[100000], coins[100000], k, n, i, profit, r;

	cin>>t;

	while(t--) {
		cin>>n>>k;
		
		for(i=0;i<n;i++)
			cin>>time[i];
		for(i=0;i<n;i++)
			cin>>coins[i];

		profit = 0;
		for(i=0; i<n; i++) {
			r = (k/time[i])*coins[i];
			if(r > profit)
				profit = r;
		}

		cout<<profit<<"\n";
	}

	return 0;
}