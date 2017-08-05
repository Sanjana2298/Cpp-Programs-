#include <bits/stdc++.h>
#include <algorithm> // for std::find
#include <iterator> 
using namespace std;

int p[] = {1,43};

bool fun(int a, int b) {
	return ((find(begin(p), end(p), a) != end(p) && (a>b)) || (a<b));
}

int main() {
	int a[] = {1,4,2,43,13, 18, 17};
	vector<int> v(a,a+7);
	sort(v.begin(), v.end(), fun);

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout<<*it<<" ";
	cout<<"\n";
	return 0;
}