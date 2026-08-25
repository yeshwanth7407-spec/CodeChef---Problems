/*
============================================================
CodeChef Problem : ADD12GAME
Title            : Add 1 or 2 Game
Rating           : 1052
Topics           : Game Theory / Math
Date Solved      : 2026-08-26

Problem Statement:
Alice and Bob play a turn-based game starting from total = 0. 
In each turn, a player can add either 1 or 2 to the total. 
The first player who causes the total to reach or exceed N wins the game. 
Alice always moves first. Determine who wins assuming both play optimally.

Approach:
- For N = 1: Alice can add 1 on the very first turn to reach total = 1 and win immediately. 
  Hence, Alice wins when N = 1.
- For N > 1: Bob has a winning strategy because for any choice Alice makes (1 or 2), 
  Bob can counter-balance the sum to control the game pace and force a win.
- Therefore:
  - If N == 1: ALICE wins.
  - If N > 1: BOB wins.

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
	    int n;
	    cin>>n;
	    cout<<((n!=1)?"BOB":"ALICE")<<endl;
	}

}
