/*
============================================================
CodeChef Problem : ADJSUMPAR
Title            : Adjacent Sum Parity
Rating           : 1004
Topics           : Arrays / Bit Manipulation / Logic
Date Solved      : 2026-08-23

Problem Statement:
Chef has an array A of length N with binary elements (0 or 1). 
He constructs an array B of length N where:
B[i] = (A[i] + A[i+1]) % 2 for 1 <= i < N, and
B[N] = (A[N] + A[1]) % 2.
Given the array B, determine whether there exists any valid binary array A.

Approach:
Here again if every Element has even number of count then there exists an array
if not then there exists no Array that satisfies the condition.
we can simply use xor operation .[total number of 1's are even]

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int b[n],ans=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        ans ^= b[i];
	    }
	    (ans==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}

}
