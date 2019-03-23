/**
 * author: marcavenzaid
 * date created: October 06, 2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string vowels = "AEIOUY";
    bool is_vowel = false;
    for (int i = 0; i < vowels.length(); ++i) {
        if (s[2] == vowels[i]) {
            is_vowel = true;
            break;
        }
    }
    bool is_invalid = false;
    for (int i = 0; i < 8; ++i) {
        if (i == 1 || i == 2 || i == 5 || i == 6) {
            continue;
        }
        if ((s[i] + s[i+1]) % 2 != 0) {
            is_invalid = true;
            break;
        }
    }
    if (is_vowel || is_invalid) {
        cout << "invalid" << "\n";
    } else {
        cout << "valid" << "\n";
    }
    return 0;
}