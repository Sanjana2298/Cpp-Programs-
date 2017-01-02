#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n , m ,i ,primes1[10000], primes2[1000000],oldP =2 , count=0 ,j;
    cin>>n>>m;


    for(i=2;i<n;i++){
        if(primes1[i]==0){
            for(j=(2*i);j<n;j+=i){
                primes1[j]=1;
            }
            for(j=(j-n);j<=(m-n);j+=i){
                primes2[j]=1;
            }
        }
    }


    for(i=n;i<=m;i++){
        if(primes2[i-n]==0){
            if((i-oldP==2)){
                count++;
            }
            for(j=((2*i)-n);j<=(m-n);j+=i){
                primes2[j]=1;
            }
            oldP=i;
        }
    }
    cout<<count;
    return 0;
}
