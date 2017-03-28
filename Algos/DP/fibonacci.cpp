#include <bits/stdc++.h>
using namespace std;

int fib(int n, int mem[]) {
	cout<<"c";
	if(mem[n-1])
		return mem[n-1];
	mem[n-1] = fib(n-2,mem) + fib(n-1,mem);
	return mem[n-1];
}

int main() {

	int n,mem[10];
	cin>>n;
	mem[0] = mem[1] = 1;

	int  r= fib(n,mem);
	cout<<r<<"\n";
	return 0;
}