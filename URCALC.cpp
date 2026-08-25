/*
============================================================
CodeChef Problem : URCALC
Title            : Program Your Own CALCULATOR
Rating           : 1048
Topics           : Basic Programming / Implementation / Conditionals
Date Solved      : 2026-08-26

Problem Statement:
Write a simple calculator program that takes two numerical operands A and B, 
followed by an operator character C ('+', '-', '*', '/'), and computes 
the corresponding arithmetic result (A + B, A - B, A * B, or A / B).

Approach:
- Read operands A and B as floating-point numbers (double) to handle division with fractional precision.
- Read operator character C.
- Use a switch-case or conditional branching structure on operator C:
  - If '+': Output A + B.
  - If '-': Output A - B.
  - If '*': Output A * B.
  - If '/': Output A / B with floating-point precision (using std::setprecision).

Time Complexity  : O(1)
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b;
	cin>>a;
	cin>>b;
	char c;
	cin>>c;
	switch (c){
	    case '+':
	        cout<<(a+b)<<endl;
	        break;
	    case '-':
	        cout<<(a-b)<<endl;
	        break;
	    case '*':
	        cout<<(a*b)<<endl;
	        break;
	    case '/':
	        cout<<setprecision(10)<<(a/b)<<endl;
	        break;
	    default:
	        break;
	}
}
