#include <bits/stdc++.h>
using namespace std;

long long int neighbour_max(int i, int j, long long int a[502][502]) {
	int mx = a[i][j];
	if(a[i-1][j-1] > mx) 
		mx = a[i-1][j-1];
	if(a[i-1][j] > mx) 
		mx = a[i-1][j];
	if(a[i-1][j+1] > mx) 
		mx = a[i-1][j+1];
	if(a[i][j-1] > mx) 
		mx = a[i][j-1];
	if(a[i][j+1] > mx) 
		mx = a[i][j+1];
	if(a[i+1][j-1] > mx) 
		mx = a[i+1][j-1];
	if(a[i+1][j] > mx) 
		mx = a[i+1][j];
	if(a[i+1][j+1] > mx) 
		mx = a[i+1][j+1];

	return mx;
}

int main() {

	// https://www.codechef.com/SNCKPB17/problems/SNSOCIAL
	int t,m,n,i,j,flag;
	cin>>t;
	long long int a[502][502], n_max[502][502];

	while(t--) {
		cin>>m>>n;
		long long int steps = 0;
		flag = 0;

		for(i=0;i<=n+1;i++) {
			a[0][i] = 0;
			a[m+1][i] = 0;
		}
		for(i=1;i<=m;i++) {
			a[i][0] = 0;
			a[i][n+1] = 0;
		}

		for(i=1;i<=m;i++) {
			for(j=1;j<=n;j++) {
				cin>>a[i][j];
				if(a[i][j] != a[1][1])
					flag = 1;
			}

		}
		// cout<<"\nInitial set size = "<<s.size()<<"\n";
		while(flag) {
			flag = 0;
			steps++;
			// cout<<"neighbour_max = \n";
			for(i=1;i<=m;i++) {
				for(j=1;j<=n;j++) {
					n_max[i][j] = neighbour_max(i,j,a);
					if(n_max[i][j] != n_max[1][1])
						flag = 1;
					// cout<<n_max[i][j]<<" ";
				}
				// cout<<"\n";
			}

			for(i=1;i<=m;i++) 
				for(j=1;j<=n;j++)
					a[i][j] = n_max[i][j];
			// cout<<"\nSet size = "<<s.size()<<"\n";
		}
		cout<<steps<<"\n";
	}

	return 0;
}