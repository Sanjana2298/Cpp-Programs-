#include <bits/stdc++.h>
using namespace std;

int retType(char arr[2][500], int col) {
	if(arr[0][col] == '#' && arr[1][col] == '#')
		return 0;
	if(arr[0][col] == '#' && arr[1][col] == '.' )
		return 1;
	if(arr[0][col] == '.' && arr[1][col] == '#' )
		return 2;
	if(arr[0][col] == '.' && arr[1][col] == '.' )
		return 3;
}

int main() {

	// https://www.codechef.com/SNCKPA17/problems/ISSNAKE
	int t,n,i, total_hash, prev_type, curr_type, visited_hash, ended_at, flag;
	char arr[2][500];

	cin>>t;
	while(t--) {
		cin>>n;
		total_hash = 0; visited_hash = 0; prev_type = curr_type = -1; ended_at = -1; flag =1;

		for(i=0; i<n;i++) {
			cin>>arr[0][i];
			if( arr[0][i] == '#')
				total_hash++;
		}
		for(i=0; i<n;i++) {
			cin>>arr[1][i];
			if( arr[1][i] == '#')
				total_hash++;
		}
		// Checking starts
		i = 0;
		while(retType(arr,i) == 3) {
			prev_type = 3;
			i++;
			continue;
		}

		for(; i<n && flag; i++) {
			curr_type = retType(arr,i);
			switch(curr_type) {
				case 0: {
					visited_hash+=2;
					break;
				}
				case 1: {
					visited_hash++;
					break;
				}
				case 2: {
					visited_hash++;
					break;
				}
			}

			if(prev_type == 3 || prev_type == -1) {
				prev_type = curr_type;
				if(curr_type == 1)
					ended_at = 0;
				else if(curr_type == 2)
					ended_at = 1;
				continue;
			}

			if(prev_type == 0 && curr_type == 1) {
				if(ended_at == -1) 
					ended_at = 0;
				else if( ended_at != 0)
					flag = 0;
			}
			else if(prev_type == 1 && curr_type == 0)
				ended_at = 1;
			else if(prev_type == 0 && curr_type == 2) {
				if(ended_at == -1)
					ended_at = 1;
				else if(ended_at != 1)
					flag = 0;
			}
			else if(prev_type == 2 && curr_type == 0)
				ended_at = 0;
			else if((prev_type == 1 && curr_type == 2) || (prev_type == 2 && curr_type == 1))
				flag = 0;
			else if(curr_type == 3 && (visited_hash!=total_hash)) 
				flag = 0;
			else if(prev_type == 0 && curr_type == 0) {
				if(ended_at == 0) 
					ended_at = 1;
				else if(ended_at == 1)
					ended_at = 0;
			}
			else if(prev_type == 1 && curr_type == 1)
				ended_at = 0;
			else if(prev_type == 2 && curr_type == 2)
				ended_at = 1;

			prev_type = curr_type;

		}

		if( prev_type == -1)
			flag = 0;

		if(flag)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}
	return 0;
}