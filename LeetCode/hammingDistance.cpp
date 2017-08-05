#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        int r = x^y;
        int cnt = 0;
        while(r) {
            r= r&(r-1);
            cnt++;
        }
        return cnt;
    }
};

int main() {
	// https://leetcode.com/problems/hamming-distance/tabs/description
	return 0;
}
