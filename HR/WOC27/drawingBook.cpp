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
    long long int n ;
    float  front , back;
    cin >> n;
    float p;
    cin >> p;
    
    front = ceil((p-1)/2);

    back = ceil((n-p)/2);
    if((n%2)&&(back!=0))
        back--;
    
    cout<<min(front,back)<<"\n";
    
    return 0;
}
