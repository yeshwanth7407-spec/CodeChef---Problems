/*
============================================================
CodeChef Problem : JOINSTATE
Title            : Join States
Rating           : 1043
Topics           : Greedy / Arrays / Prefix Sums
Date Solved      : 2026-08-27

Problem Statement:
There are N contiguous states, where the i-th state has an initial 
population of A[i]. A new country is forming by merging contiguous states. 
A newly formed joined state is valid if and only if its total population 
is at least M. Find the maximum number of valid states that can be formed.

Approach:
- To maximize the number of valid states formed, greedily close a state 
  as soon as its aggregated population meets or exceeds M.
- Maintain a running sum `sum` of the current state's population.
- Iterate through each state's population `x` from left to right:
  - Add `x` to `sum`.
  - If `sum >= m`:
    - A valid state is formed -> Increment `ans`.
    - Reset `sum = 0` to start accumulating for the next state.
- After iterating through all elements, any leftover elements in `sum < m` 
  cannot form a new independent state and are merged with the previous state 
  without changing the count `ans`.

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
        int n, m;
        cin >> n >> m;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            sum += x;

            if (sum >= m) {
                ans++;
                sum = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}