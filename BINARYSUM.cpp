/*
============================================================
CodeChef Problem : BINARYSUM
Title            : Binary Sum
Rating           : 1015
Topics           : Math / Logic / Constructive
Date Solved      : 2026-08-23

Problem Statement:
Chef is given two integers N and K. He wants to find whether 
there exists a binary array A of length N such that the sum of 
all elements in A equals K, or if it is possible to achieve 
a certain binary sum condition.

Approach:
Analyze the parity and range of constraints:
- In any binary array of length N consisting of only 0s and 1s, 
  the maximum possible sum is N (all 1s) and the minimum sum is 0 (all 0s).
- Verify if K is within the reachable range [ceil(N/2), N] depending on 
  the specific partition constraints, and check valid constructive bounds.

Time Complexity  : O(1) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(n%2==0){
	        (n/2==k)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	    }else{
	        ((n/2)+1 == k || n/2 == k)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	    }
	}

}
