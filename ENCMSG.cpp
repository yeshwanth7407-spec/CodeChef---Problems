/*
============================================================
CodeChef Problem : ENCMSG
Title            : Encoding Message
Rating           : 1045
Topics           : Strings / Implementation / Cipher
Date Solved      : 2026-08-26

Problem Statement:
Given a string S of length N consisting of lowercase English letters,
encode the message using the following two steps:
1. Swap adjacent characters: Swap S[1] with S[2], S[3] with S[4], and so on.
   If N is odd, leave the last character unchanged.
2. Character replacement: Replace each letter with its symmetric alphabet
   counterpart (e.g., 'a' <-> 'z', 'b' <-> 'y', ..., 'z' <-> 'a').

Approach:
- Step 1 (Adjacent Swapping):
  - Iterate through the string from index 0 to N - 2 with a step size of 2 (i += 2).
  - Swap characters at positions `i` and `i + 1`.
  - If N is odd, the last character at index N - 1 is naturally untouched.
- Step 2 (Alphabet Inversion):
  - Iterate through every index `i` from 0 to N - 1.
  - Map each character to its symmetric opposite using the transformation:
    `s[i] = 'z' - (s[i] - 'a')` (or `'a' + 'z' - s[i]`).
- Print the transformed string `s`.

Time Complexity  : O(N) per test case
Space Complexity : O(1) auxiliary space (modifying in-place)
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i+=2){
        char t = s[i];
        s[i] = s[i+1];
        s[i+1] = t;
    }
    for(int i=0;i<n;i++){
         s[i] = 'z'-(s[i]-'a');
    }
    cout<<s<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	   solve();
	}

}
