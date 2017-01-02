#include "iostream"
#include "cmath"

using namespace std;

int main(){
	long long int n , m  ,flags = 0 , a; 
	//float a ;
	cin>>n>>m>>a;

	/*flags+= (n%a == 0) ? n/a : n/a +1 ;
	flags+= (m%a == 0) ? m/a : m/a +1 ; */

	if(n%a==0){
		flags+=n/a;
	}
	else{
		flags+=n/a;
		flags++;
	}

	if(m%a==0){
		flags+=m/a;
	}
	else{
		flags+=n/a;
		flags++;
	}

	cout<<flags;
	return 0;
}