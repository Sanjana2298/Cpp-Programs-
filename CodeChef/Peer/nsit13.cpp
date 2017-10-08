#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/NSIT13

	int t = 10, i;

	// while(t--) {
	// 	set<int> s;
	// 	for(i=0; i<10; i++) {
	// 		int r;
	// 		cin>>r;
	// 		s.insert(r%42);
	// 	}

	// 	cout<<s.size()<<"\n";
	// }

	int A = 1;
	vector<int> f;
    int i;
    for(i=1; i<= sqrt(A); i++) {
        if(A%i == 0)  {
            f.push_back(i);
            if(A/i != i)
                f.push_back(A/i);
        }
    }

	return 0;
}
