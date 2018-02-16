#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/OPC1701

	int t;
	lli m, n, i, j;
	char s[300];

	cin>>t;
	while(t--) {
		cin>>n>>m;
		cin>>s;
		int cnt[26] = {0}, lim = 0;

		for(i=0; s[i] != '\0'; i++) {
			cout<<s[i];
			
		}
			// cnt[int(s[i]) - 90] ++;

		// i++;
		// cout<<"hehehe";
		// for(; s[i] != ' ' && s[i] != '\n'; i++) 
		// 	cnt[int(s[i]) - 90] ++;

		// for(int l=0; i<26; i++)
		// 	if(cnt[l] == 2) {
		// 		lim++;
		// 		break;
		// 	}

		// cout<<"hehehe";
		// if(n == 2) {
		// 	if(lim > m)
		// 		cout<<"Very poor choice of words\n";
		// 	else
		// 		cout<<"Welcome to a world without rules\n";	
		// }
		// else {
		// 	lli k = 0;
		// 	for(j = 3; j <= n; j++) {
		// 		while(s[k] != ' ') {
		// 			cnt[int(s[k++]) - 90] --;
		// 		}

		// 		k++;
		// 		i++;
		// 		for(; s[i] != ' ' && s[i] != '\n'; i++) 
		// 			cnt[int(s[i]) - 90] ++;

		// 		for(int l=0; i<26; i++)
		// 			if(cnt[l] == 2) {
		// 				lim++;
		// 				break;
		// 			}

		// 	}
		// 	if(lim > m)
		// 		cout<<"Very poor choice of words\n";
		// 	else
		// 		cout<<"Welcome to a world without rules\n";

		// }
		
	}



	return 0;
}