#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int q;
	char t1[7],t2[7];
	cin>>q;
	while(q--) {
		cin>>t1>>t2;
		if(t1[5] < t2[5])
			cout<<"First\n";
		else if (t1[5] > t2[5])
			cout<<"Second\n";
		else {
			int h1,h2,m1,m2;
			h1 = (t1[0]-48)*10 + (t1[1]-48);
			h2 = (t2[0]-48)*10 + (t2[1]-48);
			m1 = (t1[3]-48)*10 + (t1[4]-48);
			m2 = (t2[3]-48)*10 + (t2[4]-48);
			if(h1 == 12 && h1!= h2) {
				cout<<"First\n";
			}
			else if(h2 == 12 && h1!= h2) {
				cout<<"Second\n";
			}
			else if(h1<h2) {
				cout<<"First\n";
			}
			else if(h1>h2) 
				cout<<"Second\n";
			else {
				if(m1<m2)
					cout<<"First\n";
				else 
					cout<<"Second\n";
			}
		}
	}
	return 0;
}