#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int m , n ,i;
	int t;
	cin>>t;

	while(t--) {
		vector<int> a , b;
		cin>>m>>n;
		long long int s , count = 0;

		for(i=0 ; i<m ; i++) {
			cin>>a[i];
			// a.push_back(s);
		}
		for(i=0 ; i<n ; i++) {
			cin>>b[i];
			// b.push_back(s);
		}

		for(i=0 ; i<m ; i++) {
			bool found = find(b.begin(), b.end(), a[i]) != b.end() ;

			if(found) {
				count++ ;
			}
		}

		cout<<count<<"\n";

	}


	return 0;
}