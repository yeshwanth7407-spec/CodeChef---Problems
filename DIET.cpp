/*
============================================================
CodeChef Problem : DIET
Title            : Chef Diet
Rating           : 1025
Topics           : Simulation / Arrays / Greedy / Stream Processing
Date Solved      : 2026-08-23

Problem Statement:
Chef decides to go on a diet for N days. On each day i, he buys A[i] grams 
of protein and needs to consume exactly K grams of protein. If he has excess 
protein on any day, he stores the remaining protein for future days. 
Determine whether Chef can successfully consume K grams of protein on all N days, 
or output the first day on which he cannot meet the requirement.

Approach:
- Process the protein intake for all N days on the fly without allocating an array.
- Maintain:
  - `stored`: Running total of excess protein carried over to subsequent days.
  - `failed_day`: Flag tracking the 1-based index of the first day Chef runs short (initialized to -1).
- Loop through days 1 to N:
  - Read daily protein intake `a`.
  - If a shortage has not yet been recorded (`failed_day == -1`):
    - Check if total available protein `a + stored < k`.
    - If insufficient, record `failed_day = i`.
    - Otherwise, consume `k` grams and add surplus `(a - k)` to `stored`.
  - Continue looping through all remaining inputs to maintain standard input stream alignment.
- Output:
  - If `failed_day == -1`, print "YES".
  - Otherwise, print "NO <failed_day>".

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int stored = 0;
        int failed_day = -1;

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (failed_day == -1) {
                if (a + stored < k) {
                    failed_day = i;
                } else {
                    stored += (a - k);
                }
            }

        }

        if (failed_day == -1) {
            cout << "YES\n";
        } else {
            cout << "NO " << failed_day << "\n";
        }
    }

}