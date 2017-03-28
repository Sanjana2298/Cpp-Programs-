#include <bits/stdc++.h>
using namespace std;

int main() {

	// https://www.codechef.com/COOK80/problems/ROBOTG
	int t,m,n, horizontal, vertical;
	char cmd[10];

	cin>>t;
	while(t--) {
		cin>>m>>n;
		cin>>cmd;

		int safe = 1;

		horizontal = vertical = 0;
		// int len = strlen()

		for(int i=0; cmd[i]!='\0'; i++) {
			switch(cmd[i]) {
				case 'U' : {
					vertical--;
					break;
				}
				case 'D' : {
					vertical++;
					break;
				}
				case 'R' : {
					horizontal++;
					break;
				}
				case 'L' : {
					horizontal--;
					break;
				}
			}

			if((abs(horizontal) == n) || (abs(vertical) == m)) {
				safe = 0;
				break;
			}
		}

		if(safe)
			cout<<"safe\n";
		else
			cout<<"unsafe\n";


	}
	return 0;
}