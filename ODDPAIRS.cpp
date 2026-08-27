/*
============================================================
CodeChef Problem : ODDFIRS / ODDPAIRS
Title            : Odd Pairs
Rating           : 1044
Topics           : Math / Combinatorics / Parity
Date Solved      : 2026-08-27

Problem Statement:
Given an integer N, count the number of ordered pairs (A, B) such that:
1. 1 <= A, B <= N
2. A + B is odd.

Approach:
- The sum of two integers (A + B) is odd if and only if one number is even 
  and the other is odd (Parity: Even + Odd = Odd, Odd + Even = Odd).
- In the range [1, N]:
  - Count of even numbers = N / 2.
  - Count of odd numbers  = N - (N / 2) = (N + 1) / 2.
- Number of valid ordered pairs:
  - (Odd, Even): (count of odd numbers) * (count of even numbers)
  - (Even, Odd): (count of even numbers) * (count of odd numbers)
  - Total valid pairs = 2 * odd_count * even_count.
- Note: Use 64-bit integers (`long long`) to prevent overflow since N can be large.

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
	    long long  n;
	    cin>>n;
	    long long even_numbers = n/2;
	    
	    cout<<((n-even_numbers)*even_numbers)*2<<endl;
	    
	}

}
