/**
 * author: marcavenzaid
 * created: 2018-08-19-18.10
 */

#include <bits/stdc++.h>

using namespace std;

const int ALPHA_LEN = 26;

int string_max_lowchar_frequency(string s, int n) {
    int frequencies[ALPHA_LEN] = {0};
    for (int i = 0; i < n; ++i) {
        ++frequencies[s[i]-97];
    }
    int max_frequency = -1;
    for (int i = 0; i < ALPHA_LEN; ++i) {
        if (frequencies[i] > max_frequency) {
            max_frequency = frequencies[i];
        }
    }
    return max_frequency;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << n - string_max_lowchar_frequency(s, n) << "\n";
    return 0;
}
