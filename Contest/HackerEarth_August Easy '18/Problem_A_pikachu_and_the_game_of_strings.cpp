/**
 * author: marcavenzaid
 * created: 2018-08-04-21.36
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        while (t[i] != s[i]) {
            int diff;
            if (t[i] < s[i]) {
                diff = 26 - (s[i] - t[i]);
            } else {
                diff = t[i] - s[i];
            }

            if (diff >= 13) {
                s[i] += 13;
            } else {
                s[i] += 1;
            }
            if (s[i] > 90) {
                s[i] %= 90;
                s[i] += 64;
            }
            ++counter;
        }
    }
    cout << counter << "\n";
    return 0;
}


