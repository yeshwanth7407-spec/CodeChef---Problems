/*
============================================================
CodeChef Problem : APPLESORANGES / APPLORNG
Title            : Apples and Oranges
Rating           : 1040
Topics           : Number Theory / Math / Euclidean Algorithm
Date Solved      : 2026-08-27

Problem Statement:
Chef has N apples and M oranges. He wants to distribute them among 
a maximum number of people such that every person receives an equal 
number of apples and an equal number of oranges, and no fruits are left over. 
Find the maximum number of people Chef can distribute the fruits to.

Approach:
- Let K be the number of people.
- For equal distribution with zero leftovers:
  - K must be a divisor of N (N % K == 0).
  - K must be a divisor of M (M % K == 0).
- To maximize the number of people K, K must be the Greatest Common 
  Divisor (GCD) of N and M.
- Directly compute and output gcd(N, M) using the Euclidean algorithm (or `std::gcd`).

Time Complexity  : O(log(min(N, M))) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<__gcd(n,m)<<endl;
	}
    return 0;
}
