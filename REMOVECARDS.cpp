/*
============================================================
CodeChef Problem : REMOVECARDS
Title            : Card Removal
Rating           : 1039
Topics           : Hashing / Arrays / Greedy / Frequency Map
Date Solved      : 2026-08-26

Problem Statement:
You are given N cards, each with a number written on it. You want to make 
all the cards have the same number by removing the minimum number of cards. 
Find the minimum number of cards that need to be removed.

Approach:
- To minimize removals, keep the cards with the most frequently occurring value (mode) 
  and remove all other cards.
- Count the frequency of each number using a hash map (`unordered_map<int, int>`).
- Find the maximum frequency (`max_common`) among all distinct values in the map.
- The minimum number of cards to remove is given by `n - max_common`.

Time Complexity  : O(N) average time per test case
Space Complexity : O(N) auxiliary space for the frequency map
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
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        m[x] += 1;
	    }
	    
	    int max_common = 0;
	    for(auto e : m){
	        if(e.second > max_common){
	            max_common = e.second;
	        }
	    }
	    cout<<n-max_common<<endl;
	}

}
