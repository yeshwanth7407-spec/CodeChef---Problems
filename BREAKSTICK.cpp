/*
============================================================
CodeChef Problem : BREAKSTICK
Title            : Break the Stick
Rating           : 1026
Topics           : Math / Parity / Logic
Date Solved      : 2026-08-23

Problem Statement:
Chef has a stick of length N. He wants to obtain a stick of length X 
by performing a series of breaks. In a single break, Chef can take a 
stick of length L and break it into two sticks of lengths A and B (where A + B = L) 
such that A and B have the same parity (either both even or both odd).
Determine if it is possible to eventually obtain a stick of length X.

Approach:
- When breaking a stick of length L into two sticks of lengths A and B:
  - If A and B have the same parity:
    - If both are even: L = even + even = even.
    - If both are odd:  L = odd + odd = even.
  - Thus, an odd stick can NEVER be broken directly because breaking it 
    would require one even and one odd piece (different parities).
- Case Analysis:
  1. If N is even: We can always break N into two pieces of equal parity 
     (e.g., break into X and N - X if they share parity, or reduce down through 
     even parts). Hence, any length X is achievable.
  2. If N is odd: Since N cannot be broken into two pieces initially, the only 
     pieces we can obtain must leave the remaining piece (N - X) even.
     - (odd - odd) = even, which is allowed.
     - (odd - even) = odd, which violates the same-parity break rule.
     - Therefore, if N is odd, X MUST be odd (`x % 2 != 0`).
- Combined condition: It is possible if `(n % 2 == 0 || x % 2 != 0)`.

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
	    int n,x;
	    cin>>n>>x;
	    
	    (n%2==0 || x%2!=0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}

}
