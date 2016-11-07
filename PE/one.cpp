#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    long long int n ,t ,sum ,p ,j;
    cin>>t;
    for(j=0;j<t;j++){
       sum=0;
       cin>>n;
       n--;
       p = (n-(n%3))/3 ;
        sum+=((3*p*(p+1))/2); 
       p =(n-(n%5))/5;
        sum+=((5*p*(p+1))/2);   
       p=(n-(n%15))/15;
        sum-=((15*p*(p+1))/2);
    cout<<sum<<"\n" ; 
    }
    return 0;
}