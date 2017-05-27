#include "bits/stdc++.h"

using namespace std;

class Points {
public:
	long long int x,y;
	char s[100];
	Points() {
		this->x = 0;
		this->y = 0;
	}

	void setVal(long long int a, long long int b, char s[100]) {
		this->x = a;
		this->y = b;
		strcpy(this->s, s);
	}

	void printVal() {
		cout<<this->x<<" "<<this->y<<" "<<this->s<<"\n";
	}
	
};

int main(){

	// https://www.codechef.com/problems/BOOKCHEF
	Points p[1000];
	long long int n, m, i, x, y, spl[1000];
	char s[100];
	cin>>n>>m;

	// for(i=0; i<n; i++)
		// cin>>spl[i];
	for(i=0 ; i<m; i++){
		cin>>x>>y>>s;
		p[i].setVal(x, y, s);
	}

	for(i=0 ; i<m; i++){
		p[i].printVal();
	}

	return 0;
}