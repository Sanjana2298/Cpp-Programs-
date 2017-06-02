#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, len, i;
	char arr[100], prev;
	cin>>t;
	while(t--) {
		int sc = 0, mc = 0;
		cin>>arr;
		len = strlen(arr) - 1;
		for(i=0; i<=len;i++) {
			if(arr[i] == 's')
				sc++;
			else
				mc++;
		}
		prev = '*';
		for(i=0; i<=len; i++) {
			// cout<<"\nprev = "<<prev<<" curr = "<<arr[i]<<" next = "<<arr[i+1]<<"\n";
			if(arr[i] == 'm') {
				if(prev == 's') {
					arr[i-1] = '*';
					sc--;
				}
				else if(arr[i+1] == 's') {
					arr[i+1] = '*';
					sc--;
				}

			}
			// cout<<"\nprev = "<<arr[i-1]<<" curr = "<<arr[i]<<" next = "<<arr[i+1]<<"\n.\n.\n";
			prev = arr[i];
		}
		if(mc>sc)
			cout<<"mongooses\n";
		else if(mc == sc)
			cout<<"tie\n";
		else
			cout<<"snakes\n";
	}

	return 0;
}