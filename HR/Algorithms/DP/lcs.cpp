#include <bits/stdc++.h>
using namespace std;

void lcs(int a[], int b[], int m, int n) {
    int l[101][101] = {0};
    int i, j;
    
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++) {
            if(a[i-1] == b[j-1])
                l[i][j] = l[i-1][j-1] + 1;
            else
                l[i][j] = max(l[i][j-1], l[i-1][j]);
        }
    
    int ind = l[m][n]; int id = ind; int res[101];
    i=m; j=n;
    ind--;
    
    while(i>0 && j>0) {
        if(a[i-1] == b[j-1]) {
            res[ind--] = a[i-1];
            i--; j--;
        }
        else if(l[i-1][j] > l[i][j-1])
            i--;
        else
            j--;
    }
    
    for(i=0; i<id; i++)
        cout<<res[i]<<" ";
    cout<<"\n";
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    // https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence
    int a[100], b[100],i, m,n;
    cin>>m>>n;
    for(i =0; i<m; i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    
    lcs(a,b,m,n);
    return 0;
}
