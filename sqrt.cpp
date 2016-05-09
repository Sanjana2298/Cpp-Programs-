#include <bits/stdc++.h>
const float eps = 0.0000001 ;

using namespace std;

float sqrt(float a ,float x){

   float y ;
   y=0.5*(x+(a/x));
   if(abs(x-y)<eps)
   	 return y;

   x=y;
   sqrt(a,x);
}

int main()
{
	/* code */
    float n ,x ,p;
    cout<<"\nEnter the number -";
    cin>>n;
    p=n;
    x=3;
    if(n==0){
        cout<<"Sqrt of 0 is 0";
        return 0 ;
    }
    if(n<0)
      p=abs(n);

    float r = sqrt(p,x);
    cout<<"\nSqrt of "<<n<<" is "<<r;
    if(n<0)
    	cout<<"i";
    cout<<"\n";
	return 0;

}