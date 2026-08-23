/*
============================================================
CodeChef Problem : WOLFDOWN
Title            : Wolf Down
Rating           : 1025
Topics           : Strings / Basic Implementation / Greedy
Date Solved      : 2026-08-23

Problem Statement:
Given a binary string S of length N representing events or obstacles across N seconds, 
determine how many consecutive initial safe seconds/actions occur before the first 
danger event (marked by '1') appears.

Approach:
- Traverse the binary string S from the start (index 0) to index N - 1.
- For every character:
  - If the character is '0', increment the counter.
  - As soon as the first '1' is encountered, immediately terminate the loop using break.
- Print the total count of leading '0's.

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
	    string s;
	    cin>>s;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                break;
            }else{
                count++;
            }
        }
        cout<<count<<endl;
	    
	}

}
