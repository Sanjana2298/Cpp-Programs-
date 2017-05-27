#include <bits/stdc++.h>

using namespace std;
// check a better way to do it
int main(){
	long long int t , n ,m , c ,cnt;
	cin>>t;

	for(int i=0; i<t; i++){
		cin>>n>>m>>c;
		if(n*m < c){
			cout<<"0\n";
			continue;
		}
		
		cnt=0;

		for(int j=1 ; j<= n ; j++){
			if(c % j == 0){
				int p = c/j;
				if((j<=m)&&((p<=n)||(p<=m))){
					cnt++;
				}
			}
		}
		cout<<cnt<<"\n";
	}

	return 0;
}