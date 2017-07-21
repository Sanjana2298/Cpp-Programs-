#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,x;
	cin>>t;
	
	while(t--) {
	    cin>>x;
	    if((x&(x-1)) == 0) {
	        cout<<"True\n";
	    }
	    else {
	        cout<<"False\n";
	    }
	}
	return 0;
}