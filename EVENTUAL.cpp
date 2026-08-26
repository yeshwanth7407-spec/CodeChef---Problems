/*
============================================================
CodeChef Problem : EVENTUAL
Title            : Even-tual Reduction
Rating           : 1040
Topics           : Strings / Hashing / Frequency Map / Parity
Date Solved      : 2026-08-27

Problem Statement:
Given a string S of length N consisting of lowercase English letters,
determine if it is possible to erase the entire string by repeatedly 
choosing two identical characters and removing them.

Approach:
- An erasure operation requires pairs of identical characters.
- For the entire string to be completely reducible to an empty string:
  1. The total string length N must be even (odd-length strings always leave at least one unmatched character).
  2. Every distinct character present in string S must appear an even number of times (frequency % 2 == 0).
- Count the frequency of each character in S.
- Check if all character frequencies are even:
  - If any character has an odd frequency, output "NO".
  - If all characters have even frequencies, output "YES".

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space (fixed lowercase alphabet size 26)
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s; 
        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else {
            unordered_map<char, int> m;
            bool b = true;
            
            for (char c : s) {
                m[c] += 1;
            }
            
            for (auto l : m) {
                if (l.second % 2 != 0) {
                    b = false;
                    break;
                }
            }
            
            (b == true) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
    return 0;
}