#include "bits/stdc++.h"
#define ll  long long int

using namespace std;

ll multiply(ll x , ll y , ll size){
	ll b = x%ten;
	ll c = y/ten;
	ll d = y%ten;
	cout<<"a="<<a<<"c="<<c<<"ten="<<ten<<"\n";
	ll ac = multiply(a,c,size/2); 
	ll bd = multiply(b,d,size/2); 
	ll adbc = multiply((a+b),(c+d),size/2);
	adbc = adbc - ac - bd; 
	cout<<"ac="<<ac<<"bd="<<bd<<"adbc"<<adbc<<"size="<<size<<"\n";

	ll result = pow(10,size)*ac + bd + pow(10,(size/2))*adbc ;
	return result;

}

int main(){

	ll m , n , s ;
	cin>>m>>n;

	s = multiply(m,n,2);
	cout<<s;
	return 0;
}