#include "bits/stdc++.h"
using namespace std;

int main(){

	//https://www.codechef.com/KOL16MOS/problems/KOL16J
	int t, n, ch[500], i;

	cin>>t;

	while(t--){
		cin>>n;
		int flag = 0, cnt[500] = {0}, min = 501, max = 0 ;

		for(i=0;i<n;i++){

			cin>>ch[i];

			if(ch[i] < min)
				min = ch[i];
			if(ch[i] > max)
				max = ch[i];

			cnt[ch[i]]++;

			if(cnt[ch[i]] > 1)
				flag = -1 ;

			if(i && flag != -1){
				if(ch[i]!=(ch[i-1]+1))
					flag = 1;
			}
		}

		if(flag== -1 || flag == 0 || (max-min+1 > n)){
			cout<<"no\n";
		}
		else
			cout<<"yes\n";

	}

	return 0;
}