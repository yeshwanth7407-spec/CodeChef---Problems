/*
============================================================
CodeChef Problem : ASM120
Title            : Chef and Stones / Stone Game
Rating           : 1020
Topics           : Math / Number Theory / Euclidean Algorithm / GCD
Date Solved      : 2026-08-23

Problem Statement:
Two players play a game with two piles of stones containing A and B stones. 
In each move, a player can remove a multiple of stones from the larger pile 
equal to the size of the smaller pile (similar to the Euclidean division step: 
A = A - k * B). The game continues until no further moves can be made. 
Determine the final remaining number of stones or the winner.

Approach:
- The game reduces down through repeated subtraction/modulo operations, 
  which is essentially the Euclidean Algorithm for finding the Greatest Common 
  Divisor (GCD).
- The final non-zero remainder when reducing two numbers A and B by each other's 
  multiples is simply std::__gcd(A, B).

Time Complexity  : O(log(min(A, B))) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<__gcd(x,y)<<endl;
	}

}
