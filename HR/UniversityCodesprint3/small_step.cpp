#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli solve(string opr) {
    // Complete this function
    int l, i ;
    l = opr.length();

    char r = opr[0];

    lli first = 0, second = 0, cnt = 1;

    while(r!= '-' && r != '+') {
    	first = first*10 + (int(r)- 48);
    	r = opr[cnt++];
    }

    while(cnt < l) {
    	second = second*10 + (int(opr[cnt++]) - 48);
    }

    if(r == '-')
    	return first - second;
    return first+second;
     
}

int main() {
    string opr;
    cin >> opr;
    lli res = solve(opr);
    cout<<res<<endl;
    return 0;
}
