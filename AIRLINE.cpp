/*
============================================================
CodeChef Problem : AIRLINE
Title            : Airline Restrictions
Rating           : 1042
Topics           : Basic Programming / Conditionals / Brute Force
Date Solved      : 2026-08-27

Problem Statement:
Chef has 3 bags weighing A, B, and C kgs respectively. 
The airline rules specify:
1. Chef must check in exactly 2 bags, and their total weight must not exceed D.
2. Chef can carry the remaining 1 bag as carry-on luggage, and its weight must not exceed E.
Determine if Chef can take all 3 bags on the plane.

Approach:
- Chef has 3 bags (A, B, C) and must choose a pair to check in and the remaining one as carry-on.
- There are exactly 3 possible combinations to check:
  1. Check-in bags (A, B) with carry-on (C): Valid if `(A + B <= D && C <= E)`.
  2. Check-in bags (B, C) with carry-on (A): Valid if `(B + C <= D && A <= E)`.
  3. Check-in bags (A, C) with carry-on (B): Valid if `(A + C <= D && B <= E)`.
- If any of these three conditions evaluate to true, print "YES".
- Otherwise, print "NO".

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
	    int A,B,C,D,E;
	    cin>>A>>B>>C>>D>>E;
	    if((A+B <= D && C <= E) || (B+C <= D && A <= E) || (A+C <= D && B <= E)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
    return 0;
}
