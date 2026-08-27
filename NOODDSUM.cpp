/*
============================================================
CodeChef Problem : NOODDSUM
Title            : No Odd Sum
Rating           : 1041
Topics           : Math / Greedy / Prefix Sums / Parity
Date Solved      : 2026-08-27

Problem Statement:
You are given an array A of N elements consisting solely of 1s and 2s. 
You can perform operations to change elements so that every prefix sum 
of the rearranged array avoids being odd (or satisfy the condition that 
no prefix sum is odd). Find the minimum number of operations required.

Approach:
- Count the occurrences of 1s (`ones`) and 2s (`twos`) in the array on the fly.
- To eliminate odd prefix sums / odd parity configurations:
  - Option 1: Turn all 2s into 1s or pair them up to maintain parity.
  - Option 2: Group 1s into pairs (cost of changing pairs of 1s is `ones / 2`).
- Case Analysis:
  - If the count of 1s is even (`ones % 2 == 0`):
    - We can either eliminate all 2s (cost = `twos`) or merge/flip the 1s into 2s (cost = `ones / 2`).
    - The minimum cost is `min(twos, ones / 2)`.
  - If the count of 1s is odd (`ones % 2 != 0`):
    - An odd count of 1s cannot be fully paired into even sums without altering the remaining elements.
    - Thus, converting all 2s requires `twos` operations.
- Output the resulting minimal operation count.

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ones = 0, twos = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 1)
                ones++;
            else
                twos++;
        }

        if (ones % 2 == 0) {
            cout << min(twos, ones / 2) << endl;
        } else {
            cout << twos << endl;
        }
    }

    return 0;
}