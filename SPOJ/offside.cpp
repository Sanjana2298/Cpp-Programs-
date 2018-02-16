#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// http://www.spoj.com/problems/OFFSIDE/

	int n, asz, ds;

	cin>>asz>>ds;

	do {
		vector<int> v1, v2;
		while(asz--) {
			cin>>n;
			v1.push_back(n);
		}

		while(ds--) {
			cin>>n;
			v2.push_back(n);
			
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		if(v1[0] < v2[1])
			cout<<"Y\n";
		else
			cout<<"N\n";

		cin>>asz>>ds;
		
	}while(asz != 0 && ds != 0);

	return 0;
}