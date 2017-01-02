#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  long long int t,sum,  flag , i,r;  
  vector<long long int> a(4);
  cin >> t;
  while(t--){

    for(i=0;i<4;i++){
      cin>>a[i];
    }
      flag =0;
      for(r=0;r<4;r++){
        //fill(v.begin(), v.begin() + r, true);      
        do {
          sum=0;
          for (i = 0; i < 4; ++i) {
              if (i<=r) {
                sum+=a[i];
                //cout<<a[i]<<" ";
              }
          }
          //cout<<"\n";
          if(sum==0){
            flag=1;
            break;
          }
        } while (prev_permutation(a.begin(), a.end()));

        if(flag==1){
          cout<<"Yes\n";
          break;
        }
      }

      if(flag==0){
        cout<<"No\n";
      }

  }
   return 0;
}