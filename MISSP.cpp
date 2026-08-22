/*
============================================================
CodeChef Problem : MISSP
Title            : Chef and Dolls
Rating           : 1012
Topics           : Bitwise XOR / Hash Maps / Arrays
Date Solved      : 2026-08-22

Problem Statement:
Chef has a collection of dolls where each doll has a type. 
Every type of doll comes in a pair, but one doll's pair is 
missing. Find the type of the missing doll.

Approach:
Using bitwise XOR (^) on all elements since A ^ A = 0 
and A ^ 0 = A, leaving only the unpaired number.

Time Complexity  : O(N)
Space Complexity : O(1)
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans ^= x; // xor of all the elements without storing them .
        }
        cout<<ans<<endl;
    }
    
    return 0;
}