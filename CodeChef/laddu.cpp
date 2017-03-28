#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	int t, laddu, activities, indian,len;

	char ch[20];
	cin>>t;

	while(t--) {
		laddu = 0;
		indian = 0;
		cin>>activities;
		cin>>ch;
		if(strcmp(ch,"NON_INDIAN")) 
			indian = 1;

		for(int i=0; i<activities; i++) {
			cin>>ch;
			len = strlen(ch);

			switch(len) {
				case 9: {
					cin>>len;
					laddu+=len;
					break;
				}
				case 11: {
					cin>>len;  // rank
					laddu+=300;
					if(len<=20)
						laddu+=(20-len);
					break;
				}
				case 14: {
					laddu+=50;
					break;
				}
				case 15: {
					laddu+=300;
					break;
				}

			}
		}

		if(indian) {
			cout<<(laddu/200)<<"\n";
		}
		else {
			cout<<(laddu/400)<<"\n";
		}
	}
	return 0;
}