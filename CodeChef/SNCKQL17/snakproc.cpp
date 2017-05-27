#include <bits/stdc++.h>
using namespace std;

int main() {

	int r,l,i;
	char s;
	cin>>r;

	while(r--) {
		cin>>l;
		int valid = 1, snake = 0;
		for(i=0; i<l; i++) {
			cin>>s;
			if(s == 'H') 
				snake++;
			else if(s == 'T')
				snake--;

			if(snake < 0 || snake > 1)
				valid = 0;
		}

		if(snake == 1) 
			valid = 0;

		if(valid)
			cout<<"Valid\n";
		else
			cout<<"Invalid\n";
	}

	return 0;
}