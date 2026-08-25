/*
============================================================
CodeChef Problem : MANCODE
Title            : Man of the Match / Man Code
Rating           : 1058
Topics           : Math / Greedy / Constructive
Date Solved      : 2026-08-26

Problem Statement:
There are N urinals in a row numbered 1 to N. Men want to use them 
while following social distancing rules:
1. No two occupied urinals can be adjacent to each other.
2. Determine both the maximum number of men that can use the urinals simultaneously,
   and the minimum number of men needed such that no new person can join without 
   violating the rule (maximum independent set vs minimum maximal independent set).

Approach:
- Maximum Capacity:
  - To maximize the number of people, place a person at every alternate urinal 
    (positions 1, 3, 5, ...).
  - Formula: ceil(N / 2.0) or (N + 1) / 2.
- Minimum Capacity (Blocking configuration):
  - To minimize the number of people while ensuring no additional urinal can be occupied, 
    place people such that no two empty urinals are adjacent (e.g., positions 2, 5, 8, ...).
  - Each person blocks up to 3 spots (themselves and the two adjacent spots).
  - Formula: ceil(N / 3.0) or (N + 2) / 3.
- Output: Print `max` followed by `min`.

Time Complexity  : O(1) per testcase
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
	    int min_val = ceil((double)n/3);
	    int max_val = ceil((double)n/2);
	    cout<<max_val<<" "<<min_val<<endl;
	}

}
