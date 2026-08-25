/*
============================================================
CodeChef Problem : SLOWSTART
Title            : Slow Start
Rating           : 1055
Topics           : Math / Basic Programming / Conditionals
Date Solved      : 2026-08-26

Problem Statement:
Chef is fighting a monster with H health points. In each turn, Chef attacks:
- For the first 5 turns (Slow Start), each attack deals floor(X / 2) damage.
- From turn 6 onwards, each attack deals the full damage of X.
Determine the minimum number of turns required to reduce the monster's 
health to 0 or below.

Approach:
- Calculate the maximum damage Chef can deal during the slow start phase:
  Max slow damage = (X / 2) * 5.
- Case 1: If H <= (X / 2) * 5:
  - The monster will be defeated within the first 5 turns.
  - Number of turns required = ceil(H / (X / 2)).
- Case 2: If H > (X / 2) * 5:
  - Chef uses all 5 slow turns, dealing (X / 2) * 5 damage.
  - Remaining health = H - (X / 2) * 5.
  - Number of full-power turns needed = ceil(Remaining health / X).
  - Total turns = 5 + ceil(Remaining health / X).

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
	    int x,h;
	    cin>>x>>h;
	    int turns = 5;
	    if(h<=(x/2)*5){
	        cout<<ceil((double)h / (x / 2))<<endl;
	    }else{
	        turns += ceil((double)(h-(x/2)*5) / x);
	        cout<<turns<<endl;
	    }
	    
	}

}
