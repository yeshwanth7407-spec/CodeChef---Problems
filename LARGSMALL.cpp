/*
============================================================
CodeChef Problem : LARGESMALL / LARGERSMALLER
Title            : Larger Smaller
Rating           : 1035
Topics           : Arrays / Math / Implementation
Date Solved      : 2026-08-26

Problem Statement:
Given an array A of N integers, find the number of strictly 
intermediate integer values between the minimum and maximum elements 
of the array, or output 0 if no such strictly intermediate values can exist.

Approach:
- Find the global minimum (`min`) and maximum (`max`) values in the array:
  - Iterate through the array once while keeping track of both bounds.
- Calculate the difference: `x = max - min`.
- Condition:
  - If `x <= 1` (i.e., all elements are identical or differ by at most 1), 
    there are no intermediate integers between them -> Output `0`.
  - If `x > 1`, the count of strictly intermediate integers strictly between 
    `min` and `max` is `(max - min) - 1` -> Output `x - 1`.

Time Complexity  : O(N) per testcase
Space Complexity : O(N) auxiliary space (can be reduced to O(1) by finding min/max on the fly)
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
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int min = arr[0];
	    int max = arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i] < min){
	            min = arr[i];
	        }
	        if(arr[i] > max){
	            max = arr[i];
	        }
	    }
	    
	    int x = max-min;
	    if(x<=1){
	        cout<<0<<endl;
	    }else{
	        cout<<(x-1)<<endl;
	    }
	}

}
