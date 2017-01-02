#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n , i , j;
    int k;
    int edge , transmitterAt , transmitterCount=0;
    cin >> n >> k; 
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }

    sort(x.begin(),x.end());
    edge=0;

    for(i=1 ; i<n ; i++){
        if(x[i]-x[edge]<=k){
            transmitterAt = i;
            continue;
        }
        transmitterCount++;
        for(j=transmitterAt+1 ; j<n ; j++){
            if(x[j] - x[transmitterAt] >k){
                edge = j;
                i = j;
                if(j==n-1)
                    transmitterCount++;
                break;
            }
        }
    }
    if(edge==0)
        transmitterCount++;
    if(transmitterAt == n-1)
        transmitterCount++;

    cout<<transmitterCount;
    return 0;
}
