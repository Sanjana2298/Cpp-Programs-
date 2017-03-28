#include <bits/stdc++.h>

using namespace std;
void rec(int n) {
    if(n==1)
        cout<<"int";
    else {
        cout<<"min(int, ";
        rec(n-1);
        cout<<")";
    }
}
int main(){

    // https://www.hackerrank.com/contests/w30/challenges/find-the-minimum-number

    int n;
    cin >> n;
    rec(n);
    return 0;
}
