/**
 *    author: marcavenzaid
 *    created: 2018-07-23-00.22
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int offset = 0;
        if (s.length()%2 != 0) {
            offset = 1;
        }
        for (int i = 0; i < s.length()-offset; i=i+2) {
            swap(s[i], s[i+1]);
        }
        for (int i = 0; i < s.length(); ++i) {
            s[i] = 122 - (s[i] - 97 + 122) % 122;
        }
        cout << s << "\n";
    }
    return 0;
}
