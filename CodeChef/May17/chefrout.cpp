#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/MAY17/problems/CHEFROUT
	int t,flag;
	long long int i, len;
	char s[100000];
	
	cin>>t;
	while(t--) {
		cin>>s;
		flag = 1;
		len = strlen(s);
		for(i = 0; i<len-1 && flag; i++) {
			if(s[i]-s[i+1] > 0)
				flag = 0;
		}

		if(flag)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}