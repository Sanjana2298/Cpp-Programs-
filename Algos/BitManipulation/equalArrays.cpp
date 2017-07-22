#include <iostream>
using namespace std;

int main() {
	// check if 2 arrays of same length have same elements
	int t, n,i;
	cin>>t;
	while(t--) {
	    cin>>n;
	    int r = 0,x;
	    for(i=0;i<(2*n);i++) {
	        cin>>x;
	        r^=x;
	    }
	    cout<<!r<<"\n";
	}
	return 0;
}