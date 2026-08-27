/*
============================================================
CodeChef Problem : ZEROSTRING
Title            : Zero String
Rating           : 1042
Topics           : Strings / Greedy / Math
Date Solved      : 2026-08-27

Problem Statement:
You are given a binary string S of length N. In one operation, you can:
1. Delete any single character from S.
2. Invert all characters in S (replace all '0's with '1's and all '1's with '0's).
Find the minimum number of operations required to make all characters in S equal to '0'.

Approach:
- Count the total number of '0's (`zero_count`) and '1's (`one_count = N - zero_count`).
- We have two strategies to make all characters '0':
  1. Option 1 (Direct Deletion): Delete all '1's directly.
     - Cost = `one_count`.
  2. Option 2 (Flip and Delete): Invert the whole string (1 operation), which turns all '0's into '1's 
     and all '1's into '0's. Then delete the remaining '1's (which were the original '0's).
     - Cost = `1 + zero_count`.
- Optimal Choice:
  - If `zero_count < one_count`, Option 2 is cheaper -> Output `zero_count + 1`.
  - Else, Option 1 is cheaper or equal -> Output `one_count`.

Time Complexity  : O(N) per testcase
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
	    string s;
	    cin>>s;
	    int zero_count=0;
	    int one_count = 0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            zero_count++;
	        }
	    }
	    one_count = n-zero_count;
	    if(zero_count < one_count){
	        cout<<(zero_count+1)<<endl;
	    }else{
	        cout<<one_count<<endl;
	    }
	}
    return 0;
}
