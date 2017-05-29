#include <bits/stdc++.h>
using namespace std;

long long int getMid(long long int s, long long int e) {  
	return s + (e -s)/2;  
}

long long int getSumUtil(long long int *st, long long int ss, long long int se, long long int qs, long long int qe, long long int si) {
    if (qs <= ss && qe >= se)
        return st[si];
 
    if (se < qs || ss > qe)
        return 0;
 
    long long int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
 
long long int getSum(long long int *st, long long int n, long long int qs, long long int qe) {
    if (qs < 0 || qe > n-1 || qs > qe) 
        return 0;
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
 
long long int constructSTUtil(long long int arr[], long long int ss, long long int se, long long int *st, long long int si) {
    if (ss == se) {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    long long int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

long long int *constructST(long long int arr[], long long int n) {
    long long int x = (long long int)(ceil(log2(n))); 
    long long int max_size = 2*(long long int)pow(2, x) - 1; 
    long long int *st = new long long int[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
 
int main() {

	// https://www.codechef.com/SNCKPA17/problems/SNTEMPLE
	int t;
	long long int n,i, total = 0,arr[100000], k,min,left_sum, right_sum, mid_sum, d,l, f_err;
	cin>>t;

	while(t--) {
		cin>>n;
		min = -1; left_sum = right_sum = 0;
		for(i=0;i<n;i++) {
			cin>>arr[i];
			total += arr[i];
		}

    	long long int *st = constructST(arr, n);

    	for(k=3; k<=n; k+=2) {
    		for(i=0;(i+k)<= n;i++) {

    			left_sum = getSum(st,n,0,i-1);
    			right_sum = getSum(st,n,i+k,n-1);
    			f_err = 0; mid_sum = 0;
    			d = 1;
    			for(l=i; l<=((2*i)+k-1)/2 && f_err!= 1;l++,d++) {
    				if(arr[l] < d) {
    					f_err = 1;
    					break;
    				}
    				mid_sum += (arr[l] - d);
    			}
    			for(d = (k/2); l<(i+k) && f_err!= 1; l++,d--) {
    				if(arr[l] < d) {
    					f_err = 1;
    					break;
    				}
    				mid_sum += (arr[l] - d);
    			}
    			if(f_err)
    				continue;

    			left_sum = left_sum + right_sum + mid_sum;
    			if(min == -1)
    				min = left_sum;
    			else if((left_sum < min)) {
    				min = left_sum;

    			}
    		}
    	}
    		cout<<min<<"\n";
	}
    return 0;
}