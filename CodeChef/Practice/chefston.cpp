#include <bits/stdc++.h>
using namespace std;

class sort_ind {
	private:
		float* arr;
	public:
		sort_ind(float* parr) : arr(parr) {}
     	bool operator()(int i, int j) const { return round(arr[i])>round(arr[j]); }
};

int main() {

	// https://www.codechef.com/JAN15/problems/CHEFSTON/

	int t;
	long long int n,k,i,p,a1[100000],ind[100000];
	float a2[100000];
	cin>>t;

	while(t--) {
		cin>>n>>k;
		p=k;
		long long int profit = 0;
		for(i=0;i<n;i++) {
			cin>>a1[i];       // time
		}
		for(i=0;i<n;i++) {
			cin>>a2[i];       // profit per min
			a2[i]/=a1[i];
		}
		for(i=0;i<n;i++) {
			ind[i] = i;
		}

		sort(ind,ind+n,sort_ind(a2));

		for(i=0;i<n && p>=0 ;i++) {
			long long int r = (p/a1[ind[i]])*a1[ind[i]];
			p-=r;
			profit+= r*a2[ind[i]];
		}
		cout<<profit<<"\n";
	}

	return 0;
}