/*
============================================================
CodeChef Problem : CNDY
Title            : Candies
Rating           : 1018
Topics           : Arrays / Hash Maps / Counting
Date Solved      : 2026-08-23

Problem Statement:
Abhi has 2*N candies of various types (identified by integers). 
He wants to distribute all 2*N candies equally between two cities 
such that no city receives more than 2 candies of the same type.
Determine if such a distribution is possible.

Approach:
- Count the frequency of each candy type using a hash map [unordered_map].
- Since each city can receive at most 2 candies of a given type, the total 
  number of candies of any single type across both cities cannot exceed 2 + 2 = 4.
- If any candy type appears strictly more than 2 times in one city's perspective 
  (meaning frequency > 2 for a single recipient, or frequency >= 3 overall without 
  violating the 2-per-city limit), check if any frequency >= 3. 
- If count of any element >= 3, answer is "No", otherwise "Yes".

Time Complexity  : O(N) per test case
Space Complexity : O(N) for frequency map
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
	    unordered_map<int,int> count;
	    for(int i=0;i<2*n;i++){
	        int x;
	        cin>>x;
	        count[x] += 1;
	    }
	    
	    bool check = true;
	    
	    for(auto x : count){
	        if(x.second>=3){
	           check = false;
	           break;
	        }
	    }
	   
	    (check)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}

}
