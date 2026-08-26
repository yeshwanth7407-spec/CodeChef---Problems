/*
============================================================
CodeChef Problem : CHEFSQ / CHEFSTR1 / CHEFSTLT
Title            : Chef and Two Strings
Rating           : 1036
Topics           : Strings / Implementation / Greedy
Date Solved      : 2026-08-26

Problem Statement:
Chef found two strings S1 and S2 of equal length consisting of lowercase 
English letters and question marks '?'. A '?' represents an erased character 
that could have been any lowercase letter. Find the minimum and maximum 
possible difference (number of mismatched character positions) between the two strings.

Approach:
- Initialize `min_difference = 0` and `max_difference = 0`.
- Iterate through both strings character by character from index 0 to length - 1:
  - Check if either character is '?':
    - Handled via `!('a' <= s1[i] && s1[i] <= 'z') || !('a' <= s2[i] && s2[i] <= 'z')`
      or directly `(s1[i] == '?' || s2[i] == '?')`.
    - Best-case scenario (for min difference): We can choose matching characters, 
      so `min_difference` does not increase.
    - Worst-case scenario (for max difference): We can choose differing characters, 
      so `max_difference += 1`.
  - Else (both characters are known lowercase letters):
    - If `s1[i] != s2[i]`: They are guaranteed to differ in both best and worst cases.
      Increment both `min_difference += 1` and `max_difference += 1`.
- Output `min_difference` and `max_difference`.

Time Complexity  : O(N) per test case, where N is string length
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1;
	    cin>>s2; 
	    int min_difference = 0,max_difference = 0;
	    for(int i=0;i<s1.length();i++){
	        if(s1[i] == '?' || s2[i] == '?'){
	            max_difference++ ;
	        }else{
	            if(s1[i] != s2[i]){
	                min_difference++ ;
	                max_difference++ ;
	            }
	        }
	    }
	    
	    cout<<min_difference<<" "<<max_difference<<endl;
	}

}
