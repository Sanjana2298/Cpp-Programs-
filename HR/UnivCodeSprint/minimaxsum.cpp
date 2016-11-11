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
    vector<long long int> num(5) ;
    long long int sum = 0;
    for(int i=0; i<5;i++){
        cin>>num[i];
        sum+=num[i];
    }

    sort(num.begin(), num.end());
    cout<<sum-num[0]<<" "<<sum-num[4];
    return 0;
}