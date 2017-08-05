#include <bits/stdc++.h>
using namespace std;

int main() {

	// http://codeforces.com/contest/837/problem/0

	char s[200];
	vector<string> v;
	int n, max = 0;
	cin>>n;

	cin.ignore();
	scanf("%[^\n]s",s);

	for(int i=0; i<n; i++) {
		int cnt = 0;
		while(s[i] != ' ' && (i < n)) {
			if(s[i] >= 'A' && s[i] <= 'Z') 
				cnt++;
			i++;
		}
		if(cnt > max)
			max = cnt;
	}
	cout<<max<<"\n";
	return 0;
}
