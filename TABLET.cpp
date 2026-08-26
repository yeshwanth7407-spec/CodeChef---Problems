/*
============================================================
CodeChef Problem : TABLET
Title            : Buying New Tablet
Rating           : 1037
Topics           : Basic Programming / Linear Search / Greedy
Date Solved      : 2026-08-26

Problem Statement:
Chef has a budget B and wants to buy a tablet with the maximum screen area. 
There are N tablets available, where the i-th tablet has width W, height H, 
and price P. Chef can only purchase a tablet if its price does not exceed B (P <= B).
Find the maximum possible screen area (W * H) Chef can buy, or output "no tablet" 
if all options exceed his budget.

Approach:
- Maintain a running maximum variable `max_area` initialized to 0.
- Iterate through each of the N tablet options:
  - Read dimensions `w`, `h`, and price `p` on the fly.
  - If the tablet is within the budget (`p <= b`), update `max_area = max(max_area, w * h)`.
- After processing all tablets:
  - If `max_area == 0` (no tablet was affordable), output "no tablet".
  - Otherwise, output `max_area`.

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,b;
	    cin>>n>>b;
	    int max_area = 0;
	    for(int i=0;i<n;i++){
	        int w,h,p;
	        cin>>w>>h>>p;
	        
	        if(p<=b){
	            max_area = max(max_area,w*h);
	        }
	    }
	    (max_area==0)?cout<<"no tablet"<<endl:cout<<max_area<<endl;
	}

}
