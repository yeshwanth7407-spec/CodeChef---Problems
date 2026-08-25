/*
============================================================
CodeChef Problem : ELECTIONS
Title            : Elections in Chefland
Rating           : 1060
Topics           : Basic Programming / Conditionals
Date Solved      : 2026-08-26

Problem Statement:
Election results are out in Chefland with three political parties: A, B, and C.
The total number of votes cast is 101. A party wins if and only if it receives
strictly more than 50 votes (i.e., at least 51 votes). Given the votes received 
by parties A, B, and C as X, Y, and Z respectively, determine the winning party,
or output "NOTA" if no party won a strict majority.

Approach:
- Since the total votes equal 101, at most one party can obtain strictly more 
  than 50 votes (> 50).
- Check the conditions sequentially:
  - If X > 50: Party A wins -> Output "A".
  - Else if Y > 50: Party B wins -> Output "B".
  - Else if Z > 50: Party C wins -> Output "C".
  - Else: No party has a strict majority -> Output "NOTA".

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
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>50){
	        cout<<"A"<<endl;
	    }else if(y>50){
	        cout<<"B"<<endl;
	    }else if(z>50){
	        cout<<"C"<<endl;
	    }else{
	        cout<<"NOTA"<<endl;
	    }
	}

}
