/*
============================================================
CodeChef Problem : CODETOWN
Title            : Reach Codetown
Rating           : 1022
Topics           : Strings / Basic Implementation
Date Solved      : 2026-08-23

Problem Statement:
You are given a string S of length 8 consisting of uppercase English letters. 
In one step, you can change a vowel to any other vowel or a consonant to any 
other consonant. Determine if it is possible to transform the string S into 
the target string "CODETOWN".

Approach:
- The target word "CODETOWN" has a fixed pattern of vowels and consonants:
  - Consonants at 0-based indices: 0 (C), 2 (D), 4 (T), 6 (W), 7 (N)
  - Vowels at 0-based indices    : 1 (O), 3 (E), 5 (O)
- Since vowels can only transform into vowels and consonants into consonants, 
  string S can reach "CODETOWN" if and only if every character in S matches the 
  exact vowel/consonant parity of "CODETOWN" at each index.
- Iterate through indices 0 to 7:
  - If index is 1, 3, or 5, verify that S[i] is a vowel (A, E, I, O, U).
  - For all other indices, verify that S[i] is NOT a vowel.
- If all 8 positions match the pattern, print "YES", otherwise "NO".

Time Complexity  : O(1) per test case (fixed length of 8 characters)
Space Complexity : O(1) auxiliary space
============================================================
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool pos = true;
        for (int i = 0; i < 8; i++) {
            if (i == 1 || i == 3 || i == 5) {
                if (!isVowel(s[i])) {
                    pos = false;
                    break;
                }
            } else {
                if (isVowel(s[i])) {
                    pos = false;
                    break;
                }
            }
        }
        cout << (pos ? "YES" : "NO") << endl;
    }

}