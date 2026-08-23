/*
============================================================
CodeChef Problem : MUFFINS3
Title            : Packaging Cupcakes
Rating           : 1030
Topics           : Math / Basic Programming / Greedy
Date Solved      : 2026-08-23

Problem Statement:
Chef has N cupcakes that he wants to package into identical packages of size A (where 1 <= A <= N). 
Any remaining cupcakes that cannot fill a complete package of size A are leftover cupcakes that Chef 
gets to eat (N % A). Chef wants to choose package size A such that the number of remaining cupcakes 
(N % A) is maximized. If there are multiple such sizes, choose the largest possible package size A.

Approach:
- For a chosen package size A, the remainder of division is N % A, which can at most be A - 1.
- To maximize the remainder:
  - If we choose A > N / 2, specifically A = floor(N / 2) + 1, Chef can make exactly 1 package of size A.
  - The leftover cupcakes will be N - (floor(N / 2) + 1) = floor((N - 1) / 2) or ceil(N / 2) - 1, 
    which is the maximum possible remainder attainable.
  - Any smaller package size yields fewer leftover cupcakes because the maximum remainder is bounded by A - 1.
- Thus, the optimal package size is directly given by the formula: (N / 2) + 1.

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
	    int n;
	    cin>>n;
	    cout<<(n/2)+1<<endl;
	}

}
