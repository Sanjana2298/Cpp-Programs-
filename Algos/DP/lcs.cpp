#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int


void lcs(char a[], char b[], int m, int n) {
	int l[100][100] = {0};
	int i, j, k= 0;

	for(i=1;i<=m;i++) {
		for(j=1;j<=n; j++) {
			if(a[i-1] == b[j-1]) {
				l[i][j] = 1 + l[i-1][j-1];
			}
			else
				l[i][j] = max(l[i-1][j], l[i][j-1]);
		}
	}

	char res[100];
	int ind = l[m][n];
	res[ind--] = '\0';
	i=m; j=n;

	while(i>0 && j>0) {
		if(a[i-1] == b[j-1]) {
			res[ind--] = a[i-1];
			i--; j--;
		}

		else if(l[i][j-1] > l[i-1][j])
			j--;
		else
			i--;
	} 

	cout<<res<<"\n";

}

int main() {
	
	//
	char a[100], b[100];

	cin>>a>>b;

	lcs(a,b,strlen(a),strlen(b));
	// cout<<res<<"\n";

	return 0;
}