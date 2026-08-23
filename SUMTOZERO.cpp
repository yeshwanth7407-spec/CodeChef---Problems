/*
============================================================
CodeChef Problem : SUMTOZERO (or SUMZERO)
Title            : Sum to Zero
Rating           : 1023
Topics           : Constructive / Math / Arrays
Date Solved      : 2026-08-23

Problem Statement:
Given an integer N, construct an array of N non-zero distinct integers 
such that the sum of all elements in the array is equal to 0. 
If no such array exists, output -1.

Approach:
- For N = 1: It is impossible to have a non-zero single element sum to 0, so output -1.
- For even N: Construct symmetric canceling pairs of integers (1, -1), (2, -2), ..., (k, -k). 
  Using repeated (1, -1) pairs directly sums to 0.
- For odd N (N >= 3): 
  - Fill the first (N - 3) elements with (n - 3) / 2 pairs of (1, -1), which sum to 0.
  - Complete the last 3 elements with a triplet whose sum is 0, such as [-2, -1, 3] 
    since (-2) + (-1) + 3 = 0.

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
        int n;
        cin >> n;
        if (n == 1) {
            cout << -1 << "\n";
        } else if (n % 2 == 0) {
            for (int i = 1; i <= n / 2; i++) {
                cout << 1 << " " << -1 << " ";
            }
            cout << "\n";
        } else {
            for (int i = 1; i <= (n - 3) / 2; i++) {
                cout << 1 << " " << -1 << " ";
            }
            cout << -2 << " " << -1 << " " << 3 << "\n";
        }
    }

    return 0;
}