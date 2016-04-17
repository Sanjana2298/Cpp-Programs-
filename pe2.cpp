//To find the sum of even Fibonacci numbers not exceeding n
//Project Euler - 2
#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

int main(){
   ll sum , next_even , s , f , n ;
   char c;

   do {
   	cout<<"\nn ? ";
   	cin>>n;
   	sum =0 ;
   	s=2 ; f =1;
   	while(s<=n){
   		sum+=s ;
   		next_even = (2*f) + (3*s);
   		f = f + (2*s) ;
   		s = next_even ;
   	}

   	cout<<"\nSum = "<<sum ;
   	cout<<"\nCheck another ? (y to continue) ";
   	cin>>c;
   }while(c=='y'||c=='Y');

   return 0 ;
}