#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int


int main() {
    // https://www.codechef.com/problems/XORNUBER/
    ulli n, i;
    int t;
    cin>>t;


    while(t--) {
        cin>>n;
        int flag = 0; 
        for(i=1; i<n; i++) {
            if(i^(i+1) == n) {
                cout<<i<<"\n";
                flag = 1;
                break;
            }
        }

        if(!flag)
            cout<<"-1\n";
    }

    return 0;
}
