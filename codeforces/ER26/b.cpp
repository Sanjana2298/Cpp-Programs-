#include <bits/stdc++.h>
using namespace std;

int main() {

	//  http://codeforces.com/contest/837/problem/B
	int a,b,i,j;
	char s[100][100];
	set<char> hori[100], vert[100];
	set<int> hs, vs;

	cin>>a>>b;
	for(i=0; i<a; i++) {
		for(j=0; j<b; j++) {
			cin>>s[i][j];
			hori[i].insert(s[i][j]);
		}
		hs.insert(hori[i].size());
	}


	for(j=0; j<b; j++) {
		for(i=0; i<a; i++) {
			vert[j].insert(s[i][j]);
		}
		vs.insert(vert[j].size());
	}

	int flag = 1;
	if(hs.size() != 1 || vs.size() != 1)
		flag = 0;
	else {
		int v = *vs.begin();
		int h = *hs.begin();

		if(!( ((v == 3) && (h == 1)) || ((v == 1) && (h == 3)) )) {
			flag = 0;
		}
		else {
			if(v == 3 && h == 1) { // horizontal stripes
				int seg_count = 0;
				int cc[100] = {0};
				char curr;
				for(i=0; i<a; i++) {
					curr = s[i][0];
					while((s[i][0] == curr) && i<a) {
						i++;
						cc[curr]++;
					}
					seg_count++;
					i--;
				}
				if(seg_count > 3) {
					flag = 0;
				}
				if(cc['R'] != cc['B'] || cc['B'] != cc['G'] || cc['R'] != cc['G'])
					flag = 0;
			}
			else {
				int seg_count = 0;
				int cc[100] = {0};
				char curr;
				for(i=0; i<b; i++) {
					curr = s[0][b];
					while((s[0][b] == curr) && i<b) {
						i++;
						cc[curr]++;
					}
					seg_count++;
					i--;
				}
				if(seg_count > 3) {
					flag = 0;
				}
				if(cc['R'] != cc['B'] || cc['B'] != cc['G'] || cc['R'] != cc['G']) 
					flag = 0;

			}
		}
	}

	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}